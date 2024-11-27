// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Metadata/PCGAttributePropertySelector.h"
#include "Metadata/PCGMetadataAttributeTpl.h"
#include "Metadata/Accessors/IPCGAttributeAccessor.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"
#include "Metadata/Accessors/PCGAttributeAccessorKeys.h"

#include "UObject/UnrealType.h" // IWYU pragma: keep

enum class EPCGMetadataTypes : uint8;

struct FPCGContext;
class UPCGData;
class UPCGParamData;

namespace PCGPropertyHelpers
{
	/**
	* Get a property value and pass it as a parameter to a callback function.
	* @param InObject - The object to read from
	* @param InProperty - The property to look for
	* @param InFunc - Callback function that can return anything, and should have a single templated argument, where the property will be.
	* @returns Forward the result of the callback.
	*/
	template <typename ObjectType, typename Func>
	decltype(auto) GetPropertyValueWithCallback(const ObjectType* InObject, const FProperty* InProperty, Func InFunc);

	/**
	* Set a property value given by a callback function.
	* @param InObject - The object to write to
	* @param InProperty - The property to look for
	* @param InFunc - Callback function that take a reference to a templated type. It will set the property with this value. returns true if we should set, false otherwise.
	* @returns Forward the result of the callback
	*/
	template <typename ObjectType, typename Func>
	bool SetPropertyValueFromCallback(ObjectType* InObject, const FProperty* InProperty, Func InFunc);

	/**
	* Conversion between property type and PCG type.
	* @param InProperty - The property to look for
	* @returns PCG type if the property is supported, Unknown otherwise.
	*/
	PCG_API EPCGMetadataTypes GetMetadataTypeFromProperty(const FProperty* InProperty);

	struct FExtractorParameters
	{
		// Disable deprecation warning on the rule of 5 because of the PropertySelector member.
		PRAGMA_DISABLE_DEPRECATION_WARNINGS
		FExtractorParameters() = default;
		FExtractorParameters(const FExtractorParameters&) = default;
		FExtractorParameters(FExtractorParameters&&) = default;
		FExtractorParameters& operator=(const FExtractorParameters&) = default;
		FExtractorParameters& operator=(FExtractorParameters&&) = default;
		PRAGMA_ENABLE_DEPRECATION_WARNINGS

		FExtractorParameters(const void* InContainer, const UStruct* InClass, const FPCGAttributePropertySelector& InPropertySelector, FName InOutputAttributeName, bool bInShouldExtract, bool bInPropertyNeedsToBeVisible);
		FExtractorParameters(const void* InContainer, const UStruct* InClass, const TArray<FPCGAttributePropertySelector>& InPropertySelectors, FName InOutputAttributeName, bool bInShouldExtract, bool bInPropertyNeedsToBeVisible);
		FExtractorParameters(const void* InContainer, const UStruct* InClass, const FString& InPropertySelectorString, FName InOutputAttributeName, bool bInShouldExtract, bool bInPropertyNeedsToBeVisible);
		
		// Pointer to the container containing the data we want to extract
		const void* Container = nullptr;

		// Class or ScriptStruct of the object/struct we want to extract the property from.
		const UStruct* Class = nullptr;

		// Selector of the property we want to extract
		UE_DEPRECATED(5.5, "Use the selector array (PropertySelectors) instead.")
		FPCGAttributePropertySelector PropertySelector;

		TArray<FPCGAttributePropertySelector> PropertySelectors;

		// Optional name of the attribute that will receive the extracted property. If None, will take the property name. 
		// Also not used for Structs/Object extraction, as we will create multiple attributes, and they will be the name of all the extracted members.
		FName OutputAttributeName = NAME_None;

		// If the property we want to extract is an object/struct, give the possibility to extract all their member in one go.
		// Only work if their members are not structs or containers (like array).
		bool bShouldExtract = false;

		// Extra flag if the property needs to be visible to be extractable.
		bool bPropertyNeedsToBeVisible = false;
	};

	/**
	* Extract a given property in an Attribute Set.
	* @param Parameters - Parameters for extraction, cf above.
	* @param OptionalContext - Optional context if the extraction is done in a PCG Node, so errors are using the context to log.
	* @param OptionalObjectTraversed - Optional set to store all objects that we traversed, to be able to react to those objects changes.
	*/
	PCG_API UPCGParamData* ExtractPropertyAsAttributeSet(const FExtractorParameters& Parameters, FPCGContext* OptionalContext = nullptr, TSet<FSoftObjectPath>* OptionalObjectTraversed = nullptr, bool bQuiet = false);

	/**
	* Extract an attribute set in a array of structures. T MUST be a UStruct. Also, it must only contain supported types (so no arrays nor other structures)
	* @param InParamData - Attribute set that contains the data.
	* @param OptionalNameMapping - Optional mapping for the name in the structure and the name in the attribute set. Can also say if this property is required, or not and should be defaulted. By default all are defaulted if not found.
	* @param OptionalContext - Optional context if the extraction is done in a PCG Node, so errors are using the context to log.
	*/
	template <typename T>
	TArray<T> ExtractAttributeSetAsArrayOfStructs(const UPCGParamData* InParamData, const TMap<FName, TTuple<FName, bool>>* OptionalNameMapping = nullptr, FPCGContext* OptionalContext = nullptr);
}

//////
/// PCGPropertyHelpers Implementation
//////

