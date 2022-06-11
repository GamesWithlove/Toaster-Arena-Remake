// Fill out your copyright notice in the Description page of Project Settings.

#include "State.h"
#include "SmoothSync.h"
#include "Engine/World.h"
#ifdef TimeSync
#include "GameFramework/GameStateBase.h"
#include "TimeSyncGameStateComponentBase.h"
#endif

/// Deconstructor
SmoothState::~SmoothState()
{

}

/// <summary>
/// Default constructor. Does nothing.
/// </summary>
SmoothState::SmoothState()
{

}

/// <summary>
/// Returns a Lerped state that is between two States in time.
/// </summary>
void SmoothState::Lerp(SmoothState *targetState, SmoothState *start, SmoothState *end, float t)
{
	targetState->position = FMath::Lerp(start->position, end->position, t);
	targetState->rotation = FMath::Lerp(start->rotation, end->rotation, t);
	targetState->scale = FMath::Lerp(start->scale, end->scale, t);
	targetState->velocity = FMath::Lerp(start->velocity, end->velocity, t);
	targetState->angularVelocity = FMath::Lerp(start->angularVelocity, end->angularVelocity, t);

	targetState->ownerTimestamp = FMath::Lerp(start->ownerTimestamp, end->ownerTimestamp, t);
	targetState->movementMode = start->movementMode;
	targetState->origin = end->origin;
}

void SmoothState::defaultTheVariables()
{
	ownerTimestamp = 0;
	position = FVector3f::ZeroVector;
	rotation = FQuat4f::Identity;
	scale = FVector3f::ZeroVector;
	velocity = FVector3f::ZeroVector;
	angularVelocity = FVector3f::ZeroVector;
	atPositionalRest = false;
	atRotationalRest = false;
	teleport = false;
	movementMode = MOVE_None;
}

void SmoothState::copyFromSmoothSync(USmoothSync *smoothSyncScript)
{
#ifdef TimeSync
	if (smoothSyncScript->enableLagCompensation)
	{
		if (smoothSyncScript->GetOwner()->GetWorld()->IsServer())
		{
			ownerTimestamp = UGameplayStatics::GetRealTimeSeconds(smoothSyncScript->GetOwner()->GetWorld());
		}
		else
		{
			float timeOffset = 0;
			smoothSyncScript->timeSync->GetServerTimeOffset(timeOffset);

			ownerTimestamp = UGameplayStatics::GetRealTimeSeconds(smoothSyncScript->GetOwner()->GetWorld()) + timeOffset;
		}
	}
	else
	{
		ownerTimestamp = UGameplayStatics::GetRealTimeSeconds(smoothSyncScript->GetOwner()->GetWorld());
	}
#else
	ownerTimestamp = UGameplayStatics::GetRealTimeSeconds(smoothSyncScript->GetOwner()->GetWorld());
#endif

	position = smoothSyncScript->getPosition();
	rotation = smoothSyncScript->getRotation();
	scale = smoothSyncScript->getScale();

	if (smoothSyncScript->isSimulatingPhysics || 
		(smoothSyncScript->characterMovementComponent != nullptr) ||
		(smoothSyncScript->movementComponent != nullptr))
	{
		velocity = smoothSyncScript->getLinearVelocity();
		angularVelocity = smoothSyncScript->getAngularVelocity();
	}
	else
	{
		velocity = FVector3f::ZeroVector;
		angularVelocity = FVector3f::ZeroVector;
	}
	if (smoothSyncScript->characterMovementComponent != nullptr)
	{
		movementMode = smoothSyncScript->characterMovementComponent->MovementMode;
	}
	origin = smoothSyncScript->GetWorld()->OriginLocation;
}

void SmoothState::copyFromState(SmoothState *state)
{
	ownerTimestamp = state->ownerTimestamp;
	position = state->position;
	origin = state->origin;
	rotation = state->rotation;
	scale = state->scale;
	velocity = state->velocity;
	angularVelocity = state->angularVelocity;
	movementMode = state->movementMode;
	wasMovementModeReceived = state->wasMovementModeReceived;
	teleport = state->teleport;
	atPositionalRest = state->atPositionalRest;
	atRotationalRest = state->atRotationalRest;
}

FVector3f SmoothState::rebasedPosition(FIntVector localWorldOrigin)
{
	FIntVector relativeOrigin = origin - localWorldOrigin;
	return position + (FVector3f)relativeOrigin;
}