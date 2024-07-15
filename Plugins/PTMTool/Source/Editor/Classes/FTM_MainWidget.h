/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "PTMTool.h"
#include "FTM_ListButton.h"

#include "Runtime/Core/Public/Misc/MessageDialog.h"
#include "Runtime/Slate/Public/Widgets/Layout/SBox.h"
#include "Runtime/Slate/Public/Widgets/Input/SButton.h"
#include "Runtime/Slate/Public/Widgets/Layout/SBorder.h"
#include "Runtime/Slate/Public/Widgets/Input/SSearchBox.h"
#include "Runtime/Slate/Public/Widgets/Layout/SSplitter.h"
#include "Runtime/Slate/Public/Widgets/Layout/SScrollBox.h"
#include "Runtime/SlateCore/Public/Widgets/Images/SImage.h"

#include "Editor/EditorStyle/Public/EditorStyle.h"
#include "Editor/ContentBrowser/Public/ContentBrowserModule.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum class ESFTM_Modifier : uint8 {
	Normal,
	Shift,
	Ctrl,
	Alt
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// FTM Function List Widget:

class SFTM_MainWidget : public SCompoundWidget {
private:
	TWeakObjectPtr<UObject>Source;
	TWeakObjectPtr<UObject>Target;
	TArray<TWeakObjectPtr<UObject>>TargetBatch;
	//
	TSharedPtr<SScrollBox>FTM_SOURCE_LIST;
	TSharedPtr<SScrollBox>FTM_TARGET_LIST;
	//
	TSharedPtr<SButton>FTM_Button_PICK_SOURCE;
	TSharedPtr<SButton>FTM_Button_PICK_TARGET;
	TSharedPtr<SButton>FTM_Button_SWAP_PICKS;
	TSharedPtr<SButton>FTM_Button_PICK_ITEM;
	TSharedPtr<SButton>FTM_Button_CLEAR_ALL;
	TSharedPtr<SButton>FTM_Button_APPLY;
	//
	TArray<TSharedPtr<SFTM_ListButton>>FTM_SOURCE_ITEMS;
	TArray<TSharedPtr<SFTM_ListButton>>FTM_TARGET_ITEMS;
	//
	FString FTM_SOURCE_Search;
	FString FTM_TARGET_Search;
public:
	SFTM_MainWidget();
	virtual ~SFTM_MainWidget() override;
	//
	SLATE_BEGIN_ARGS(SFTM_MainWidget){}
	SLATE_END_ARGS()
	//
	//
	void RebuildSourceListView();
	void RebuildTargetListView();
	void RefreshSourceListView();
	void RefreshTargetListView();
	//
	bool BrowserSelectedSource() const;
	bool BrowserSelectedTarget() const;
	bool HasSourceOrTargetPick() const;
	bool HasSourceAndTarget() const;
	bool HasSourceOrTarget() const;
	bool HasSourcePick() const;
	bool HasTargetPick() const;
	bool HasTransfers() const;
	bool HasSource() const;
	bool HasTarget() const;
	//
	FText GetSourceName() const;
	FText GetTargetName() const;
	int32 FindFirstTransfer() const;
	int32 FindLastPickedSource() const;
	int32 FindLastPickedTarget() const;
	int32 FindFirstPickedSource() const;
	int32 FindFirstPickedTarget() const;
	TSharedPtr<SFTM_ListButton>FindSourceWidget(const FName &Name);
	TSharedPtr<SFTM_ListButton>FindTargetWidget(const FName &Name);
	TSharedPtr<SFTM_ListButton>FindTargetClashWidget(const FName &Name);
	//
	void TransferPickedSourceToTarget(TSharedRef<SFTM_ListButton>Widget);
	void TransferPickedTargetToSource(TSharedRef<SFTM_ListButton>Widget);
	void TransferAllPickedSourcesToTarget();
	void TransferAllPickedTargetsToSource();
	//
	void OnSourceScrolled(float Offset);
	void OnTargetScrolled(float Offset);
	void OnSourceSearchChanged(const FText &Filter);
	void OnTargetSearchChanged(const FText &Filter);
	//
	FReply OnClickedSwapSelection();
	FReply OnClickedSelectSource();
	FReply OnClickedSelectTarget();
	FReply OnClickedPickSelected();
	FReply OnClickedClearAll();
	FReply OnClickedApply();
	//
	FReply OnClickedSourceListItem(const FName Item);
	FReply OnClickedTargetListItem(const FName Item);
	//
	//
	void Construct(const FArguments &InArgs);
	virtual bool IsInteractable() const override;
	virtual bool SupportsKeyboardFocus() const override;
	virtual FReply OnKeyUp(const FGeometry &MyGeometry, const FKeyEvent &InKeyEvent) override;
	virtual FReply OnKeyDown(const FGeometry &MyGeometry, const FKeyEvent &InKeyEvent) override;
public:
	static ESFTM_Modifier Modifier;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////