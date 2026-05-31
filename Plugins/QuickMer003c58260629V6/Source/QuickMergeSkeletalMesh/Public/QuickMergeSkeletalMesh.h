// Copyright 2023, EastFoxStudio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FQuickMergeSkeletalMeshModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


private:

	static USkeletalMesh* MergeSkeletalMesh(TArray<USkeletalMesh*> MeshList);
	static void RegenerateImportedModel(USkeletalMesh* SkeletalMesh);
	TSharedRef<FExtender> OnExtendContentBrowserAssetSelectionMenu(const TArray<FAssetData>& Assets);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
