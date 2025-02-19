// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metadata/Accessors/IPCGAttributeAccessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_IPCGAttributeAccessor_generated_h
#error "IPCGAttributeAccessor.generated.h already included, missing '#pragma once' in IPCGAttributeAccessor.h"
#endif
#define PCG_IPCGAttributeAccessor_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Metadata_Accessors_IPCGAttributeAccessor_h


#define FOREACH_ENUM_EPCGATTRIBUTEACCESSORFLAGS(op) \
	op(EPCGAttributeAccessorFlags::StrictType) \
	op(EPCGAttributeAccessorFlags::AllowBroadcast) \
	op(EPCGAttributeAccessorFlags::AllowConstructible) \
	op(EPCGAttributeAccessorFlags::AllowSetDefaultValue) 

enum class EPCGAttributeAccessorFlags;
template<> struct TIsUEnumClass<EPCGAttributeAccessorFlags> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGAttributeAccessorFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