// Func signature : auto(auto&&)
template <typename ObjectType, typename Func>
inline decltype(auto) PCGPropertyHelpers::GetPropertyValueWithCallback(const ObjectType* InObject, const FProperty* InProperty, Func InFunc)
{
	if (!InObject || !InProperty)
	{
		return false;
	}

	TUniquePtr<IPCGAttributeAccessor> PropertyAccessor = PCGAttributeAccessorHelpers::CreatePropertyAccessor(InProperty);

	if (!PropertyAccessor.IsValid())
	{
		return false;
	}

	auto Getter = [&PropertyAccessor, &InFunc, InObject](auto Dummy)
	{
		using Type = decltype(Dummy);
		Type Value{};
		FPCGAttributeAccessorKeysSingleObjectPtr<ObjectType> Key(InObject);

		if (PropertyAccessor->Get<Type>(Value, Key))
		{
			return InFunc(Value);
		}
		else
		{
			using ReturnType = decltype(InFunc(0.0));
			if constexpr (std::is_same_v<ReturnType, void>)
			{
				return;
			}
			else
			{
				return ReturnType{};
			}
		}
	};

	return PCGMetadataAttribute::CallbackWithRightType(PropertyAccessor->GetUnderlyingType(), Getter);
}

// Func signature : bool(auto&)
// Will have property value in first arg, and boolean return if we should set the property after.
// Returns true if the set succeeded
template <typename ObjectType, typename Func>
inline bool PCGPropertyHelpers::SetPropertyValueFromCallback(ObjectType* InObject, const FProperty* InProperty, Func InFunc)
{
	if (!InObject || !InProperty)
	{
		return false;
	}

	TUniquePtr<IPCGAttributeAccessor> PropertyAccessor = PCGAttributeAccessorHelpers::CreatePropertyAccessor(InProperty);

	if (!PropertyAccessor.IsValid())
	{
		return false;
	}

	auto Setter = [&PropertyAccessor, &InFunc, InObject](auto Dummy) -> bool
	{
		using Type = decltype(Dummy);
		Type Value{};
		FPCGAttributeAccessorKeysSingleObjectPtr<ObjectType> Key(InObject);

		if (InFunc(Value))
		{
			return PropertyAccessor->Set<Type>(Value, Key);
		}
		else
		{
			return false;
		}
	};

	return PCGMetadataAttribute::CallbackWithRightType(PropertyAccessor->GetUnderlyingType(), Setter);
}

template <typename T>
TArray<T> PCGPropertyHelpers::ExtractAttributeSetAsArrayOfStructs(const UPCGParamData* InParamData, const TMap<FName, TTuple<FName, bool>>* OptionalNameMapping, FPCGContext* OptionalContext)
{
	if (!ensure(InParamData))
	{
		return {};
	}

	TArray<T> OutResult;
	for (TFieldIterator<const FProperty> PropIt(T::StaticStruct(), EFieldIterationFlags::IncludeSuper); PropIt; ++PropIt)
	{
		if (!PCGAttributeAccessorHelpers::IsPropertyAccessorSupported(*PropIt))
		{
			continue;
		}

		FName PropertyName = *T::StaticStruct()->GetAuthoredNameForField(*PropIt);
		bool bCanBeDefaulted = true;
		const TTuple<FName, bool>* It = OptionalNameMapping ? OptionalNameMapping->Find(PropertyName) : nullptr;
		if (It)
		{
			PropertyName = It->Get<0>();
			bCanBeDefaulted = It->Get<1>();
		}

		FPCGAttributePropertySelector Selector = FPCGAttributePropertySelector::CreateAttributeSelector(PropertyName);
		const TUniquePtr<const IPCGAttributeAccessor> Accessor = PCGAttributeAccessorHelpers::CreateConstAccessor(CastChecked<UPCGData>(InParamData), Selector);
		const TUniquePtr<const IPCGAttributeAccessorKeys> Keys = PCGAttributeAccessorHelpers::CreateConstKeys(CastChecked<UPCGData>(InParamData), Selector);

		if (!Accessor || !Keys)
		{
			if (!bCanBeDefaulted)
			{
				PCGLog::Metadata::LogFailToCreateAccessorError(Selector, OptionalContext);
				return {};
			}
			else
			{
				continue;
			}
		}

		const int32 NumElements = Keys->GetNum();

		if (OutResult.IsEmpty())
		{
			OutResult.SetNum(NumElements);
		}

		if (NumElements == 0 || NumElements != OutResult.Num())
		{
			return {};
		}

		TUniquePtr<IPCGAttributeAccessor> StructAccessor = PCGAttributeAccessorHelpers::CreatePropertyAccessor(*PropIt);
		TArrayView<T> StructData(OutResult.GetData(), OutResult.Num());
		FPCGAttributeAccessorKeysGeneric<T> StructKeys(StructData);

		auto GetSetRange = [OptionalContext, &Keys, &Accessor, &StructAccessor, &StructKeys, NumElements, PropertyName]<typename PropertyType>(PropertyType Dummy) -> bool
		{
			TArray<PropertyType> Temp;
			if constexpr (std::is_trivially_copyable_v<PropertyType>)
			{
				Temp.SetNumUninitialized(NumElements);
			}
			else
			{
				Temp.SetNum(NumElements);
			}

			if (!Accessor->GetRange<PropertyType>(Temp, 0, *Keys, EPCGAttributeAccessorFlags::AllowBroadcastAndConstructible))
			{
				PCGLog::Metadata::LogFailToGetAttributeError<PropertyType>(FText::FromName(PropertyName), Accessor.Get(), OptionalContext);
				return false;
			}

			return StructAccessor->SetRange<PropertyType>(Temp, 0, StructKeys);
		};

		if (!PCGMetadataAttribute::CallbackWithRightType(StructAccessor->GetUnderlyingType(), GetSetRange))
		{
			return {};
		}
	}

	return OutResult;
}
