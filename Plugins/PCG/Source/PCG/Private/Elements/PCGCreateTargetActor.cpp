// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGCreateTargetActor.h"

#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGCrc.h"
#include "PCGElement.h"
#include "PCGManagedResource.h"
#include "PCGModule.h"
#include "PCGParamData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGActorHelpers.h"
#include "Helpers/PCGHelpers.h"

#include "Engine/Blueprint.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/Engine.h"
#include "Engine/Level.h"
#include "GameFramework/Actor.h"
#include "Serialization/ArchiveCrc32.h"
#include "UObject/Package.h"

#if WITH_EDITOR
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCreateTargetActor)

#define LOCTEXT_NAMESPACE "PCGCreateTargetActor"

#if WITH_EDITOR

FText UPCGCreateTargetActor::GetDefaultNodeTitle() const
{
	return LOCTEXT("NodeTitle", "Create Target Actor");
}

#endif // WITH_EDITOR

namespace PCGCreateTargetActorConstants
{
	const FName ActorPropertyOverridesLabel = TEXT("Property Overrides");
	const FText ActorPropertyOverridesTooltip = LOCTEXT("ActorOverrideToolTip", "Provide property overrides for the created target actor. The attribute name must match the InputSource name in the actor property override description.");
}

namespace PCGCreateTargetActor
{
	static TAutoConsoleVariable<bool> CVarCreateTargetActorAllowReuse(
		TEXT("pcg.CreateTargetActor.AllowReuse"),
		false,
		TEXT("Controls whether PCG Create Target Actor node can reuse actors when re-executing (requires Create Target Actor node resave so they have a Stable Reuse Guid)"));

	FPCGCrc GetAdditionalDependenciesCrc(const UPCGActorHelpers::FSpawnDefaultActorParams& InParams, AActor* TargetActor)
	{
		FArchiveCrc32 Ar;

		Ar << TargetActor;

		// Do not CRC Everything as some of those params come from the Settings which is already CRCed
		UObject* Level = InParams.SpawnParams.OverrideLevel;
		Ar << Level;

		int32 ObjectFlags = InParams.SpawnParams.ObjectFlags;
		Ar << ObjectFlags;
				
		// Include transform - round sufficiently to ensure stability
		FVector TransformLocation = InParams.Transform.GetLocation();
		FIntVector Location(FMath::RoundToInt(TransformLocation.X), FMath::RoundToInt(TransformLocation.Y), FMath::RoundToInt(TransformLocation.Z));
		Ar << Location;

		FRotator Rotator(InParams.Transform.Rotator().GetDenormalized());
		const int32 MAX_DEGREES = 360;
		FIntVector Rotation(FMath::RoundToInt(Rotator.Pitch) % MAX_DEGREES, FMath::RoundToInt(Rotator.Yaw) % MAX_DEGREES, FMath::RoundToInt(Rotator.Roll) % MAX_DEGREES);
		Ar << Rotation;

		FVector TransformScale = InParams.Transform.GetScale3D();
		const float SCALE_FACTOR = 100;
		FIntVector Scale(FMath::RoundToInt(TransformScale.X * SCALE_FACTOR), FMath::RoundToInt(TransformScale.Y * SCALE_FACTOR), FMath::RoundToInt(TransformScale.Z * SCALE_FACTOR));
		Ar << Scale;
				
#if WITH_EDITOR
		TArray<const UDataLayerInstance*> DataLayerInstances = InParams.DataLayerInstances;
		DataLayerInstances.Sort([](const UDataLayerInstance& A, const UDataLayerInstance& B)
		{
			return A.GetDataLayerFullName() < B.GetDataLayerFullName();
		});

		for (const UDataLayerInstance* DataLayerInstance : DataLayerInstances)
		{
			UDataLayerInstance* NonConstDataLayerInstance = const_cast<UDataLayerInstance*>(DataLayerInstance);
			Ar << NonConstDataLayerInstance;
		}
#endif
		
		return FPCGCrc(Ar.GetCrc());
	}
}

UPCGCreateTargetActor::UPCGCreateTargetActor(const FObjectInitializer& ObjectInitializer)
	: UPCGSettings(ObjectInitializer)
{
	if (PCGHelpers::IsNewObjectAndNotDefault(this))
	{
		AttachOptions = EPCGAttachOptions::InFolder;
	}
}

FPCGElementPtr UPCGCreateTargetActor::CreateElement() const
{
	return MakeShared<FPCGCreateTargetActorElement>();
}

