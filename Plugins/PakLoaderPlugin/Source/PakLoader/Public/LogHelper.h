// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

enum ELogHelperLogLevel
{
	LL_VERBOSE,
	LL_LOG,
	LL_WARNING,
	LL_ERROR
};

class FLogHelper
{
public:
	static void Log(ELogHelperLogLevel Level, const TCHAR *LogText);
	static void Log(ELogHelperLogLevel Level, const FString &LogText);

	static void Flush();

	static void EnableLogging(bool bEnable);
	static void SetLogPath(const FString &InLogPath);

	static FString LogPath;
	static bool bEnableLogging;
};
