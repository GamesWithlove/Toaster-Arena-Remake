// Copyright 2024 Ziya Bahceci. All Rights Reserved.

#include "VaRestSettings.h"

UVaRestSettings::UVaRestSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bExtendedLog = false;
	bUseChunkedParser = false;
}
