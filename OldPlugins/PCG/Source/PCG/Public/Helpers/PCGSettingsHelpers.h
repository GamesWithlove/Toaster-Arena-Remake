// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGModule.h"
#include "PCGParamData.h"
#include "PCGSettings.h"
#include "Data/PCGSpatialData.h"
#include "Metadata/PCGMetadataAttributeTpl.h"
#include "Metadata/PCGMetadataAttributeTraits.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"
#include "Metadata/Accessors/IPCGAttributeAccessor.h"
#include "Metadata/Accessors/PCGAttributeAccessorKeys.h"

class UPCGComponent;
class UPCGNode;
class UPCGPin;
struct FPCGDataCollection;

namespace PCGSettingsHelpers
{
	/** Sets data from the params to a given property, matched on a name basis */
	void SetValue(UPCGParamData* Params, UObject* Object, FProperty* Property);

	/** Utility to call from before-node-update deprecation. A dedicated pin for params will be added when the pins are updated. Here we detect any params
	*   connections to the In pin and disconnect them, and move the first params connection to a new params pin.
	*/
	void DeprecationBreakOutParamsToNewPin(UPCGNode* InOutNode, TArray<TObjectPtr<UPCGPin>>& InputPins, TArray<TObjectPtr<UPCGPin>>& OutputPins);

	/**
	* Advanced method to gather override params when you don't have access to FPCGContext (and therefore don't have access to automatic
	* param override).
	* Limitation: Only support metadata types for T.
	*/
	template <typename T>
	bool GetOverrideValue(const FPCGDataCollection& InInputData, const UPCGSettings* InSettings, const FName InPropertyName, const T& InDefaultValue, T& OutValue)
	{
		check(InSettings);

		// Limitation: Only support metadata types
		static_assert(PCG::Private::IsPCGType<T>());

		// Try to find the override param associated with the property.
		const FPCGSettingsOverridableParam* Param = InSettings->OverridableParams().FindByPredicate([InPropertyName](const FPCGSettingsOverridableParam& InParam) { return !InParam.PropertiesNames.IsEmpty() && (InParam.PropertiesNames.Last() == InPropertyName);});

		OutValue = InDefaultValue;

		if (!Param)
		{
			return false;
		}

		PCGAttributeAccessorHelpers::AccessorParamResult AccessorResult{};
		TUniquePtr<const IPCGAttributeAccessor> AttributeAccessor = PCGAttributeAccessorHelpers::CreateConstAccessorForOverrideParamWithResult(InInputData, *Param, &AccessorResult);

		const FName AttributeName = AccessorResult.AttributeName;

		if (!AttributeAccessor)
		{
			return false;
		}

		return PCGMetadataAttribute::CallbackWithRightType(PCG::Private::MetadataTypes<T>::Id, [&AttributeAccessor, &Param, &AttributeName, &InDefaultValue, &OutValue](auto Dummy) -> bool
		{
			using PropertyType = decltype(Dummy);

			// Override were using the first entry (0) by default.
			FPCGAttributeAccessorKeysEntries FirstEntry(PCGMetadataEntryKey(0));

			if (!AttributeAccessor->Get<T>(OutValue, FirstEntry, EPCGAttributeAccessorFlags::AllowBroadcast | EPCGAttributeAccessorFlags::AllowConstructible))
			{
				UE_LOG(LogPCG, Warning, TEXT("[PCGSettingsHelpers::GetOverrideValue] '%s' parameter cannot be converted from '%s' attribute, incompatible types."), *Param->Label.ToString(), *AttributeName.ToString());
				return false;
			}

			return true;
		});
	}

	inline const UPCGSpatialData* ComputeBoundingShape(FPCGContext* Context, FName BoundingShapeLabel, bool& bOutUnionWasCreated)
	{
		const UPCGSpatialData* BoundingShape = Context->InputData.GetSpatialUnionOfInputsByPin(Context, BoundingShapeLabel, bOutUnionWasCreated);

		// Fallback to getting bounds from actor
		if (!BoundingShape && Context->SourceComponent.IsValid())
		{
			check(bOutUnionWasCreated == false);
			BoundingShape = Cast<UPCGSpatialData>(Context->SourceComponent->GetActorPCGData());
		}

		return BoundingShape;
	}

	struct FPCGGetAllOverridableParamsConfig
	{
		// If we don't use the seed, don't add it as override.
		bool bUseSeed = false;

		// Don't look for properties from parents
		bool bExcludeSuperProperties = false;

#if WITH_EDITOR
		// List of metadata values to find in property metadata. Only works in editor builds as metadata on property is not available elsewise.
		TArray<FName> IncludeMetadataValues;

		// If the metadata values is a conjunction (all values need to be present to keep), or disjunction (any values needs to be present to keep)
		bool bIncludeMetadataIsConjunction = false;

		// List of metadata values to find in property metadata. Only works in editor builds as metadata on property is not available elsewise.
		TArray<FName> ExcludeMetadataValues;

		// If the exclude values is a conjunction (all values need to be present to discard), or disjunction (any values needs to be present to discard)
		bool bExcludeMetadataIsConjunction = false;
#endif // WITH_EDITOR

		// Flags to exclude in property flags
		uint64 ExcludePropertyFlags = 0;

		// If the exclude flags is a conjunction (all flags need to be present to discard), or disjunction (any flag needs to be present to discard)
		bool bExcludePropertyFlagsIsConjunction = false;

		// Flags to include in property flags. Note that if exclusion says discard, it will be discarded.
		uint64 IncludePropertyFlags = 0;

		// If the include flags is a conjunction (all flags need to be present to keep), or disjunction (any flag needs to be present to keep)
		bool bIncludePropertyFlagsIsConjunction = false;

		// Max depth for structs of structs. -1 = no limit
		int32 MaxStructDepth = -1;

		// If you want to go through objects too
		bool bExtractObjects = false;

		// If you want to also extract arrays
		bool bExtractArrays = false;
	};

	PCG_API TArray<FPCGSettingsOverridableParam> GetAllOverridableParams(const UStruct* InClass, const FPCGGetAllOverridableParamsConfig& InConfig);
}

// Deprecated macro, not necessary anymore. Cf. GetValue
#define PCG_GET_OVERRIDEN_VALUE(Settings, Variable, Params) PCGSettingsHelpers::GetValue(GET_MEMBER_NAME_CHECKED(std::remove_pointer_t<std::remove_const_t<decltype(Settings)>>, Variable), (Settings)->Variable, Params)
