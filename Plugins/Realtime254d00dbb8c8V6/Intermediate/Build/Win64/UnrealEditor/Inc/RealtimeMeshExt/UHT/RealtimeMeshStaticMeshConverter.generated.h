// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RealtimeMeshStaticMeshConverter.h"

#ifdef REALTIMEMESHEXT_RealtimeMeshStaticMeshConverter_generated_h
#error "RealtimeMeshStaticMeshConverter.generated.h already included, missing '#pragma once' in RealtimeMeshStaticMeshConverter.h"
#endif
#define REALTIMEMESHEXT_RealtimeMeshStaticMeshConverter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URealtimeMeshSimple;
class URealtimeMeshStreamSet;
class UStaticMesh;
enum class ERealtimeMeshOutcomePins : uint8;
struct FRealtimeMeshStaticMeshConversionOptions;
struct FStreamSetStaticMeshConversionOptions;

// ********** Begin ScriptStruct FRealtimeMeshCopyFromStaticMeshOptions ****************************
struct Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics;
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshCopyFromStaticMeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshCopyFromStaticMeshOptions;
// ********** End ScriptStruct FRealtimeMeshCopyFromStaticMeshOptions ******************************

// ********** Begin ScriptStruct FStreamSetStaticMeshConversionOptions *****************************
struct Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics;
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_44_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStreamSetStaticMeshConversionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStreamSetStaticMeshConversionOptions;
// ********** End ScriptStruct FStreamSetStaticMeshConversionOptions *******************************

// ********** Begin ScriptStruct FRealtimeMeshStaticMeshConversionOptions **************************
struct Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics;
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRealtimeMeshStaticMeshConversionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


struct FRealtimeMeshStaticMeshConversionOptions;
// ********** End ScriptStruct FRealtimeMeshStaticMeshConversionOptions ****************************

// ********** Begin Class URealtimeMeshStaticMeshConverter *****************************************
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyRealtimeMeshToStaticMesh); \
	DECLARE_FUNCTION(execCopyRealtimeMeshFromStaticMesh); \
	DECLARE_FUNCTION(execCopyStreamSetToStaticMesh); \
	DECLARE_FUNCTION(execCopyStreamSetFromStaticMesh);


struct Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics;
REALTIMEMESHEXT_API UClass* Z_Construct_UClass_URealtimeMeshStaticMeshConverter_NoRegister();

#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURealtimeMeshStaticMeshConverter(); \
	friend struct ::Z_Construct_UClass_URealtimeMeshStaticMeshConverter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REALTIMEMESHEXT_API UClass* ::Z_Construct_UClass_URealtimeMeshStaticMeshConverter_NoRegister(); \
public: \
	DECLARE_CLASS2(URealtimeMeshStaticMeshConverter, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RealtimeMeshExt"), Z_Construct_UClass_URealtimeMeshStaticMeshConverter_NoRegister) \
	DECLARE_SERIALIZER(URealtimeMeshStaticMeshConverter)


#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URealtimeMeshStaticMeshConverter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URealtimeMeshStaticMeshConverter(URealtimeMeshStaticMeshConverter&&) = delete; \
	URealtimeMeshStaticMeshConverter(const URealtimeMeshStaticMeshConverter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URealtimeMeshStaticMeshConverter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URealtimeMeshStaticMeshConverter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URealtimeMeshStaticMeshConverter) \
	NO_API virtual ~URealtimeMeshStaticMeshConverter();


#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_118_PROLOG
#define FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_121_INCLASS_NO_PURE_DECLS \
	FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URealtimeMeshStaticMeshConverter;

// ********** End Class URealtimeMeshStaticMeshConverter *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Toaster_Arena_Remake_Plugins_Realtime254d00dbb8c8V6_Source_RealtimeMeshExt_Public_RealtimeMeshStaticMeshConverter_h

// ********** Begin Enum ERealtimeMeshCopyStaticMeshLODType ****************************************
#define FOREACH_ENUM_EREALTIMEMESHCOPYSTATICMESHLODTYPE(op) \
	op(ERealtimeMeshCopyStaticMeshLODType::MaxAvailable) \
	op(ERealtimeMeshCopyStaticMeshLODType::HiResSourceModel) \
	op(ERealtimeMeshCopyStaticMeshLODType::SourceModel) \
	op(ERealtimeMeshCopyStaticMeshLODType::RenderData) 

enum class ERealtimeMeshCopyStaticMeshLODType : uint8;
template<> struct TIsUEnumClass<ERealtimeMeshCopyStaticMeshLODType> { enum { Value = true }; };
template<> REALTIMEMESHEXT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERealtimeMeshCopyStaticMeshLODType>();
// ********** End Enum ERealtimeMeshCopyStaticMeshLODType ******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
