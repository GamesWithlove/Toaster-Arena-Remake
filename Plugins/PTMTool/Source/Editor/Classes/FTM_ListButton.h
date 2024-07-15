/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "PTMTool.h"

#include "Runtime/Slate/Public/Widgets/Layout/SBox.h"
#include "Runtime/Slate/Public/Widgets/Layout/SBorder.h"
#include "Runtime/Slate/Public/Framework/SlateDelegates.h"
#include "Runtime/SlateCore/Public/Widgets/Images/SImage.h"

#include "Editor/EditorStyle/Public/EditorStyle.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum class ESFTM_State : uint8 {
	Normal,
	Picked,
	Transfer,
	NormalClash,
	PickedClash,
	TransferClash,
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// FTM List Item Widget:

class SFTM_ListButton : public SCompoundWidget {
private:
	FName Name;
	EPTM_Owner Owner;
	ESFTM_State PPState;
	FFTM_FunctionInfo FInfo;
	//
	TSharedPtr<SBorder>FTM_Button;
protected:
	const FButtonStyle* SafeStyle;
	const FButtonStyle* ErrorStyle;
	const FButtonStyle* ClashStyle;
	const FButtonStyle* PickedStyle;
	const FButtonStyle* TransferStyle;
	//
	FOnClicked OnClicked;
public:
	SFTM_ListButton();
	virtual ~SFTM_ListButton() override;
	//
	SLATE_BEGIN_ARGS(SFTM_ListButton)
		: _Name(NAME_None)
		, _Owner(EPTM_Owner::Source)
		, _PPState(ESFTM_State::Normal)
		, _FInfo(FFTM_FunctionInfo())
	{}//
		SLATE_ATTRIBUTE(FName,Name)
		SLATE_ATTRIBUTE(EPTM_Owner,Owner)
		SLATE_ATTRIBUTE(ESFTM_State,PPState)
		SLATE_ATTRIBUTE(FFTM_FunctionInfo,FInfo)
		//
		SLATE_EVENT(FOnClicked,OnClicked)
	SLATE_END_ARGS()
	//
	//
	void SetFunctionInfo(const FFTM_FunctionInfo InInfo);
	void SetState(const ESFTM_State InState);
	void SetOwner(const EPTM_Owner InOwner);
	void SetButtonStyle();
	//
	FFTM_FunctionInfo GetFunctionInfo() const;
	EGraphType GetFunctionType() const;
	ESFTM_State GetState() const;
	EPTM_Owner GetOwner() const;
	FName GetName() const;
	//
	//
	FText GetButtonCaption() const;
	FText GetButtonTooltip() const;
	//
	const FSlateBrush* GetTypeBrush() const;
	FSlateColor GetTypeColor() const;
	//
	//
	void Construct(const FArguments &InArgs);
	virtual bool IsInteractable() const override;
	virtual bool SupportsKeyboardFocus() const override;
	//
	virtual void OnMouseLeave(const FPointerEvent &MouseEvent) override;
	virtual void OnMouseCaptureLost(const FCaptureLostEvent &CaptureLostEvent) override;
	virtual void OnMouseEnter(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent) override;
	virtual FReply OnMouseButtonUp(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent) override;
	virtual FReply OnMouseButtonDown(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent) override;
	//
	virtual void Tick(const FGeometry &AllottedGeometry, const double CurrentTime, const float DeltaTime) override;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////