TArray<FPCGPinProperties> UPCGCreateTargetActor::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Add(PCGObjectPropertyOverrideHelpers::CreateObjectPropertiesOverridePin(PCGCreateTargetActorConstants::ActorPropertyOverridesLabel, PCGCreateTargetActorConstants::ActorPropertyOverridesTooltip));
	return PinProperties;
}

TArray<FPCGPinProperties> UPCGCreateTargetActor::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace_GetRef(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Param, false);

	return PinProperties;
}

void UPCGCreateTargetActor::BeginDestroy()
{
#if WITH_EDITOR
	TeardownBlueprintEvent();
#endif

	Super::BeginDestroy();
}

#if WITH_EDITOR
void UPCGCreateTargetActor::SetupBlueprintEvent()
{
	if (UBlueprintGeneratedClass* BlueprintClass = Cast<UBlueprintGeneratedClass>(TemplateActorClass))
	{
		if (UBlueprint* Blueprint = Cast<UBlueprint>(BlueprintClass->ClassGeneratedBy))
		{
			Blueprint->OnChanged().AddUObject(this, &UPCGCreateTargetActor::OnBlueprintChanged);
		}
	}
}

void UPCGCreateTargetActor::TeardownBlueprintEvent()
{
	if (UBlueprintGeneratedClass* BlueprintClass = Cast<UBlueprintGeneratedClass>(TemplateActorClass))
	{
		if (UBlueprint* Blueprint = Cast<UBlueprint>(BlueprintClass->ClassGeneratedBy))
		{
			Blueprint->OnChanged().RemoveAll(this);
		}
	}
}

void UPCGCreateTargetActor::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);

	if (PropertyAboutToChange && PropertyAboutToChange->GetFName() == GET_MEMBER_NAME_CHECKED(UPCGCreateTargetActor, TemplateActorClass))
	{
		TeardownBlueprintEvent();
	}
}

void UPCGCreateTargetActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property)
	{
		const FName& PropertyName = PropertyChangedEvent.Property->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UPCGCreateTargetActor, TemplateActorClass))
		{
			SetupBlueprintEvent();
			RefreshTemplateActor();
		}
		else if (PropertyName == GET_MEMBER_NAME_CHECKED(UPCGCreateTargetActor, bAllowTemplateActorEditing))
		{
			RefreshTemplateActor();
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UPCGCreateTargetActor::PreEditUndo()
{
	TeardownBlueprintEvent();

	Super::PreEditUndo();
}

void UPCGCreateTargetActor::PostEditUndo()
{
	Super::PostEditUndo();

	SetupBlueprintEvent();
	RefreshTemplateActor();
}

void UPCGCreateTargetActor::OnBlueprintChanged(UBlueprint* InBlueprint)
{
	RefreshTemplateActor();
	OnSettingsChangedDelegate.Broadcast(this, EPCGChangeType::Settings);
}

void UPCGCreateTargetActor::RefreshTemplateActor()
{
	// Implementation note: this is similar to the child actor component implementation
	if (TemplateActorClass && bAllowTemplateActorEditing)
	{
		const bool bCreateNewTemplateActor = (!TemplateActor || TemplateActor->GetClass() != TemplateActorClass);

		if (bCreateNewTemplateActor)
		{
			AActor* NewTemplateActor = NewObject<AActor>(GetTransientPackage(), TemplateActorClass, NAME_None, RF_ArchetypeObject | RF_Transactional | RF_Public);

			if (TemplateActor)
			{
				UEngine::FCopyPropertiesForUnrelatedObjectsParams Options;
				Options.bNotifyObjectReplacement = true;
				UEngine::CopyPropertiesForUnrelatedObjects(TemplateActor, NewTemplateActor, Options);

				TemplateActor->Rename(nullptr, GetTransientPackage(), REN_DontCreateRedirectors);

				TMap<UObject*, UObject*> OldToNew;
				OldToNew.Emplace(TemplateActor, NewTemplateActor);
				GEngine->NotifyToolsOfObjectReplacement(OldToNew);

				TemplateActor->MarkAsGarbage();
			}

			TemplateActor = NewTemplateActor;

			// Record initial object state in case we're in a transaction context.
			TemplateActor->Modify();

			// Outer to this object
			TemplateActor->Rename(nullptr, this, REN_DoNotDirty | REN_DontCreateRedirectors);
		}
	}
	else
	{
		if (TemplateActor)
		{
			TemplateActor->MarkAsGarbage();
		}

		TemplateActor = nullptr;
	}
}

#endif // WITH_EDITOR

void UPCGCreateTargetActor::PostLoad()
{
	Super::PostLoad();

#if WITH_EDITOR
	// Since the template actor editing is set to false by default, this needs to be corrected on post-load for proper deprecation
	if (TemplateActor)
	{
		bAllowTemplateActorEditing = true;
	}

	SetupBlueprintEvent();

	if (TemplateActorClass)
	{
		if (TemplateActor)
		{
			TemplateActor->ConditionalPostLoad();
		}

		RefreshTemplateActor();
	}
#endif // WITH_EDITOR
}

void UPCGCreateTargetActor::SetTemplateActorClass(const TSubclassOf<AActor>& InTemplateActorClass)
{
#if WITH_EDITOR
	TeardownBlueprintEvent();
#endif // WITH_EDITOR

	TemplateActorClass = InTemplateActorClass;

#if WITH_EDITOR
	SetupBlueprintEvent();
	RefreshTemplateActor();
#endif // WITH_EDITOR
}

void UPCGCreateTargetActor::SetAllowTemplateActorEditing(bool bInAllowTemplateActorEditing)
{
	bAllowTemplateActorEditing = bInAllowTemplateActorEditing;

#if WITH_EDITOR
	RefreshTemplateActor();
#endif // WITH_EDITOR
}

bool FPCGCreateTargetActorElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGCreateTargetActorElement::Execute);

	check(IsInGameThread());

	// Early out if the actor isn't going to be consumed by something else
	if (Context->Node && !Context->Node->IsOutputPinConnected(PCGPinConstants::DefaultOutputLabel))
	{
		return true;
	}

	const UPCGCreateTargetActor* Settings = Context->GetInputSettings<UPCGCreateTargetActor>();
	check(Settings);

	// Early out if the template actor isn't valid
	if (!Settings->TemplateActorClass || Settings->TemplateActorClass->HasAnyClassFlags(CLASS_Abstract) || !Settings->TemplateActorClass->GetDefaultObject()->IsA<AActor>())
	{
		const FText ClassName = Settings->TemplateActorClass ? FText::FromString(Settings->TemplateActorClass->GetFName().ToString()) : FText::FromName(NAME_None);
		PCGE_LOG(Error, GraphAndLog, FText::Format(LOCTEXT("InvalidTemplateActorClass", "Invalid template actor class '{0}'"), ClassName));
		return true;
	}

	if (!ensure(!Settings->TemplateActor || Settings->TemplateActor->IsA(Settings->TemplateActorClass)))
	{
		return true;
	}

	AActor* TargetActor = Settings->RootActor.Get() ? Settings->RootActor.Get() : Context->GetTargetActor(nullptr);
	if (!TargetActor)
	{
		PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidTargetActor", "Invalid target actor"));
		return true;
	}

	const bool bHasAuthority = !Context->SourceComponent.IsValid() || (Context->SourceComponent->GetOwner() && Context->SourceComponent->GetOwner()->HasAuthority());
	const bool bSpawnedActorRequiresAuthority = CastChecked<AActor>(Settings->TemplateActorClass->GetDefaultObject())->GetIsReplicated();

	if (!bHasAuthority && bSpawnedActorRequiresAuthority)
	{
		return true;
	}

	// Spawn actor
	AActor* TemplateActor = Settings->TemplateActor.Get();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Template = TemplateActor;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.OverrideLevel = TargetActor->GetLevel();

	if (PCGHelpers::IsRuntimeOrPIE() || (Context->SourceComponent.IsValid() && Context->SourceComponent->IsInPreviewMode()))
	{
		SpawnParams.ObjectFlags |= RF_Transient;
	}

	FTransform Transform = TargetActor->GetTransform();
	if(Context->IsValueOverriden(GET_MEMBER_NAME_CHECKED(UPCGCreateTargetActor, ActorPivot)))
	{
		Transform = Settings->ActorPivot;
	}

	UPCGActorHelpers::FSpawnDefaultActorParams SpawnDefaultActorParams(TargetActor->GetWorld(), Settings->TemplateActorClass, Transform, SpawnParams);
	
#if WITH_EDITOR
	SpawnDefaultActorParams.DataLayerInstances = TargetActor->GetDataLayerInstances();
