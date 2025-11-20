// Copyright 2018 David Romanski(Socke). All Rights Reserved.
#pragma once

#include "RealTimeImport.h"


class REALTIMEIMPORT_API FRealTimeImportThread : public FRunnable {
public:
	FRealTimeImportThread() {
		FString threadName = "FRealTimeImportThread" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override;

	void addJob(FSRealtimeImportThreadJobData* jobData);
	void cancelAllJobs();

private:
	FRunnableThread* thread = nullptr;
	TQueue<FSRealtimeImportThreadJobData*> jobQueue;
};