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

enum class ESPTM_State : uint8 {
	Normal,
	Picked,
	Transfer,
	NormalClash,
	PickedClash,
	TransferClash,
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PTM List Item Widget:

class SPTM_ListButton : public SCompoundWidget {
private:
	FName Name;
	EPTM_Owner Owner;
	ESPTM_State PPState;
	FPTM_PropertyInfo PPInfo;
	//
	TSharedPtr<SBorder>PTM_Button;
protected:
	const FButtonStyle* SafeStyle;
	const FButtonStyle* ErrorStyle;
	const FButtonStyle* ClashStyle;
	const FButtonStyle* PickedStyle;
	const FButtonStyle* TransferStyle;
	//
	FOnClicked OnClicked;
public:
	SPTM_ListButton();
	virtual ~SPTM_ListButton() override;
	//
	SLATE_BEGIN_ARGS(SPTM_ListButton)
		: _Name(NAME_None)
		, _Owner(EPTM_Owner::Source)
		, _PPState(ESPTM_State::Normal)
		, _PPInfo(FPTM_PropertyInfo())
	{}//
		SLATE_ATTRIBUTE(FName,Name)
		SLATE_ATTRIBUTE(EPTM_Owner,Owner)
		SLATE_ATTRIBUTE(ESPTM_State,PPState)
		SLATE_ATTRIBUTE(FPTM_PropertyInfo,PPInfo)
		//
		SLATE_EVENT(FOnClicked,OnClicked)
	SLATE_END_ARGS()
	//
	//
	void SetPropertyInfo(const FPTM_PropertyInfo InInfo);
	void SetState(const ESPTM_State InState);
	void SetOwner(const EPTM_Owner InOwner);
	void SetButtonStyle();
	//
	FPTM_PropertyInfo GetPropertyInfo() const;
	ESPTM_State GetState() const;
	EPTM_Owner GetOwner() const;
	FName GetName() const;
	//
	//
	FText GetButtonCaption() const;
	FText GetButtonTooltip() const;
	//
	EVisibility GetValueBrushVisibility() const;
	const FSlateBrush* GetValueBrush() const;
	const FSlateBrush* GetTypeBrush() const;
	FSlateColor GetValueColor() const;
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