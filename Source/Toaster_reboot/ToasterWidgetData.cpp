// Fill out your copyright notice in the Description page of Project Settings.


#include "ToasterWidgetData.h"

FToasterWidgetData::FToasterWidgetData()
{
	FontSize = 18;
	UseTextGradient = true;

	ETextTransformPolicy::ToUpper;
	//EHorizontalAlignment::HAlign_Center;
}

FToasterWidgetData::~FToasterWidgetData()
{
}
