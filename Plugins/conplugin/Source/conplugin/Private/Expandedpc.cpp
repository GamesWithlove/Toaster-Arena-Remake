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