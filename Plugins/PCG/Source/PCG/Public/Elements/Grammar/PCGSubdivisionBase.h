// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGContext.h"
#include "PCGSettings.h"
#include "Grammar/PCGGrammar.h"
#include "Utils/PCGLogErrors.h"

#include "PCGSubdivisionBase.generated.h"

class UPCGData;
class UPCGPointData;

USTRUCT(BlueprintType)
struct FPCGSubdivisionSubmodule
{
	GENERATED_BODY()

	/** Symbol for the grammar. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "")
	FName Symbol = NAME_None;

	/** Size of the block, aligned on the segment direction. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "")
	double Size = 100.0;

	/** If the volume can be scaled to fit the remaining space or not. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "")
	bool bScalable = false;

	/** For easier debugging, using Point color in conjunction with PCG Debug Color Material. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Debug")
	FVector4 DebugColor = FVector4::One();
};

namespace PCGSubdivisionBase::Constants
{
	const FName ModulesInfoPinLabel = TEXT("ModulesInfo");
	const FName SymbolAttributeName = TEXT("Symbol");
	const FName SizeAttributeName = TEXT("Size");
	const FName ScalableAttributeName = TEXT("Scalable");
	const FName DebugColorAttributeName = TEXT("DebugColor");
}

USTRUCT(BlueprintType)
struct FPCGSubdivisionModuleAttributeNames
{
	GENERATED_BODY()

public:
	/** Mandatory. Expected type: FName. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "")
	FName SymbolAttributeName = PCGSubdivisionBase::Constants::SymbolAttributeName;

	/** Mandatory. Expected type: double. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "")
	FName SizeAttributeName = PCGSubdivisionBase::Constants::SizeAttributeName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "", meta = (InlineEditConditionToggle))
	bool bProvideScalable = false;

	/** Optional. Expected type: bool. If disabled, default value will be false. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "", meta = (EditCondition = "bProvideScalable"))
	FName ScalableAttributeName = PCGSubdivisionBase::Constants::ScalableAttributeName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "", meta = (InlineEditConditionToggle))
	bool bProvideDebugColor = false;

	/** Optional. Expected type: Vector4. If disabled, default value will be (1.0, 1.0, 1.0, 1.0). */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "", meta = (EditCondition = "bProvideDebugColor"))
	FName DebugColorAttributeName = PCGSubdivisionBase::Constants::DebugColorAttributeName;
};

UCLASS(MinimalAPI, Abstract, ClassGroup = (Procedural))
class UPCGSubdivisionBaseSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	//~Begin UPCGSettings interface
#if WITH_EDITOR
	virtual EPCGSettingsType GetType() const override { return EPCGSettingsType::Spatial; }
#endif

	virtual bool UseSeed() const override { return true; }
	//~End UPCGSettings interface

	virtual void PostLoad() override;

