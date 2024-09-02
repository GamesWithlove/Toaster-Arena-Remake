// Fill out your copyright notice in the Description page of Project Settings.


#include "Expandedpc.h"


void AExpandedpc::PawnLeavingGame_Implementation()
{
	if (GetPawn()!= NULL && DestroyActorThenUnpossess)
	{
		GetPawn()->Destroy();
		SetPawn(NULL);
	}
}

\
//Code for time sync
float AExpandedpc::GetServerWorldTimeDelta() const
{
	return ServerWorldTimeDelta;
}

float AExpandedpc::GetServerWorldTime() const
{
	return GetWorld()->GetTimeSeconds() + ServerWorldTimeDelta;
}

void AExpandedpc::PostNetInit()
{
	Super::PostNetInit();
	if (GetLocalRole() != ROLE_Authority)
	{
		RequestWorldTime_Internal();
		if (NetworkClockUpdateFrequency > 0.f)
		{
			FTimerHandle TimerHandle;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ThisClass::RequestWorldTime_Internal, NetworkClockUpdateFrequency, true);
		}
	}
}

void AExpandedpc::RequestWorldTime_Internal()
{
	ServerRequestWorldTime(GetWorld()->GetTimeSeconds());
}

void AExpandedpc::ClientUpdateWorldTime_Implementation(float ClientTimestamp, float ServerTimestamp)
{
	const float RoundTripTime = GetWorld()->GetTimeSeconds() - ClientTimestamp;
	if (RoundTripTime < ShortestRoundTripTime)
	{
		ShortestRoundTripTime = RoundTripTime;
		ServerWorldTimeDelta = ServerTimestamp - ClientTimestamp - ShortestRoundTripTime / 2.f;
	}
}

void AExpandedpc::ServerRequestWorldTime_Implementation(float ClientTimestamp)
{
	const float Timestamp = GetWorld()->GetTimeSeconds();
	ClientUpdateWorldTime(ClientTimestamp, Timestamp);
}