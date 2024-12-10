/**
* Copyright (C) 2017-2022 eelDev AB
*/

#include "Slate/SteamCoreEditorStyle.h"
#include "SteamCoreEditorTypes.h"
#include "EditorStyleSet.h"
#include "SteamCoreEditorModule.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/CoreStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Styling/SlateTypes.h"
#include "Interfaces/IPluginManager.h"

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

TSharedPtr<FSlateStyleSet> FSteamCoreEditorStyle::StyleInstance = nullptr;

void FSteamCoreEditorStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FSteamCoreEditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FSteamCoreEditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("SteamCoreEditor"));
	return StyleSetName;
}

TSharedRef<FSlateStyleSet> FSteamCoreEditorStyle::Create()
{
	TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet("SteamCoreEditor"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin(FSteamCoreEditorModule::s_PluginName)->GetBaseDir() / TEXT("Resources"));

	FScrollBarStyle ScrollbarStyle = FEditorStyle::Get().GetWidgetStyle<FScrollBarStyle>("Scrollbar");
	FButtonStyle UpdaterCoreButton = FEditorStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton.Success");
	FButtonStyle UpdaterCoreButtonRed = FEditorStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton.Success");
	FButtonStyle UpdaterCoreButtonGreen = FEditorStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton.Success");

	ScrollbarStyle.NormalThumbImage = *Style->GetBrush("SteamCoreEditor.ButtonCategoryBackground");
	ScrollbarStyle.HoveredThumbImage = *Style->GetBrush("SteamCoreEditor.ButtonCategoryBackgroundHovered");

	FWindowStyle WindowStyle = const_cast<FWindowStyle&>(FCoreStyle::Get().GetWidgetStyle<FWindowStyle>("Window"));
	FSlateColor WindowBackgroundColor(FLinearColor::White);
	FSlateBrush WindowBackgroundMain(IMAGE_BRUSH("Common/NoiseBackground", FVector2D(74, 74), FLinearColor::White, ESlateBrushTileType::Both));
	FSlateBrush WindowBackgroundChild(IMAGE_BRUSH("Common/NoiseBackground", FVector2D(64, 64), FLinearColor::White, ESlateBrushTileType::Both));
	WindowStyle.SetBackgroundColor(WindowBackgroundColor).SetBackgroundBrush(*FEditorStyle::GetBrush("Menu.Background")).SetChildBackgroundBrush(*FEditorStyle::GetBrush("Menu.Background"));

	UpdaterCoreButton.Normal.TintColor = FLinearColor(.7, .7, .7);
	UpdaterCoreButton.Hovered.TintColor = FLinearColor(1, 1, 1);
	UpdaterCoreButton.Pressed.TintColor = UpdaterCoreButton.Normal.TintColor;

	UpdaterCoreButtonRed.Normal.TintColor = FLinearColor(.5, .1, .1);
	UpdaterCoreButtonRed.Hovered.TintColor = FLinearColor(.8, 0, 0);
	UpdaterCoreButtonRed.Pressed.TintColor = UpdaterCoreButtonRed.Normal.TintColor;

	UpdaterCoreButtonGreen.Normal.TintColor = FLinearColor(.1, .5, .1);
	UpdaterCoreButtonGreen.Hovered.TintColor = FLinearColor(0, .7, 0);
	UpdaterCoreButtonGreen.Pressed.TintColor = UpdaterCoreButtonGreen.Normal.TintColor;

	Style->Set("SteamCoreEditor.UpdaterCoreButton", UpdaterCoreButton);
	Style->Set("SteamCoreEditor.UpdaterCoreButtonRed", UpdaterCoreButtonRed);
	Style->Set("SteamCoreEditor.UpdaterCoreButtonGreen", UpdaterCoreButtonGreen);
	Style->Set("SteamCoreEditor.TitleBackground", new IMAGE_BRUSH(TEXT("TitleBackground"), FVector2D(200.f, 80.f)));
	Style->Set("SteamCoreEditor.ContentBackground", new FSlateBrush(*FStyleDefaults::GetNoBrush()));
	Style->Set("SteamCoreEditor.MainMenuBackground", new IMAGE_BRUSH(TEXT("MainMenuBackground"), FVector2D(500.f, 80.f)));
	Style->Set("SteamCoreEditor.ScrollbarStyle", ScrollbarStyle);
	Style->Set("SteamCoreEditor.Window", WindowStyle);

	auto ContentBackground = Style->GetBrush("SteamCoreEditor.ContentBackground");
	const_cast<FSlateBrush*>(ContentBackground)->TintColor = FSlateColor(FLinearColor(0.038204, 0.038204, 0.038204, 1));

	return Style;
}

#undef IMAGE_BRUSH

void FSteamCoreEditorStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FSteamCoreEditorStyle::Get()
{
	return *StyleInstance;
}
