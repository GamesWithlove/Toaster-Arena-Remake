// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SmoothSync.h"

class SMOOTHSYNCPLUGIN_API SmoothState
{
public:
	/// <summary>
	/// The network timestamp of the owner when the state was sent.
	/// </summary>
	float ownerTimestamp = 0;
	/// <summary>
	/// The position of the owned object when the state was sent.
	/// </summary>
	FVector3f position = FVector3f::ZeroVector;
	/// <summary>
	/// The rotation of the owned object when the state was sent.
	/// </summary>
	FQuat4f rotation = FQuat4f::Identity;
	/// <summary>
	/// The scale of the owned object when the state was sent.
	/// </summary>
	FVector3f scale = FVector3f::OneVector;
	/// <summary>
	/// The velocity of the owned object when the state was sent.
	/// </summary>
	FVector3f velocity = FVector3f::ZeroVector;
	/// <summary>
	/// The angularVelocity of the owned object when the state was sent.
	/// </summary>
	FVector3f angularVelocity = FVector3f::ZeroVector;
	/// <summary>
	/// The origin that position is relative to.
	/// </summary>
	FIntVector origin = FIntVector::ZeroValue;

	uint8 movementMode = 0;

	bool teleport = false;
	bool atPositionalRest = false;
	bool atRotationalRest = false;
	bool wasMovementModeReceived = false;

	SmoothState();
	~SmoothState();
	SmoothState(SmoothState &state);
	SmoothState(SmoothState *state);
	SmoothState(USmoothSync &smoothSyncScript);
	SmoothState(USmoothSync *smoothSyncScript);
	void Lerp(SmoothState *targetState, SmoothState *start, SmoothState *end, float t);

	void defaultTheVariables();
	void copyFromSmoothSync(USmoothSync *smoothSyncScript);
	void copyFromState(SmoothState *state);

	FVector3f rebasedPosition(FIntVector localWorldOrigin);
};