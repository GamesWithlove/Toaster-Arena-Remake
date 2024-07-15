/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2018 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////

#include "IPTMTool.h"
#include "LevelEditor.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FPTMTool::StartupModule() {
	FPTM_Style::Initialize();
	FPTM_Command::Register();
	//
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(PTMTool_TAB,FOnSpawnTab::CreateRaw(this,&FPTMTool::OnSpawnPTMToolTab))
		.SetDisplayName(LOCTEXT("PTMTool_TAB_Title","Property Transfer"))
	.SetMenuType(ETabSpawnerMenuType::Hidden);
	//
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(FTMTool_TAB,FOnSpawnTab::CreateRaw(this,&FPTMTool::OnSpawnFTMToolTab))
		.SetDisplayName(LOCTEXT("FTMTool_TAB_Title","Function Transfer"))
	.SetMenuType(ETabSpawnerMenuType::Hidden);
	//
	Commands = MakeShareable(new FUICommandList);
	Commands->MapAction(FPTM_Command::Get().SpawnPTMToolWindow,FExecuteAction::CreateRaw(this,&FPTMTool::OnToolbarButtonClicked),FCanExecuteAction());
	//
	//
	FLevelEditorModule &LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	{
		PTM_Extender = MakeShareable(new FExtender());
		PTM_Extender->AddMenuExtension("LevelEditor",EExtensionHook::After,TSharedPtr<FUICommandList>(),FMenuExtensionDelegate::CreateStatic(&FPTMTool::PTM_ExtendMenu));
		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(PTM_Extender);
		//
		FTM_Extender = MakeShareable(new FExtender());
		FTM_Extender->AddMenuExtension("LevelEditor",EExtensionHook::After,TSharedPtr<FUICommandList>(),FMenuExtensionDelegate::CreateStatic(&FPTMTool::FTM_ExtendMenu));
		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(FTM_Extender);
		//
		TSharedPtr<FExtender>ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings",EExtensionHook::After,Commands,FToolBarExtensionDelegate::CreateRaw(this,&FPTMTool::AddToolBarButton));
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
}

void FPTMTool::ShutdownModule() {
	FPTM_Command::Unregister();
	FPTM_Style::Shutdown();
	//
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(FTMTool_TAB);
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(PTMTool_TAB);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TSharedRef<SDockTab>FPTMTool::OnSpawnPTMToolTab(const FSpawnTabArgs &SpawnTabArgs) {
	TSharedRef<SDockTab>TAB = SNew(SDockTab).TabRole(ETabRole::PanelTab);
	//
	TAB->SetTabIcon(FPTM_Style::Get()->GetBrush(TEXT("PTMTool_Window.Tab")));
	TAB->SetContent(SNew(SPTM_MainWidget));
	//
	return TAB;
}

TSharedRef<SDockTab>FPTMTool::OnSpawnFTMToolTab(const FSpawnTabArgs &SpawnTabArgs) {
	TSharedRef<SDockTab>TAB = SNew(SDockTab).TabRole(ETabRole::PanelTab);
	//
	TAB->SetTabIcon(FPTM_Style::Get()->GetBrush(TEXT("PTMTool_Window.Tab")));
	TAB->SetContent(SNew(SFTM_MainWidget));
	//
	return TAB;
}

void FPTMTool::OnToolbarButtonClicked() {
	FPTMTool::PTM_InvokeTab();
	FPTMTool::FTM_InvokeTab();
}

void FPTMTool::PTM_InvokeTab() {
	TSharedPtr<SDockTab>PTAB = FGlobalTabmanager::Get()->TryInvokeTab(PTMTool_TAB);
}

void FPTMTool::FTM_InvokeTab() {
	TSharedPtr<SDockTab>FTAB = FGlobalTabmanager::Get()->TryInvokeTab(FTMTool_TAB);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FPTM_Command::RegisterCommands() {
	UI_COMMAND(SpawnPTMToolWindow,"Transfer Tool","Blueprint Transfer Manager",EUserInterfaceActionType::Button,FInputGesture());
}

void FPTMTool::AddToolBarButton(FToolBarBuilder &Builder) {
	Builder.AddToolBarButton(FPTM_Command::Get().SpawnPTMToolWindow);
}

void FPTMTool::PTM_ExtendMenu(FMenuBuilder &MenuBuilder) {
	MenuBuilder.AddMenuEntry (
		LOCTEXT("PTM_InvokeTab","Property Transfer" ),
		LOCTEXT("PTM_InvokeTab_Tooltip", "Property Transfer tool"),
		FSlateIcon(FPTM_Style::Get().Get()->GetStyleSetName(),"PTMTool_Window.Tab"),
		FUIAction(FExecuteAction::CreateStatic(&FPTMTool::PTM_InvokeTab))
	);
}

void FPTMTool::FTM_ExtendMenu(FMenuBuilder &MenuBuilder) {
	MenuBuilder.AddMenuEntry (
		LOCTEXT("FTM_InvokeTab","Function Transfer" ),
		LOCTEXT("FTM_InvokeTab_Tooltip", "Function Transfer tool"),
		FSlateIcon(FPTM_Style::Get().Get()->GetStyleSetName(),"PTMTool_Window.Tab"),
		FUIAction(FExecuteAction::CreateStatic(&FPTMTool::FTM_InvokeTab))
	);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

IMPLEMENT_MODULE(FPTMTool,PTMTool);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////