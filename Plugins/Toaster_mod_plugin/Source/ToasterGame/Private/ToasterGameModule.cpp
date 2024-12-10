#include "ToasterGameModule.h"
#include "PakFileManager.h"

#define LOCTEXT_NAMESPACE "FToasterGameModule"

void FToasterGameModule::StartupModule()
{
    UPakFileManager::Init();
}

void FToasterGameModule::ShutdownModule()
{
    UPakFileManager::Shutdown();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FToasterGameModule, ToasterGame)