// Fill out your copyright notice in the Description page of Project Settings.


#include "VersionGrabber_TA.h"

FString UVersionGrabber_TA::GetProjectVersion() {
	FString GameVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		GameVersion,
		GGameIni);

	return GameVersion;

}
