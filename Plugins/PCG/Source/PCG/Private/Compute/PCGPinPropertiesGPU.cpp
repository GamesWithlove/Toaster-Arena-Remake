// Copyright Epic Games, Inc. All Rights Reserved.

#include "Compute/PCGPinPropertiesGPU.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGPinPropertiesGPU)

#if WITH_EDITOR
bool FPCGPinPropertiesGPU::CanEditChange(const FEditPropertyChain& PropertyChain) const
{
	if (FProperty* Property = PropertyChain.GetActiveNode()->GetValue())
	{
		if (Property->GetFName() == GET_MEMBER_NAME_CHECKED(FPCGPinProperties, bAllowMultipleData))
		{
			return bAllowEditMultipleData;
		}
	}

	return true;
}
#endif // WITH_EDITOR
