// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "UObject/Interface.h"
#include "IPCGNodeSourceTextProvider.generated.h"

UINTERFACE()
class PCG_API UPCGNodeSourceTextProvider : public UInterface
{
	GENERATED_BODY()
};

/**
* [EXPERIMENTAL] Interface for node source text editing widgets.
* Note: This struct is subject to change without deprecation.
*/
class PCG_API IPCGNodeSourceTextProvider
{
	GENERATED_BODY()

#if WITH_EDITOR	
public:
	/** Get text for declarations pane. */
	virtual FString GetDeclarationsText() const = 0;

	/** Get text for shader functions pane. */
	virtual FString GetShaderFunctionsText() const = 0;

	/** Get shader text for editor pane. */
	virtual FString GetShaderText() const = 0;

	/** Set shader functions text after edit modifications. */
	virtual void SetShaderFunctionsText(const FString& NewFunctionsText) = 0;

	/** Set shader text after edit modifications. */
	virtual void SetShaderText(const FString& NewText) = 0;

	/** Return true is the shader text can be edited */
	virtual bool IsShaderTextReadOnly() const = 0;
#endif
};