public:
	/** Set it to true to pass the info as attribute set. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings)
	bool bModuleInfoAsInput = false;

	/** Fixed array of modules used for the subdivision. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "!bModuleInfoAsInput", EditConditionHides, DisplayAfter = bModuleInfoAsInput))
	TArray<FPCGSubdivisionSubmodule> ModulesInfo;

	/** Fixed array of modules used for the subdivision. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bModuleInfoAsInput", EditConditionHides, DisplayAfter = bModuleInfoAsInput, DisplayName = "Attribute Names for Module Info"))
	FPCGSubdivisionModuleAttributeNames ModulesInfoAttributeNames;

	/** An encoded string that represents how to apply a set of rules to a series of defined modules. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (ShowOnlyInnerProperties, PCG_Overridable))
	FPCGGrammarSelection GrammarSelection;

	/** Controls whether we'll use an attribute to drive random seeding for stochastic processes in the subdivision. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (PCG_Overridable, InlineEditConditionToggle))
	bool bUseSeedAttribute = false;

	/** Attribute to use to drive seed selection. It should be convertible to an integer. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Settings, meta = (EditCondition = "bUseSeedAttribute", PCG_Overridable))
	FPCGAttributePropertyInputSelector SeedAttribute;

	/** Do a match and set with the incoming modules info, only if the modules info is passed as input. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (EditCondition = "bModuleInfoAsInput", EditConditionHides, PCG_Overridable))
	bool bForwardAttributesFromModulesInfo = false;

	/** Name of the Symbol output attribute name. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable))
	FName SymbolAttributeName = PCGSubdivisionBase::Constants::SymbolAttributeName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, InlineEditConditionToggle))
	bool bOutputSizeAttribute = true;

	/** Name of the Size output attribute name, ignored if Forward Attributes From Modules Info is true. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, EditCondition = "bOutputSizeAttribute"))
	FName SizeAttributeName = PCGSubdivisionBase::Constants::SizeAttributeName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, InlineEditConditionToggle))
	bool bOutputScalableAttribute = true;

	/** Name of the Scalable output attribute name, ignored if Forward Attributes From Modules Info is true. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, EditCondition = "bOutputScalableAttribute"))
	FName ScalableAttributeName = PCGSubdivisionBase::Constants::ScalableAttributeName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, InlineEditConditionToggle))
	bool bOutputDebugColorAttribute = false;

	/** Name of the Debug Color output attribute name, ignored if Forward Attributes From Modules Info is true. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings|Extra Output Attributes", meta = (PCG_Overridable, EditCondition = "bOutputDebugColorAttribute"))
	FName DebugColorAttributeName = PCGSubdivisionBase::Constants::DebugColorAttributeName;

private:
#if WITH_EDITORONLY_DATA
	UE_DEPRECATED(5.5, "Use 'GrammarSelection' instead.")
	UPROPERTY()
	bool bGrammarAsAttribute_DEPRECATED = false;

	UE_DEPRECATED(5.5, "Use 'GrammarSelection' instead.")
	UPROPERTY()
	FString Grammar_DEPRECATED;
#endif // WITH_EDITORONLY_DATA
};

namespace PCGSubdivisionBase
{
	using FModuleInfoMap = TMap<FName, FPCGSubdivisionSubmodule>;

	// Materialized modules created from a tokenized grammar.
	template <typename T>
	struct TModuleInstance
	{
		TModuleInstance() = default;
		explicit TModuleInstance(const T* InModule) : Module(InModule) {}

		const T* Module = nullptr;
		double ExtraScale = 0.0;
		bool bIsValid = true;
		bool bSkipExpansion = false;
	};

	PCGGrammar::FTokenizedGrammar GetTokenizedGrammar(FPCGContext* InContext, const FString& InGrammar, const FModuleInfoMap& InModulesInfo, double& OutMinSize);

	template <typename T>
	bool Subdivide(const T& Root, double Length, TArray<TModuleInstance<T>>& OutModuleInstances, double& RemainingLength, FPCGContext* InOptionalContext = nullptr, int32 InOptionalAdditionalSeed = 0)
	{
		OutModuleInstances.Reset();
		RemainingLength = Length;

		if (!Root.IsValid() || FMath::IsNearlyZero(Length))
		{
			return true;
		}

		FRandomStream RandomStream((InOptionalContext ? InOptionalContext->GetSeed() : 42) + InOptionalAdditionalSeed);
		TArray<TModuleInstance<T>> CurrentModules;

		// Start with root
		CurrentModules.Emplace(&Root);
		RemainingLength -= Root.GetMinSize(); // Here we use the min size because we'll consume concrete size only during expansion

		if (RemainingLength < 0)
		{
			PCGLog::LogErrorOnGraph(NSLOCTEXT("PCGSubdivisionBase", "SegmentCutFail", "Grammar doesn't fit for this segment."), InOptionalContext);
			return false;
		}

		// Working data sets
		TArray<TModuleInstance<T>*> PriorityModules;
		TArray<TModuleInstance<T>*> StochasticModules;
		TArray<TModuleInstance<T>> ExpandedModules;
		TArray<TModuleInstance<T>> PreviousModules;

		bool bNotDone = true;
		while (bNotDone)
		{
			bNotDone = false;
			// 1. Expand/Visit sequences
			// Implementation note; since we've already consumed the min size, there's no need to update anything when expanding nodes, only when replacing with another choice.
			// We'll keep track of whether we have certain types of nodes at this point so we can short-circuit some passes
			ExpandedModules.Reset();
			ExpandedModules.Reserve(CurrentModules.Num());
			bool bHasPriorityOrStochasticModules = false;

			for (TModuleInstance<T>& CurrentModule : CurrentModules)
			{
				if (!CurrentModule.bIsValid)
				{
					continue; // discard this module (reclaim?)
				}

				if ((CurrentModule.Module->GetType() == PCGGrammar::EModuleType::Root || CurrentModule.Module->GetType() == PCGGrammar::EModuleType::Sequence))
				{
					// When we duplicate sequences, we can't expand them directly otherwise they won't be repeatable
					if (CurrentModule.bSkipExpansion)
					{
						// Copy module as-is, but remove the expansion limitation so we break it down next iteration
						TModuleInstance<T>& ExpandedModule = ExpandedModules.Add_GetRef(CurrentModule);
						ExpandedModule.bSkipExpansion = false;
					}
					else
					{
						for (const T& Submodule : CurrentModule.Module->Submodules)
						{
							if (Submodule.IsValid())
							{
								// Expand module if it has a positive number of iterations (>= 1) or if it the unit size would fit.
								// This is where we do a difference also between the * (0+) and + cases; the + will have a force one repetition here, while the * will not.
								int NumRepeats = Submodule.GetNumRepeat();
								if (Submodule.GetNumRepeat() == PCGGrammar::AtLeastOneRepetition)
								{
									NumRepeats = 1;
								}
								else if (NumRepeats == PCGGrammar::InfiniteRepetition && RemainingLength >= Submodule.GetMinConcreteSize())
								{
									NumRepeats = 1;
									RemainingLength -= Submodule.GetMinConcreteSize();
								}

								for (int R = 0; R < NumRepeats; ++R)
								{
									TModuleInstance<T>& ExpandedModule = ExpandedModules.Emplace_GetRef(&Submodule);
								}

								if (NumRepeats > 0)
								{
									bNotDone = true;
									bHasPriorityOrStochasticModules |= (Submodule.GetType() == PCGGrammar::EModuleType::Priority || Submodule.GetType() == PCGGrammar::EModuleType::Stochastic);
								}
							}
						}
					}
				}
				else if (CurrentModule.Module->GetType() == PCGGrammar::EModuleType::Priority || CurrentModule.Module->GetType() == PCGGrammar::EModuleType::Stochastic)
				{
					bHasPriorityOrStochasticModules = true;

					// Copy module as-is, but remove the expansion limitation so we break it down next iteration
					TModuleInstance<T>& ExpandedModule = ExpandedModules.Add_GetRef(CurrentModule);
					ExpandedModule.bSkipExpansion = false;
				}
				else
				{
					// Copy module as-is, but do NOT remove the expansion limitation, otherwise we will have issues with literals with repetitions.
					TModuleInstance<T>& ExpandedModule = ExpandedModules.Add_GetRef(CurrentModule);
				}
			}

			CurrentModules = MoveTemp(ExpandedModules);

			// 2- Make a copy of the current set of modules, because we'll use this for repeatable modules
			PreviousModules = CurrentModules;

			// 3- Perform choices
			if (bHasPriorityOrStochasticModules)
			{
				// 3.1 - Gather priority & stochastic modules (pointers here)
				PriorityModules.Reset();
				StochasticModules.Reset();

				for (TModuleInstance<T>& CurrentModule : CurrentModules)
				{
					check(CurrentModule.Module);
					if (CurrentModule.Module->GetType() == PCGGrammar::EModuleType::Priority)
					{
						PriorityModules.Add(&CurrentModule);
					}
					else if (CurrentModule.Module->GetType() == PCGGrammar::EModuleType::Stochastic)
					{
						StochasticModules.Add(&CurrentModule);
					}
				}

				bNotDone |= (!PriorityModules.IsEmpty() || !StochasticModules.IsEmpty());

				// 3.2 - Apply priority choices first (from left to right)
				for (TModuleInstance<T>* PriorityModule : PriorityModules)
				{
					bool bWasReplaced = false;
					// Replace current module by the first of its childen that has a min size that fits in with the remaining length
					for (const T& PrioritySubmodule : PriorityModule->Module->Submodules)
					{
						if (!PrioritySubmodule.IsValid())
						{
							continue;
						}

						const double DeltaMinSize = (PrioritySubmodule.GetMinConcreteSize() - PriorityModule->Module->GetConcreteUnitSize());
						check(DeltaMinSize >= 0);
						if (RemainingLength >= DeltaMinSize)
						{
							PriorityModule->Module = &PrioritySubmodule;
							RemainingLength -= DeltaMinSize;
							bWasReplaced = true;
							break;
						}
					}

					if (!bWasReplaced)
					{
						// TODO Kill this module + reclaim size(?)
						PriorityModule->bIsValid = false;
					}
				}

				// 3.3 Process stochastic modules
				// TODO random pick order of stochastic modules
				for (TModuleInstance<T>* StochasticModule : StochasticModules)
				{
					// Replace current module by a random pick according to total weights of "valid" choices we can still make
					int TotalWeight = 0;
					for (const T& StochasticSubmodule : StochasticModule->Module->Submodules)
					{
						if (!StochasticSubmodule.IsValid())
						{
							continue;
						}

						const double DeltaMinSize = (StochasticSubmodule.GetMinConcreteSize() - StochasticModule->Module->GetConcreteUnitSize());
						check(DeltaMinSize >= 0);
						if (DeltaMinSize <= RemainingLength)
						{
							TotalWeight += StochasticSubmodule.GetWeight();
						}
					}

					if (TotalWeight == 0)
					{
						// Kill module + reclaim size(?)
						StochasticModule->bIsValid = false;
						continue;
					}

					int WeightPick = RandomStream.RandRange(0, TotalWeight - 1);
					bool bWasReplaced = false;

					for (const T& StochasticSubmodule : StochasticModule->Module->Submodules)
					{
						if (!StochasticSubmodule.IsValid())
						{
							continue;
						}

						const double DeltaMinSize = (StochasticSubmodule.GetMinConcreteSize() - StochasticModule->Module->GetConcreteUnitSize());
						check(DeltaMinSize >= 0);
						if (DeltaMinSize <= RemainingLength)
						{
							if (StochasticSubmodule.GetWeight() > WeightPick)
							{
								bWasReplaced = true;
								RemainingLength -= DeltaMinSize;
								StochasticModule->Module = &StochasticSubmodule;
								break;
							}
							else
							{
								WeightPick -= StochasticSubmodule.GetWeight();
							}
						}
					}

					check(bWasReplaced);
				}
			}

			// 4. Add arbitrary repetitions, requires to keep data from previous iteration
			// Implementation note: since we add one module only in each iteration, it will definitely be inefficient when there is a long chain of things to duplicate.
			check(PreviousModules.Num() == CurrentModules.Num());
			int NumAddedRepetitions = 0;

			for (int ModuleIndex = 0; ModuleIndex < PreviousModules.Num(); ++ModuleIndex)
			{
				TModuleInstance<T>& PreviousModule = PreviousModules[ModuleIndex];
				if (!PreviousModule.bSkipExpansion && PreviousModule.Module->GetNumRepeat() < 0 && PreviousModule.Module->GetMinConcreteSize() <= RemainingLength)
				{
					// Mark the module to skip expansion, otherwise we can't chain for repeats
					PreviousModule.bSkipExpansion = true;
					CurrentModules.Insert(PreviousModule, ModuleIndex + NumAddedRepetitions + 1);
					++NumAddedRepetitions;
					RemainingLength -= PreviousModule.Module->GetMinConcreteSize();
				}
			}

			bNotDone |= (NumAddedRepetitions > 0);
		}

#if WITH_EDITOR
		// Perform some early validation and see if there's a mismatch on the reported size and the one actually placed
		double CountedLength = RemainingLength;
		for (TModuleInstance<T>& CurrentModule : CurrentModules)
		{
			CountedLength += CurrentModule.Module->GetUnitSize();
		}

		ensure(FMath::Abs(CountedLength-Length) < 1.0);
#endif

		// 7. Finally, apply adjusted scales to modules that support it.
		check(RemainingLength >= 0);
		if (!FMath::IsNearlyZero(RemainingLength))
		{
			int32 NumScalableModules = 0;
			double ScalableLength = 0;
			for (TModuleInstance<T>& CurrentModule : CurrentModules)
			{
				if (CurrentModule.Module->IsScalable())
				{
					++NumScalableModules;
					// implementation note: at this point we have only unit-literals, so we need to ignore repetitions, if any here, hence using the unit size
					ScalableLength += CurrentModule.Module->GetUnitSize();
				}
			}

			if (ScalableLength > 0)
			{
				for (TModuleInstance<T>& CurrentModule : CurrentModules)
				{
					if (CurrentModule.Module->IsScalable())
					{
						CurrentModule.ExtraScale = (RemainingLength / ScalableLength);
					}
				}

				RemainingLength = 0;
			}
		}

		OutModuleInstances = MoveTemp(CurrentModules);

		return true;
	}
}

class FPCGSubdivisionBaseElement : public IPCGElement
{
public:
	// Worth computing a full CRC in case we can halt change propagation/re-executions
	virtual bool ShouldComputeFullOutputDataCrc(FPCGContext* Context) const override { return true; }

protected:
	using FModuleInfoMap = PCGSubdivisionBase::FModuleInfoMap;

	FModuleInfoMap GetModulesInfoMap(FPCGContext* InContext, const TArray<FPCGSubdivisionSubmodule>& SubmodulesInfo, const UPCGParamData*& OutModuleInfoParamData) const;
	FModuleInfoMap GetModulesInfoMap(FPCGContext* InContext, const FPCGSubdivisionModuleAttributeNames& InSubdivisionModuleAttributeNames, const UPCGParamData*& OutModuleInfoParamData) const;
	FModuleInfoMap GetModulesInfoMap(FPCGContext* InContext, const UPCGSubdivisionBaseSettings* InSettings, const UPCGParamData*& OutModuleInfoParamData) const;
	PCGGrammar::FTokenizedGrammar GetTokenizedGrammar(FPCGContext* InContext, const UPCGData* InputData, const UPCGSubdivisionBaseSettings* InSettings, const FModuleInfoMap& InModulesInfo, double& OutMinSize) const;
	TMap<FString, PCGGrammar::FTokenizedGrammar> GetTokenizedGrammarForPoints(FPCGContext* InContext, const UPCGPointData* InputData, const UPCGSubdivisionBaseSettings* InSettings, const FModuleInfoMap& InModulesInfo, double& OutMinSize) const;
	bool MatchAndSetAttributes(const TArray<FPCGTaggedData>& InputData, TArray<FPCGTaggedData>& OutputData, const UPCGParamData* InModuleInfoParamData, const UPCGSubdivisionBaseSettings* InSettings) const;
};
