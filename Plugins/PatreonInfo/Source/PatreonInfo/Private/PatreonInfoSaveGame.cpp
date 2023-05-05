// Copyright Green Forest Games. All Rights Reserved.

#include "PatreonInfoSaveGame.h"

UPatreonInfoSaveGame::UPatreonInfoSaveGame()
{
	Identifier = FGuid::NewGuid();
	ComputerName = FPlatformProcess::ComputerName();
}
