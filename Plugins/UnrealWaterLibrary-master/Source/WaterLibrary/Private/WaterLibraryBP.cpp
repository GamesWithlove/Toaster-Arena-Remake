// Copyright Epic Games, Inc. All Rights Reserved.

#include "..\Public\WaterLibraryBP.h"
#include "WaterLibrary.h"
#include "WaterBodyActor.h"
#include "WaterWaves.h"
#include "GerstnerWaterWaves.h"
#include "Kismet/GameplayStatics.h"

UWaterLibraryBP::UWaterLibraryBP(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UWaterWaves* UWaterLibraryBP::LoadWaterWaveAssetFile (const FString& WaveAssetFolder,  const FString& WaveAssetName)
{
	const FString FullPath = WaveAssetFolder + "/" + WaveAssetName;; 
	UWaterWavesAsset* WaterWavesRef = LoadObject<UWaterWavesAsset>(nullptr, const_cast<TCHAR*>(*FullPath));
	return WaterWavesRef->GetWaterWaves();
}

void UWaterLibraryBP::RecalcWaveData(UObject* WorldContextObject, UGerstnerWaterWaves* GerstnerWaterWaves)
{
	GerstnerWaterWaves->RecomputeWaves(true);
}

void UWaterLibraryBP::ChangeWaterWaveAsset(UObject* WorldContextObject, TSubclassOf < AActor > ActorClass, const FString& WaveAssetFolder, const FString& WaveAssetName)

{

		const FString Fullpath = WaveAssetFolder + "/" + WaveAssetName; 
		UWaterWavesAsset* WaterWavesRef = LoadObject<UWaterWavesAsset>(nullptr, const_cast<TCHAR*>(*Fullpath)); 

		//UWaterWavesAsset * WaterWavesRef = LoadObject<UWaterWavesAsset>(nullptr, TEXT("/Water/Waves/Dan_GerstnerWaves_Lake.Dan_GerstnerWaves_Lake")); 

		AActor* FoundActor = UGameplayStatics::GetActorOfClass(WorldContextObject, ActorClass); 

		AWaterBody* WB = Cast<AWaterBody>(FoundActor); 

		WB-> SetWaterWaves(WaterWavesRef->GetWaterWaves()); 

}
