// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryService/WebInventoryServiceTypes.h"

#ifdef STEAMCOREWEB_WebInventoryServiceTypes_generated_h
#error "WebInventoryServiceTypes.generated.h already included, missing '#pragma once' in WebInventoryServiceTypes.h"
#endif
#define STEAMCOREWEB_WebInventoryServiceTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModifyItemsItem **************************************************
struct Z_Construct_UScriptStruct_FModifyItemsItem_Statics;
#define FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceTypes_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModifyItemsItem_Statics; \
	STEAMCOREWEB_API static class UScriptStruct* StaticStruct();


struct FModifyItemsItem;
// ********** End ScriptStruct FModifyItemsItem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_SteamCorbeefec99226cV12_Source_SteamCoreWeb_Public_InventoryService_WebInventoryServiceTypes_h

// ********** Begin Enum EModifyItemPropertyType ***************************************************
#define FOREACH_ENUM_EMODIFYITEMPROPERTYTYPE(op) \
	op(EModifyItemPropertyType::STRING) \
	op(EModifyItemPropertyType::BOOL) \
	op(EModifyItemPropertyType::INT) \
	op(EModifyItemPropertyType::FLOAT) \
	op(EModifyItemPropertyType::REMOVE) 

enum class EModifyItemPropertyType : uint8;
template<> struct TIsUEnumClass<EModifyItemPropertyType> { enum { Value = true }; };
template<> STEAMCOREWEB_NON_ATTRIBUTED_API UEnum* StaticEnum<EModifyItemPropertyType>();
// ********** End Enum EModifyItemPropertyType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
