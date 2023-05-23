// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

#include "LogHelper.h"
#include "PakLoaderModule.h"
#include "Misc/FileHelper.h"

bool FLogHelper::bEnableLogging = false;
FString FLogHelper::LogPath = "";

void FLogHelper::Log(ELogHelperLogLevel Level, const TCHAR *LogText)
{
	FLogHelper::Log(Level, FString(LogText));
}

void FLogHelper::Log(ELogHelperLogLevel Level, const FString &LogText)
{
	if (!FLogHelper::bEnableLogging)
		return;

	FString LogLevelName = "";

	if (Level == ELogHelperLogLevel::LL_VERBOSE)
	{
		UE_LOG(LogPakLoader, Verbose, TEXT("%s"), *LogText);
		LogLevelName = "Verbose";
	}
	else if (Level == ELogHelperLogLevel::LL_LOG)
	{
		UE_LOG(LogPakLoader, Log, TEXT("%s"), *LogText);
		LogLevelName = "Log";
	}
	else if (Level == ELogHelperLogLevel::LL_WARNING)
	{
		UE_LOG(LogPakLoader, Warning, TEXT("%s"), *LogText);
		LogLevelName = "Warning";
	}
	else if (Level == ELogHelperLogLevel::LL_ERROR)
	{
		UE_LOG(LogPakLoader, Error, TEXT("%s"), *LogText);
		LogLevelName = "Error";
	}

	FString MessageLog = FString::Printf(TEXT("[%s] %s: %s\n"), *FDateTime::Now().ToString(), *LogLevelName, *LogText);

	FFileHelper::SaveStringToFile(MessageLog, *LogPath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
}

void FLogHelper::Flush()
{
	// Flush log file
	FFileHelper::SaveStringToFile(TEXT("\n"), *LogPath);
}

void FLogHelper::EnableLogging(bool bEnable)
{
	bEnableLogging = bEnable;
}

void FLogHelper::SetLogPath(const FString &InLogPath)
{
	LogPath = InLogPath;
}
