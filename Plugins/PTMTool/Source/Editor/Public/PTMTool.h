/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////

#pragma once

#include "PTMTool_Style.h"
#include "PTMTool_Shared.h"

#include "Runtime/Core/Public/Misc/ScopedSlowTask.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"
#include "Runtime/CoreUObject/Public/UObject/UnrealType.h"
#include "Runtime/CoreUObject/Public/UObject/WeakFieldPtr.h"

#include "Editor/UnrealEd/Public/FileHelpers.h"
#include "Editor/UnrealEd/Public/EdGraphUtilities.h"
#include "Editor/UnrealEd/Public/ScopedTransaction.h"
#include "Editor/BlueprintGraph/Classes/EdGraphSchema_K2.h"
#include "Editor/ContentBrowser/Public/ContentBrowserModule.h"
#include "Editor/UnrealEd/Public/Kismet2/BlueprintEditorUtils.h"
#include "Editor/BlueprintGraph/Classes/K2Node_EditablePinBase.h"
#include "Editor/UnrealEd/Public/Kismet2/KismetEditorUtilities.h"
#include "Editor/ContentBrowser/Public/IContentBrowserSingleton.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using namespace EFieldIteratorFlags; 

enum class EPTM_Owner : uint8
{
	Source,
	Target
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct FPTM_PropertyInfo
{
	TWeakFieldPtr<FProperty>Property;
	bool PropertyClash;
	//
	FPTM_PropertyInfo()
		: Property()
		, PropertyClash(false)
	{}
	//
	FPTM_PropertyInfo(TWeakFieldPtr<FProperty>InProperty, bool PropertyClash=false)
		: Property(InProperty)
		, PropertyClash(false)
	{}
	//
	bool operator == (const FPTM_PropertyInfo &Other) const
	{
		return (Property == Other.Property && PropertyClash == Other.PropertyClash);
	}
	//
	bool operator != (const FPTM_PropertyInfo &Other) const {
		return !(*this == Other);
	}
};

struct FFTM_FunctionInfo
{
	TWeakObjectPtr<UEdGraph>Graph;
	bool GraphClash;
	//
	FFTM_FunctionInfo()
		: Graph()
		, GraphClash(false)
	{}
	//
	FFTM_FunctionInfo(TWeakObjectPtr<UEdGraph>InGraph, bool GraphClash=false)
		: Graph(InGraph)
		, GraphClash(false)
	{}
	//
	bool operator == (const FFTM_FunctionInfo &Other) const
	{
		return (Graph == Other.Graph && GraphClash == Other.GraphClash);
	}
	//
	bool operator != (const FFTM_FunctionInfo &Other) const
	{
		return !(*this == Other);
	}
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class FPropertyTransferManager
{
public:
	static const bool IsSupportedProperty(const FProperty* Property);
	//
	static UObject* GetSelectedBlueprint();
	static UBlueprint* GetBlueprintFromObject(UObject* OBJ);
	static const bool HasBlueprintSelectedOnBrowser(UObject *& Asset);
	static TArray<UObject*>GetAllSelectedBlueprints(UObject *& Except);
	//
	static TArray<FPTM_PropertyInfo>CollectBlueprintPropertyInfo(UObject* Asset, const SuperClassFlags Scope = SuperClassFlags::ExcludeSuper, const EPropertyFlags Filter = EPropertyFlags::CPF_BlueprintVisible);
	static bool CopyBlueprintProperty(UObject* Source, UObject* Target, const FName &Variable, const SuperClassFlags Scope = SuperClassFlags::ExcludeSuper, const EPropertyFlags Filter = EPropertyFlags::CPF_BlueprintVisible);
	//
	static TArray<FFTM_FunctionInfo>CollectBlueprintFunctionInfo(UObject* Asset);
	static bool CopyBlueprintFunction(UObject* Source, UObject* Target, const FName &Function);
	//
	static TArray<FFTM_FunctionInfo>CollectBlueprintMacroInfo(UObject* Asset);
	static bool CopyBlueprintMacro(UObject* Source, UObject* Target, const FName &Macro);
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////