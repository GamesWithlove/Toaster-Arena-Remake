// Copyright 2020-Present Oyintare Ebelo. All Rights Reserved.   


#include "ReplayPlayerController.h"

AReplayPlayerController::AReplayPlayerController()
{
	bShouldPerformFullTickWhenPaused = true;
	SetTickableWhenPaused(true);
}
