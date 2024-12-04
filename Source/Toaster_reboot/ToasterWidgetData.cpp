// Fill out your copyright notice in the Description page of Project Settings.


#include "ToasterWidgetData.h"

FToasterWidgetData::FToasterWidgetData()
{
	ClickedSound(nullptr),
	
	Index(0),
	
	IsDisabled(false),
	IsBackButton(false),
	IsDropDown(false),
	CanLaunchURL(false),
	ScaleButtonOnHover(false),
	UseIcon(false),
	UseIconDivider(false),
	OverrideIconSize(false),
	UseButtonDividers(false),
	UseButtonBackground(false),
	UseButtonBorders(false),
	
	IconHeightOverride(0),
	IconWidthOverride(0),
	
	FontSize = 18;
	UseTextGradient = true;
	Typeface = EToasterFontTypes::FONT_01;
	TransformPolicy = ETextTransformPolicy::ToUpper;
}

FToasterWidgetData::~FToasterWidgetData()
{
}
