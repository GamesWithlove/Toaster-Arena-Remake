/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////

#include "PTMTool.h"

#include "Editor/BlueprintGraph/Classes/K2Node_Variable.h"
#include "Editor/BlueprintGraph/Classes/K2Node_CustomEvent.h"
#include "Editor/BlueprintGraph/Classes/K2Node_FunctionEntry.h"
#include "Editor/BlueprintGraph/Classes/K2Node_FunctionResult.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template<typename T>
T* GetCDO(UBlueprint* Blueprint) {
	if (Blueprint==nullptr) {return nullptr;}
	//
	const UClass* BlueprintClass = Blueprint->GeneratedClass;
	return Cast<T>(BlueprintClass->ClassDefaultObject);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const bool FPropertyTransferManager::IsSupportedProperty(const FProperty* Property) {
	return (
		Property->IsA(FStrProperty::StaticClass()) ||
		Property->IsA(FIntProperty::StaticClass()) ||
		Property->IsA(FSetProperty::StaticClass()) ||
		Property->IsA(FMapProperty::StaticClass()) ||
		Property->IsA(FBoolProperty::StaticClass()) ||
		Property->IsA(FByteProperty::StaticClass()) ||
		Property->IsA(FEnumProperty::StaticClass()) ||
		Property->IsA(FNameProperty::StaticClass()) ||
		Property->IsA(FTextProperty::StaticClass()) ||
		Property->IsA(FFloatProperty::StaticClass()) ||
		Property->IsA(FArrayProperty::StaticClass()) ||
		Property->IsA(FDoubleProperty::StaticClass()) ||
		Property->IsA(FStructProperty::StaticClass()) ||
		Property->IsA(FObjectProperty::StaticClass())
	);
}

UBlueprint* FPropertyTransferManager::GetBlueprintFromObject(UObject* OBJ) {
	UBlueprint* BP = nullptr;
	//
	if (OBJ!=nullptr) {
		BP = Cast<UBlueprint>(OBJ);
		//
		if (BP==nullptr) {
			BP = Cast<UBlueprint>(OBJ->GetClass()->ClassGeneratedBy);
		}
	}
	//
	return BP;
}

const bool FPropertyTransferManager::HasBlueprintSelectedOnBrowser(UObject *& Asset) {
	TArray<FAssetData>Selection;
	//
	FContentBrowserModule &ContentBrowser = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	ContentBrowser.Get().GetSelectedAssets(Selection);
	//
	bool IsBlueprint = false;
	for (const FAssetData &SLC : Selection) {
		if (SLC.GetAsset()!=nullptr) {
			Asset = GetCDO<UObject>(GetBlueprintFromObject(SLC.GetAsset()));
			IsBlueprint = (Asset != nullptr); 
		break;}
	}
	//
	return ((Selection.Num()>=1) && IsBlueprint);
}

TArray<UObject*>FPropertyTransferManager::GetAllSelectedBlueprints(UObject *& Except) {
	TArray<FAssetData>Selection;
	//
	FContentBrowserModule &ContentBrowser = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	ContentBrowser.Get().GetSelectedAssets(Selection);
	TArray<UObject*>Assets;
	//
	for (const FAssetData &SLC : Selection) {
		if (SLC.GetAsset()==nullptr) {continue;}
		if (GetCDO<UObject>(GetBlueprintFromObject(SLC.GetAsset()))==Except) {continue;}
		//
		Assets.Add(GetCDO<UObject>(GetBlueprintFromObject(SLC.GetAsset())));
	}
	//
	return Assets;
}

UObject* FPropertyTransferManager::GetSelectedBlueprint() {
	TArray<FAssetData>Selection;
	//
	FContentBrowserModule &ContentBrowser = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	ContentBrowser.Get().GetSelectedAssets(Selection);
	//
	for (const FAssetData &SLC : Selection) {
		if (SLC.GetAsset()==nullptr) {continue;}
		//
		UObject* CDO = GetCDO<UObject>(GetBlueprintFromObject(SLC.GetAsset()));
		if (CDO != nullptr) {return CDO;}
	}
	//
	return nullptr;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TArray<FPTM_PropertyInfo>FPropertyTransferManager::CollectBlueprintPropertyInfo(UObject* Asset, const SuperClassFlags Scope, const EPropertyFlags Filter) {
	check(Asset);
	//
	TArray<FPTM_PropertyInfo>InfoCollection;
	for (TFieldIterator<FProperty>PIT(Asset->GetClass(),Scope); PIT; ++PIT) {
		FProperty* Property = *PIT;
		FPTM_PropertyInfo PInfo;
		//
		if (Property->HasAnyPropertyFlags(CPF_Deprecated)) {continue;}
		if (!Property->HasAnyPropertyFlags(Filter)) {continue;}
		if (!IsSupportedProperty(Property)) {continue;}
		//
		if (Property->IsA(FObjectProperty::StaticClass())) {
			const UObject* OBJ = *Property->ContainerPtrToValuePtr<UObject*>(Asset);
			if (OBJ==nullptr||OBJ->IsA(UActorComponent::StaticClass())) {continue;}
		}
		//
		PInfo.PropertyClash = false;
		PInfo.Property = Property;
		//
		InfoCollection.Add(PInfo);
	}
	//
	return InfoCollection;
}

bool FPropertyTransferManager::CopyBlueprintProperty(UObject* Source, UObject* Target, const FName &Variable, const SuperClassFlags Scope, const EPropertyFlags Filter) {
	check(Source); check(Target);
	//
	UBlueprint* SBlueprint = GetBlueprintFromObject(Source);
	UBlueprint* TBlueprint = GetBlueprintFromObject(Target);
	//
	if (SBlueprint==nullptr||TBlueprint==nullptr) {return false;}
	if (Variable.IsNone()) {return false;}
	//
	const int32 SIndex = FBlueprintEditorUtils::FindNewVariableIndex(SBlueprint,Variable);
	const int32 PIndex = FBlueprintEditorUtils::FindNewVariableIndex(TBlueprint,Variable);
	//
	if ((SIndex==INDEX_NONE)||(PIndex!=INDEX_NONE)) {return false;}
	//
	const FScopedTransaction Transaction(LOCTEXT("PTM_TransferProperty","Transfer Property"));
	for (TFieldIterator<FProperty>PIT(Source->GetClass(),Scope); PIT; ++PIT) {
		FProperty* Property = *PIT;
		//
		if (Property->HasAnyPropertyFlags(CPF_Deprecated)) {continue;}
		if (!Property->HasAnyPropertyFlags(Filter)) {continue;}
		if (!IsSupportedProperty(Property)) {continue;}
		if (Property->GetFName()!=Variable) {continue;}
		//
		if (Property->IsA(FObjectProperty::StaticClass())) {
			const UObject* OBJ = *Property->ContainerPtrToValuePtr<UObject*>(Source);
			if (OBJ==nullptr||OBJ->IsA(UActorComponent::StaticClass())) {continue;}
		}
		//
		FBPVariableDescription Description;
		FBPVariableDescription &Original = SBlueprint->NewVariables[SIndex];
		//
		Description.VarName = Original.VarName;
		Description.VarType = Original.VarType;
		Description.VarGuid = FGuid::NewGuid();
		Description.Category = Original.Category;
		Description.FriendlyName = Original.FriendlyName;
		Description.DefaultValue = Original.DefaultValue;
		Description.MetaDataArray = Original.MetaDataArray;
		Description.PropertyFlags = Original.PropertyFlags;
		Description.RepNotifyFunc = Original.RepNotifyFunc;
		Description.ReplicationCondition = Original.ReplicationCondition;
		//
		void* PropertyPtr = Property->ContainerPtrToValuePtr<void>(Source);
		if (PropertyPtr!=nullptr) {
			Description.DefaultValue.Empty();
			Property->ExportTextItem_Direct(Description.DefaultValue,PropertyPtr,PropertyPtr,nullptr,PPF_SerializedAsImportText);
		}
		//
		TBlueprint->NewVariables.Add(Description);
	return true;}
	//
	return false;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TArray<FFTM_FunctionInfo> FPropertyTransferManager::CollectBlueprintFunctionInfo(UObject* Asset) {
	check(Asset);
	//
	TArray<FFTM_FunctionInfo>InfoCollection;
	UBlueprint* Blueprint = GetBlueprintFromObject(Asset);
	//
	if (Blueprint==nullptr) {return InfoCollection;}
	//
	for (UEdGraph* GR : Blueprint->FunctionGraphs) {
		if (GR->GetName().Contains(TEXT("ConstructionScript"))) {continue;}
		//
		FFTM_FunctionInfo FInfo;
		FInfo.GraphClash=false;
		FInfo.Graph = GR;
		//
		InfoCollection.Add(FInfo);
	}
	//
	InfoCollection.Append(CollectBlueprintMacroInfo(Asset));
	//
	return InfoCollection;
}

bool FPropertyTransferManager::CopyBlueprintFunction(UObject* Source, UObject* Target, const FName &Function) {
	const UEdGraphSchema_K2* Schema = GetDefault<UEdGraphSchema_K2>();
	check(Source); check(Target); check(Schema);
	//
	UBlueprint* SBlueprint = GetBlueprintFromObject(Source);
	UBlueprint* TBlueprint = GetBlueprintFromObject(Target);
	//
	if (Function.IsNone()) {return false;}
	if (SBlueprint==nullptr||TBlueprint==nullptr) {return false;}
	if (TBlueprint->BlueprintType==BPTYPE_MacroLibrary) {return false;}
	//
	const FScopedTransaction Transaction(LOCTEXT("PTM_TransferFunction","Transfer Function"));
	for (UEdGraph* GR : SBlueprint->FunctionGraphs) {
		if (GR->GetName().Contains(TEXT("ConstructionScript"))) {continue;}
		if (!Schema->CanDuplicateGraph(GR)) {continue;}
		if (GR->GetFName()!=Function) {continue;}
		//
		EGraphType GType = Schema->GetGraphType(GR);
		if (GType!=GT_Function) {continue;}
		//
		if (TBlueprint->BlueprintType != BPTYPE_Interface) {
			UEdGraph* NGraph = FEdGraphUtilities::CloneGraph(GR,TBlueprint);
			if (NGraph) {
				NGraph->GraphGuid = FGuid::NewGuid();
				NGraph->Rename(*Function.ToString(),TBlueprint,REN_DoNotDirty|REN_ForceNoResetLoaders);
				//
				for (int32 NodeID=0; NodeID < NGraph->Nodes.Num(); ++NodeID) {
					UEdGraphNode* Node = NGraph->Nodes[NodeID];
					if (UK2Node_FunctionEntry* EntryNode = Cast<UK2Node_FunctionEntry>(Node)) {
						if (EntryNode->FunctionReference.GetMemberName()==GR->GetFName()) {
							EntryNode->Modify();
							EntryNode->FunctionReference.SetMemberName(NGraph->GetFName());
						break;}
					} else if (Node->IsA(UK2Node_CustomEvent::StaticClass())) {
						UK2Node_CustomEvent* CustomEvent = Cast<UK2Node_CustomEvent>(Node);
						CustomEvent->RenameCustomEventCloseToName();
					} else if (Node->IsA(UK2Node_Variable::StaticClass())) {
						UK2Node_Variable* Variable = Cast<UK2Node_Variable>(Node);
						//
						if (!Variable->VariableReference.ResolveMember<FProperty>(TBlueprint)) {
							FName SourceVarName = Variable->VariableReference.GetMemberName();
							FProperty* VarReroute = nullptr;
							//
							for (TFieldIterator<FProperty>PIT(Source->GetClass(),EFieldIteratorFlags::IncludeSuper); PIT; ++PIT) {
								FProperty* Property = *PIT;
								//
								if (Property->HasAnyPropertyFlags(CPF_Deprecated)) {continue;}
								if (Property->GetFName()==SourceVarName) {VarReroute=Property; break;}
							}
							//
							if (VarReroute) {
								Variable->VariableReference.InvalidateScope();
								Variable->VariableReference.SetSelfMember(SourceVarName);
								//
								UEdGraphPin* TargetPin = Variable->FindPinChecked(TEXT("self"),EGPD_Input);
								TargetPin->PinType.PinSubCategoryObject = TBlueprint->GeneratedClass.Get();
							}
						}
					}
				}
				//
				FBlueprintEditorUtils::ValidateBlueprintChildVariables(TBlueprint,NGraph->GetFName());
				//
				TBlueprint->FunctionGraphs.Add(NGraph);
				FBlueprintEditorUtils::RefreshAllNodes(TBlueprint);
				FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(TBlueprint);
			return true;}
		} else {
			UEdGraph* NGraph = FEdGraphUtilities::CloneGraph(GR,TBlueprint);
			if (NGraph) {
				NGraph->GraphGuid = FGuid::NewGuid();
				NGraph->Rename(*Function.ToString(),TBlueprint,REN_DoNotDirty|REN_ForceNoResetLoaders);
				//
				for (int32 NodeID=0; NodeID < NGraph->Nodes.Num(); ++NodeID) {
					UEdGraphNode* Node = NGraph->Nodes[NodeID];
					//
					if (UK2Node_FunctionEntry* FunctionEntry = Cast<UK2Node_FunctionEntry>(Node)) {FunctionEntry->BreakAllNodeLinks(); continue;}
					if (UK2Node_FunctionResult* FunctionResult = Cast<UK2Node_FunctionResult>(Node)) {FunctionResult->BreakAllNodeLinks(); continue;}
					//
					NGraph->RemoveNode(Node);
				}
				//
				FBlueprintEditorUtils::ValidateBlueprintChildVariables(TBlueprint,NGraph->GetFName());
				//
				TBlueprint->FunctionGraphs.Add(NGraph);
				FBlueprintEditorUtils::RefreshAllNodes(TBlueprint);
				FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(TBlueprint);
			return true;}
		}
	}
	//
	return false;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TArray<FFTM_FunctionInfo> FPropertyTransferManager::CollectBlueprintMacroInfo(UObject* Asset) {
	check(Asset);
	//
	TArray<FFTM_FunctionInfo>InfoCollection;
	UBlueprint* Blueprint = GetBlueprintFromObject(Asset);
	//
	if (Blueprint==nullptr) {return InfoCollection;}
	//
	for (UEdGraph* GR : Blueprint->MacroGraphs) {
		FFTM_FunctionInfo FInfo;
		FInfo.GraphClash=false;
		FInfo.Graph = GR;
		//
		InfoCollection.Add(FInfo);
	}
	//
	return InfoCollection;
}

bool FPropertyTransferManager::CopyBlueprintMacro(UObject* Source, UObject* Target, const FName &Macro) {
	const UEdGraphSchema_K2* Schema = GetDefault<UEdGraphSchema_K2>();
	check(Source); check(Target); check(Schema);
	//
	UBlueprint* SBlueprint = GetBlueprintFromObject(Source);
	UBlueprint* TBlueprint = GetBlueprintFromObject(Target);
	//
	if (Macro.IsNone()) {return false;}
	if (SBlueprint==nullptr||TBlueprint==nullptr) {return false;}
	//
	const FScopedTransaction Transaction(LOCTEXT("PTM_TransferMacro","Transfer Macro"));
	for (UEdGraph* GR : SBlueprint->MacroGraphs) {
		if (!Schema->CanDuplicateGraph(GR)) {continue;}
		if (GR->GetFName()!=Macro) {continue;}
		//
		EGraphType GType = Schema->GetGraphType(GR);
		if (GType!=GT_Macro) {continue;}
		//
		UEdGraph* NGraph = FEdGraphUtilities::CloneGraph(GR,TBlueprint);
		if (NGraph) {
			NGraph->GraphGuid = FGuid::NewGuid();
			NGraph->Rename(*Macro.ToString(),TBlueprint,REN_DoNotDirty|REN_ForceNoResetLoaders);
			//
			for (int32 NodeID=0; NodeID < NGraph->Nodes.Num(); ++NodeID) {
				UEdGraphNode* Node = NGraph->Nodes[NodeID];
				if (UK2Node_FunctionEntry* EntryNode = Cast<UK2Node_FunctionEntry>(Node)) {
					if (EntryNode->FunctionReference.GetMemberName()==GR->GetFName()) {
						EntryNode->Modify();
						EntryNode->FunctionReference.SetMemberName(NGraph->GetFName());
					break;}
				}
			}
			//
			FBlueprintEditorUtils::ValidateBlueprintChildVariables(TBlueprint,NGraph->GetFName());
			//
			TBlueprint->MacroGraphs.Add(NGraph);
			FBlueprintEditorUtils::RefreshAllNodes(TBlueprint);
			FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(TBlueprint);
		return true;}
	}
	//
	return false;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////