#endif

	UPCGManagedActors* ReusableResource = nullptr;
	FPCGCrc ResourceCrc;

	if (PCGCreateTargetActor::CVarCreateTargetActorAllowReuse.GetValueOnAnyThread())
	{
		if (!Context->DependenciesCrc.IsValid())
		{
			// TODO: we should be able to use the InputData to compute Crcs but this Crc contains a non stable UID
			// since CreateTargetActor settings are already overriden by the inputdata, it doesn't matter here and we can just ignore it
			// but for future reference if we want to have better reusing and stable generation across, we need to fix this.
			FPCGDataCollection EmptyCollection;
			GetDependenciesCrc(EmptyCollection, Settings, Context->SourceComponent.Get(), Context->DependenciesCrc);
		}

		if (Context->DependenciesCrc.IsValid())
		{
			ResourceCrc = Context->DependenciesCrc;

			const FPCGCrc StackCRC = Context->Stack->GetCrc();
			ResourceCrc.Combine(StackCRC);

			const FPCGCrc AdditionalCRC = PCGCreateTargetActor::GetAdditionalDependenciesCrc(SpawnDefaultActorParams, TargetActor);
			ResourceCrc.Combine(AdditionalCRC);

			Context->SourceComponent->ForEachManagedResource([&ReusableResource, ResourceCrc, &Context](UPCGManagedResource* InResource)
			{
				if (ReusableResource)
				{
					return;
				}

				if (UPCGManagedActors* Resource = Cast<UPCGManagedActors>(InResource))
				{
					if (Resource->GetCrc().IsValid() && Resource->GetCrc() == ResourceCrc && Resource->GeneratedActors.Num() == 1 && Resource->GeneratedActors.Array()[0].IsValid())
					{
						ReusableResource = Resource;
					}
				}
			});
		}
	}
		
	AActor* GeneratedActor = nullptr;
	if (ReusableResource)
	{
		ReusableResource->MarkAsReused();
		GeneratedActor = ReusableResource->GeneratedActors.Array()[0].Get();
		ensure(GeneratedActor->Tags.Contains(PCGHelpers::DefaultPCGActorTag));
	}
	else
	{
		GeneratedActor = UPCGActorHelpers::SpawnDefaultActor(SpawnDefaultActorParams);
		if (!GeneratedActor)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("ActorSpawnFailed", "Failed to spawn actor"));
			return true;
		}

		GeneratedActor->Tags.Add(PCGHelpers::DefaultPCGActorTag);

#if WITH_EDITOR
		if (!Settings->ActorLabel.IsEmpty())
		{
			GeneratedActor->SetActorLabel(Settings->ActorLabel);
		}
#endif

		// Always attach if root actor is provided
		PCGHelpers::AttachToParent(GeneratedActor, TargetActor, Settings->RootActor.Get() ? EPCGAttachOptions::Attached : Settings->AttachOptions, Context);

		// Apply property overrides to the GeneratedActor
		PCGObjectPropertyOverrideHelpers::ApplyOverridesFromParams(Settings->PropertyOverrideDescriptions, GeneratedActor, PCGCreateTargetActorConstants::ActorPropertyOverridesLabel, Context);
	}
	
	for (UFunction* Function : PCGHelpers::FindUserFunctions(GeneratedActor->GetClass(), Settings->PostProcessFunctionNames, { UPCGFunctionPrototypes::GetPrototypeWithNoParams() }, Context))
	{
		GeneratedActor->ProcessEvent(Function, nullptr);
	}

	// Create Resource if it isn't reused
	if (!ReusableResource)
	{
		if (UPCGComponent* SourceComponent = Context->SourceComponent.Get())
		{
			UPCGManagedActors* ManagedActors = NewObject<UPCGManagedActors>(SourceComponent);
			if (ResourceCrc.IsValid())
			{
				ManagedActors->SetCrc(ResourceCrc);
			}
			ManagedActors->GeneratedActors.Add(GeneratedActor);
			SourceComponent->AddToManagedResources(ManagedActors);
		}
	}

	// Create param data output with reference to actor
	FSoftObjectPath GeneratedActorPath(GeneratedActor);

	UPCGParamData* ParamData = NewObject<UPCGParamData>();
	check(ParamData && ParamData->Metadata);
	FPCGMetadataAttribute<FSoftObjectPath>* ActorPathAttribute = ParamData->Metadata->CreateAttribute<FSoftObjectPath>(PCGPointDataConstants::ActorReferenceAttribute, GeneratedActorPath, /*bAllowsInterpolation=*/false, /*bOverrideParent=*/false);
	check(ActorPathAttribute);
	ParamData->Metadata->AddEntry();

	// Add param data to output and we're done
	Context->OutputData.TaggedData.Emplace_GetRef().Data = ParamData;
	return true;
}

#undef LOCTEXT_NAMESPACE