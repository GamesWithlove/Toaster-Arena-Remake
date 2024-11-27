// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGCommon.h"
#include "PCGData.h"

class AActor;
class UActorComponent;
class UPCGComponent;
struct FPCGContext;
struct FPCGComponentSelectorSettings;

/** Struct to hold selection criteria */
struct FPCGGetDataFunctionRegistryParams
{
	const UPCGComponent* SourceComponent = nullptr;
	const FPCGComponentSelectorSettings* ComponentSelector = nullptr;
	EPCGDataType DataTypeFilter = EPCGDataType::Any;
	bool bParseActor = true;
	bool bIgnorePCGGeneratedComponents = true;
	bool bAddActorTags = true;
};

struct FPCGGetDataFunctionRegistryOutput
{
	FPCGDataCollection Collection;
	bool bSanitizedTagAttributeNames = false;
};

/** Registry to hold actor & component to PCG data construction mapping */
struct PCG_API FPCGGetDataFunctionRegistry
{
public:
	using FDataFromActorFunction = TFunction<bool(FPCGContext*, const FPCGGetDataFunctionRegistryParams&, AActor*, FPCGGetDataFunctionRegistryOutput&)>;
	using FDataFromComponentFunction = TFunction<bool(FPCGContext*, const FPCGGetDataFunctionRegistryParams&, UActorComponent*, FPCGGetDataFunctionRegistryOutput&)>;
	using FFunctionHandle = uint64;

	FPCGGetDataFunctionRegistry() = default;
	FPCGGetDataFunctionRegistry(const FPCGGetDataFunctionRegistry&) = delete;
	FPCGGetDataFunctionRegistry(FPCGGetDataFunctionRegistry&&) = default;
	FPCGGetDataFunctionRegistry& operator=(const FPCGGetDataFunctionRegistry&) = delete;
	FPCGGetDataFunctionRegistry& operator=(FPCGGetDataFunctionRegistry&&) = default;
	virtual ~FPCGGetDataFunctionRegistry() = default;

	/** Register an actor to PCG data function. */
	FFunctionHandle RegisterDataFromActorFunction(const FDataFromActorFunction& InFunction);

	/** Unregisters an actor to PCG data function. */
	void UnregisterDataFromActorFunction(FFunctionHandle InFunctionHandle);

	/** Appends actor data to the given collection and returns the number of data added. */
	int GetDataFromActor(FPCGContext* InContext, const FPCGGetDataFunctionRegistryParams& InParams, AActor* InActor, FPCGGetDataFunctionRegistryOutput& OutDataCollection) const;

	/** Register a component to PCG data function. */
	FFunctionHandle RegisterDataFromComponentFunction(const FDataFromComponentFunction& InFunction);

	/** Unregisters a component to PCG data function. */
	void UnregisterDataFromComponentFunction(FFunctionHandle InFunctionHandle);

	/** Append component data to the given collection, returns the number of data added. */
	int GetDataFromComponent(FPCGContext* InContext, const FPCGGetDataFunctionRegistryParams& InParams, UActorComponent* InComponent, FPCGGetDataFunctionRegistryOutput& OutDataCollection) const;

private:
	int DefaultDataFromActor(FPCGContext* InContext, const FPCGGetDataFunctionRegistryParams& InParams, AActor* InActor, FPCGGetDataFunctionRegistryOutput& OutDataCollection) const;
	int DefaultDataFromComponent(FPCGContext* InContext, const FPCGGetDataFunctionRegistryParams& InParams, UActorComponent* InComponent, FPCGGetDataFunctionRegistryOutput& OutDataCollection) const;

	FFunctionHandle NextFunctionHandle = 0;

	TArray<TPair<FDataFromActorFunction, FFunctionHandle>> ActorParsingFunctions;
	TArray<TPair<FDataFromComponentFunction, FFunctionHandle>> ComponentParsingFunctions;
};