#include "PakFileManager.h"
#include "IPlatformFilePak.h"
#include "HAL/PlatformFileManager.h"

UPakFileManager* UPakFileManager::Instance = nullptr;

UPakFileManager::UPakFileManager(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    if (HasAnyFlags(RF_ClassDefaultObject)) return;

    PakPlatform = MakeShared<FPakPlatformFile>();
    PakPlatform->Initialize(&FPlatformFileManager::Get().GetPlatformFile(), TEXT(""));

    ModDirectory = FPaths::ProjectDir() + TEXT("ModContent/");

    //FPackageName::RegisterMountPoint(TEXT("/Mods/"), FPaths::ProjectContentDir());
}

UPakFileManager::~UPakFileManager()
{
    PakPlatform.Reset();

    //FPackageName::UnRegisterMountPoint(TEXT("/Mods/"), FPaths::ProjectContentDir());
}

UPakFileManager* UPakFileManager::Get()
{
    return UPakFileManager::Instance;
}

bool UPakFileManager::Mount(const FString& Path)
{
    FPakPlatformFile* PakFileMgr = (FPakPlatformFile*)(FPlatformFileManager::Get().FindPlatformFile(TEXT("PakFile")));

    FPakPlatformFile* Target = PakPlatform.Get();
    if (PakFileMgr != nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("Mount Pak : Using global platformpak"));
        Target = PakFileMgr;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Mount Pak : Using custom platformpak"));
    }

    FString MountPoint = FPaths::ProjectContentDir(); //TEXT("/Game/");
    UE_LOG(LogTemp, Warning, TEXT("Mounting in content directory: %s"), *MountPoint);

    bool bOk = Target->Mount(*Path, 0, *MountPoint); //MountPoint
    if (bOk)
    {
        TArray<FString> Mounted;
        Target->GetMountedPakFilenames(Mounted);

        for (FString& Entry : Mounted)
        {
            UE_LOG(LogTemp, Warning, TEXT("Mount Pak : %s"), *Entry);
        }

        TSet<FString> PakContent;

        TArray<FString> Files;
        Target->FindFilesRecursively(Files, *MountPoint, nullptr);
        for (FString& File : Files)
        {
            UE_LOG(LogTemp, Warning, TEXT("File : %s"), *File);
        }
        /*PakFile->FindFilesAtPath(PakContent, *PakFile->GetMountPoint(), true, false, true);

        for (TSet<FString>::TConstIterator It(PakContent); It; ++It)
        {
            FString AssetName = *It;
            if (AssetName.EndsWith(FPackageName::GetAssetPackageExtension()))
            {
                FString AssetShortName = FPackageName::GetShortName(AssetName);
                UE_LOG(LogTemp, Warning, TEXT("Mount Pak Asset : %s"), *AssetShortName);
            }
        }*/
    }
    return bOk;
}

bool UPakFileManager::Unmount(const FString& Path)
{
    return PakPlatform->Unmount(*Path);
}

void UPakFileManager::Init()
{
    Instance = NewObject<UPakFileManager>();
    Instance->AddToRoot();
}

void UPakFileManager::Shutdown()
{
    Instance->RemoveFromRoot();
    Instance->MarkAsGarbage();
}
