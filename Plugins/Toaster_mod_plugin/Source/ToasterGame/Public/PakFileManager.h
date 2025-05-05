#pragma once

#include "CoreMinimal.h"
#include "PakFileManager.generated.h"

class FPakPlatformFile;

UCLASS()
class UPakFileManager : public UObject
{
    GENERATED_BODY()

public:

    UPakFileManager(const FObjectInitializer& ObjectInitializer);
    ~UPakFileManager();

    UFUNCTION(BlueprintCallable, Category = "Pak")
    static UPakFileManager* Get();

    UFUNCTION(BlueprintCallable, Category = "Pak")
    bool Mount(const FString& Path);

    UFUNCTION(BlueprintCallable, Category = "Pak")
    bool Unmount(const FString& Path);

private:

    static void Init();
    static void Shutdown();
    
    static UPakFileManager* Instance;

    friend class FToasterGameModule;

    TSharedPtr<FPakPlatformFile> PakPlatform;
    FString ModDirectory;
};