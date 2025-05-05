#include "ToasterGameEditorModule.h"
#include "HitscanAssetTypeActions.h"
#include "AssetRegistryModule.h"
#include "IAssetTypeActions.h"
#include "IAssetTools.h"

#define LOCTEXT_NAMESPACE "FToasterGameEditorModule"

class FToasterGameEditorModule : public IToasterGameEditorModule
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    template<typename T> void RegisterTypeActions(IAssetTools& AssetTools, EAssetTypeCategories::Type Category)
    {
        TSharedPtr<IAssetTypeActions> Actions = MakeShared<T>(Category);
        AssetTools.RegisterAssetTypeActions(Actions.ToSharedRef());
        RegisteredTypeActions.Add(Actions);
    }

private:
    TArray<TSharedPtr<IAssetTypeActions>> RegisteredTypeActions;
    EAssetTypeCategories::Type ToasterAssetCategory;
};

void FToasterGameEditorModule::StartupModule()
{
    IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools")).Get();
    ToasterAssetCategory = AssetTools.RegisterAdvancedAssetCategory(TEXT("ToasterAssets"), NSLOCTEXT("ToasterEditor", "AssetCategory", "Toaster Game"));

    RegisterTypeActions<FHitscanTracerDefinitionTypeActions>(AssetTools, ToasterAssetCategory);
    RegisterTypeActions<FHitscanImpactDefinitionTypeActions>(AssetTools, ToasterAssetCategory);
}

void FToasterGameEditorModule::ShutdownModule()
{
    const FModuleManager& ModuleManger = FModuleManager::Get();

    if (ModuleManger.IsModuleLoaded(TEXT("AssetTools")))
    {
        IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools")).Get();

        for (TSharedPtr<IAssetTypeActions> TypeActions : RegisteredTypeActions)
        {
            AssetTools.UnregisterAssetTypeActions(TypeActions.ToSharedRef());
        }
    }

    RegisteredTypeActions.Empty();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FToasterGameEditorModule, ToasterGameEditor)