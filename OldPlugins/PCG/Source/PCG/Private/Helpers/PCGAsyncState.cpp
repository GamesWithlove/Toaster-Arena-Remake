// Copyright Epic Games, Inc. All Rights Reserved.

#include "Helpers/PCGAsyncState.h"

#include "HAL/PlatformTime.h"

bool FPCGAsyncState::ShouldStop() const
{
	return FPlatformTime::Seconds() > EndTime;
}

void FPCGAsyncState::Reset()
{
	AsyncCurrentWriteIndex = 0;
	TasksChunksStartEnd.Reset();
	CurrentChunkToCollapse = 0;
	ChunkToNumElementsWrittenMap.Reset();

	bStarted = false;
}
