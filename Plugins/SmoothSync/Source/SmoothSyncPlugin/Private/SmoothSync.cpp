// Fill out your copyright notice in the Description page of Project Settings.

#include "SmoothSync.h"
#include "State.h"
#include "Engine/World.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Components/PrimitiveComponent.h"
#include "Runtime/Launch/Resources/Version.h"

// Sets default values for this component's properties
USmoothSync::USmoothSync()
{
	// So the component can tick every frame.
	PrimaryComponentTick.bCanEverTick = true;
}
// Called whenever this actor is being removed from a level
void USmoothSync::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// Only clean up if not in the middle of a tick
	// Otherwise set a flag so clean up will happen when TickComponent is done.
	if (!IsTicking)
	{
		CleanUp();
	}
	else
	{
		ShouldCleanUp = true;
	}
}

void USmoothSync::CleanUp()
{
	if (stateBuffer != nullptr)
	{
		for (int i = 0; i < FMath::Max(calculatedStateBufferSize, 30); i++)
		{
			delete(stateBuffer[i]);
			stateBuffer[i] = nullptr;
		}

		delete[] stateBuffer;
		stateBuffer = nullptr;
	}

	delete sendingTempState;
	sendingTempState = nullptr;
	delete targetTempState;
	targetTempState = nullptr;

	ShouldCleanUp = false;
}

// Native event for when play begins for this actor.
void USmoothSync::BeginPlay()
{
	Super::BeginPlay();

#ifdef TimeSync
	UE_LOG(LogTemp, Warning, TEXT("TimeSync support detected."));
	timeSync = GetWorld()->GetGameState()->FindComponentByClass<UTimeSyncGameStateComponentBase>();
	if (timeSync == nullptr && enableLagCompensation)
	{
		enableLagCompensation = false;
		UE_LOG(LogTemp,
			Error,
			TEXT(
				"Lag compensation is enabled but Time Sync is not properly configured so it won't work.\n"
				"Falling back to built in time syncing.\n"
				"Make sure your GameState has a TimeSyncGameStateComponent and that your are calling "
				"SpawnTimerForPlayer from the OnPostLogin event in your GameController."
			)
		);
	}
#endif

	realObjectToSync = GetOwner();
	movementComponent = (UMovementComponent*)realObjectToSync->FindComponentByClass(UMovementComponent::StaticClass());
	characterMovementComponent = (UCharacterMovementComponent*)realObjectToSync->FindComponentByClass(UCharacterMovementComponent::StaticClass());

	// If haven't chosen to sync a specific component, set it up to sync the root component.
	if (realComponentToSync == nullptr)
	{
		primitiveComponent = Cast<UPrimitiveComponent>(realObjectToSync->GetRootComponent());

		if (primitiveComponent && primitiveComponent->IsSimulatingPhysics())
		{
			isSimulatingPhysics = true;
		}
	}

	// Setup some variable states for use.
	sendingTempState = new SmoothState();
	targetTempState = new SmoothState();
	stateBuffer = new SmoothState * [FMath::Max(calculatedStateBufferSize, 30)];
	int stateBufferLength = FMath::Max(calculatedStateBufferSize, 30);
	for (int i = 0; i < stateBufferLength; i++)
	{
		stateBuffer[i] = nullptr;
	}

	// If we want to extrapolate forever, force variables accordingly. 
	if (extrapolationMode == ExtrapolationMode::UNLIMITED)
	{
		useExtrapolationDistanceLimit = false;
		useExtrapolationTimeLimit = false;
	}

	// We need to do this in order to send unreliable RPCs?
	SetIsReplicated(true);
}

/// <summary>
/// If you want to track a scene component, assign it, otherwise it will just sync the actor the SmoothSync is on.
/// Must have one SmoothSync for each Transform that you want to sync.
/// <summary>
void USmoothSync::setSceneComponentToSync(USceneComponent* componentToSync)
{
	realComponentToSync = componentToSync;
	primitiveComponent = Cast<UPrimitiveComponent>(realComponentToSync);
	if (primitiveComponent && primitiveComponent->IsSimulatingPhysics())
	{
		isSimulatingPhysics = true;
	}
	else
	{
		isSimulatingPhysics = false;
	}
}

template <class T>
void USmoothSync::copyToBuffer(T thing)
{
	uint8* thingAsChars = (uint8*)&thing;
	for (int i = 0; i < sizeof(T); i++)
	{
		sendingCharArray.Add(thingAsChars[i]);
	}

	sendingCharArraySize += sizeof(T);
}

template <class T>
void USmoothSync::readFromBuffer(T* thing)
{
	uint8* thingAsChars = (uint8*)thing;
	for (int i = 0; i < sizeof(T); i++)
	{
		thingAsChars[i] = readingCharArray[readingCharArraySize + i];
	}

	readingCharArraySize += sizeof(T);
}

/// <summary>
/// Encode sync info based on what we want to send.
/// </summary>
char USmoothSync::encodeSyncInformation(bool sendPositionFlag, bool sendRotationFlag, bool sendScaleFlag, bool sendVelocityFlag,
	bool sendAngularVelocityFlag, bool atPositionalRestFlag, bool atRotationalRestFlag, bool sendMovementModeFlag)
{
	char encoded = 0;

	if (sendPositionFlag)
	{
		encoded = (char)(encoded | positionMask);
	}
	if (sendRotationFlag)
	{
		encoded = (char)(encoded | rotationMask);
	}
	if (sendScaleFlag)
	{
		encoded = (char)(encoded | scaleMask);
	}
	if (sendVelocityFlag)
	{
		encoded = (char)(encoded | velocityMask);
	}
	if (sendAngularVelocityFlag)
	{
		encoded = (char)(encoded | angularVelocityMask);
	}
	if (atPositionalRestFlag)
	{
		encoded = (char)(encoded | atPositionalRestMask);
	}
	if (atRotationalRestFlag)
	{
		encoded = (char)(encoded | atRotationalRestMask);
	}
	if (sendMovementModeFlag)
	{
		encoded = (char)(encoded | movementModeMask);
	}
	return encoded;
}
/// <summary>
/// Decode sync info to see if we want to sync position.
/// </summary>
bool USmoothSync::shouldDeserializePosition(char syncInformation)
{
	if ((syncInformation & positionMask) == positionMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Decode sync info to see if we want to sync rotation.
/// </summary>
bool USmoothSync::shouldDeserializeRotation(char syncInformation)
{
	if ((syncInformation & rotationMask) == rotationMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Decode sync info to see if we want to sync scale.
/// </summary>
bool USmoothSync::shouldDeserializeScale(char syncInformation)
{
	if ((syncInformation & scaleMask) == scaleMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Decode sync info to see if we want to sync velocity.
/// </summary>
bool USmoothSync::shouldDeserializeVelocity(char syncInformation)
{
	if ((syncInformation & velocityMask) == velocityMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Decode sync info to see if we want to sync angular velocity.
/// </summary>
bool USmoothSync::shouldDeserializeAngularVelocity(char syncInformation)
{
	if ((syncInformation & angularVelocityMask) == angularVelocityMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Decode sync info to see if we want to sync angular velocity.
/// </summary>
bool USmoothSync::deserializePositionalRestFlag(char syncInformation)
{
	if ((syncInformation & atPositionalRestMask) == atPositionalRestMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Decode sync info to see if we want to sync angular velocity.
/// </summary>
bool USmoothSync::deserializeRotationalRestFlag(char syncInformation)
{
	if ((syncInformation & atRotationalRestMask) == atRotationalRestMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Decode sync info to see if we want to sync angular velocity.
/// </summary>
bool USmoothSync::shouldDeserializeMovementMode(char syncInformation)
{
	if ((syncInformation & movementModeMask) == movementModeMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool USmoothSync::SmoothSyncTeleportClientToServer_Validate(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime)
{
	return true;
}
void USmoothSync::SmoothSyncTeleportClientToServer_Implementation(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime)
{
	SmoothSyncTeleportServerToClients(position, rotation, scale, tempOwnerTime);
}
bool USmoothSync::SmoothSyncTeleportServerToClients_Validate(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime)
{
	return true;
}
void USmoothSync::SmoothSyncTeleportServerToClients_Implementation(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime)
{
	if (realObjectToSync == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("realObjectToSync is not setup on client yet. Cannot teleport."));
		return;
	}

	// Only set up new State if we aren't the system determining the Transform.
	if (!shouldSendTransform())
	{
		SmoothState* teleportState = new SmoothState();
		teleportState->copyFromSmoothSync(this);
		teleportState->position = position;
		teleportState->rotation = FQuat4f::MakeFromEuler(rotation);
		teleportState->ownerTimestamp = tempOwnerTime;
		teleportState->teleport = true;

		addTeleportState(teleportState);
	}
}


bool USmoothSync::SmoothSyncEnableClientToServer_Validate(bool enable)
{
	return true;
}
void USmoothSync::SmoothSyncEnableClientToServer_Implementation(bool enable)
{
	SmoothSyncEnableServerToClients(enable);
}
bool USmoothSync::SmoothSyncEnableServerToClients_Validate(bool enable)
{

	return true;
}
void USmoothSync::SmoothSyncEnableServerToClients_Implementation(bool enable)
{
	internalEnableSmoothSync(enable);
}


bool USmoothSync::ClientSendsTransformToServer_Validate(const TArray<uint8>& value)
{
	return true;
}
void USmoothSync::ClientSendsTransformToServer_Implementation(const TArray<uint8>& value)
{
	if (syncOwnershipChange)
	{
		// When handling ownership changes the server needs to add an extra byte to the outgoing state
		// so that clients can know when the owner changes
		TArray<uint8> ownerState = TArray<uint8>(value);
		ownerState.Add(ownerChangeIndicator);
		ServerSendsTransformToEveryone(ownerState);
	}
	else
	{
		ServerSendsTransformToEveryone(value);
	}
}

bool USmoothSync::ServerSendsTransformToEveryone_Validate(const TArray<uint8>& value)
{
	return true;
}

void USmoothSync::ServerSendsTransformToEveryone_Implementation(const TArray<uint8>& value)
{
	// If we should be sending the Transform, there's no reason to do anything with the received message.
	if (shouldSendTransform())
	{
		return;
	}
	// Reset array variables to default
	readingCharArraySize = 0;
	readingCharArray.Empty();
	// Assign the array
	readingCharArray = value;

	SmoothState* stateToAdd = new SmoothState();

	// The first received byte tells us what we need to be syncing.
	char syncInfoByte;
	readFromBuffer(&syncInfoByte);
	bool deserializePosition = shouldDeserializePosition(syncInfoByte);
	bool deserializeRotation = shouldDeserializeRotation(syncInfoByte);
	bool deserializeScale = shouldDeserializeScale(syncInfoByte);
	bool deserializeVelocity = shouldDeserializeVelocity(syncInfoByte);
	bool deserializeAngularVelocity = shouldDeserializeAngularVelocity(syncInfoByte);
	bool deserializeMovementMode = shouldDeserializeMovementMode(syncInfoByte);
	stateToAdd->atPositionalRest = deserializePositionalRestFlag(syncInfoByte);
	stateToAdd->atRotationalRest = deserializeRotationalRestFlag(syncInfoByte);

	bool syncNewOrigin = false;
	if (isUsingOriginRebasing)
	{
		char extraSyncInfoByte;
		// Read second encoded byte 
		readFromBuffer(&extraSyncInfoByte);
		syncNewOrigin = (extraSyncInfoByte & originRebaseMask) == originRebaseMask;
	}

	readFromBuffer(&(stateToAdd->ownerTimestamp));

	if (isUsingOriginRebasing)
	{
		if (syncNewOrigin)
		{
			readFromBuffer(&stateToAdd->origin);
			if (lastOriginWhenStateWasReceived != stateToAdd->origin)
			{
				stateToAdd->teleport = true;
			}
			lastOriginWhenStateWasReceived = stateToAdd->origin;
		}
		else
		{
			stateToAdd->origin = lastOriginWhenStateWasReceived;
		}
	}

	if (characterMovementComponent != nullptr)
	{
		if (deserializeMovementMode)
		{
			uint8 tempMovementMode;
			readFromBuffer(&tempMovementMode);
			stateToAdd->movementMode = tempMovementMode;
			stateToAdd->wasMovementModeReceived = true;
		}
		else
		{
			// When the state is added it will get the movement mode from the state before it in the buffer
		}
	}

	if (realObjectToSync == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Could not find target for network state message."));
		return;
	}

	if (receivedStatesCounter < sendRate) receivedStatesCounter++;

	// Read position.
	if (deserializePosition)
	{
		if (isPositionCompressed)
		{
			FFloat16 tempX, tempY, tempZ;
			if (isSyncingXPosition())
			{
				readFromBuffer(&(tempX));
				stateToAdd->position.X = float(tempX);
			}
			if (isSyncingYPosition())
			{
				readFromBuffer(&(tempY));
				stateToAdd->position.Y = float(tempY);
			}
			if (isSyncingZPosition())
			{
				readFromBuffer(&(tempZ));
				stateToAdd->position.Z = float(tempZ);
			}
			// Multiply by 100 to fully decompress since we divided by 100 when sending.
			stateToAdd->position = stateToAdd->position * 100.0f;
		}
		else
		{
			if (isSyncingXPosition())
			{
				readFromBuffer(&(stateToAdd->position.X));
			}
			if (isSyncingYPosition())
			{
				readFromBuffer(&(stateToAdd->position.Y));
			}
			if (isSyncingZPosition())
			{
				readFromBuffer(&(stateToAdd->position.Z));
			}
		}
	}
	else
	{
		if (stateCount > 0)
		{
			stateToAdd->position = stateBuffer[0]->position;
		}
		else
		{
			stateToAdd->position = getPosition();
		}
	}
	// Read rotation.
	if (deserializeRotation)
	{
		float rotX = 0;
		float rotY = 0;
		float rotZ = 0;
		if (isRotationCompressed)
		{
			FFloat16 tempX, tempY, tempZ;
			if (isSyncingXRotation())
			{
				readFromBuffer(&(tempX));
				rotX = float(tempX);
			}
			if (isSyncingYRotation())
			{
				readFromBuffer(&(tempY));
				rotY = float(tempY);
			}
			if (isSyncingZRotation())
			{
				readFromBuffer(&(tempZ));
				rotZ = float(tempZ);
			}
			FVector3f rot = FVector3f(rotX, rotY, rotZ);
			stateToAdd->rotation = FQuat4f::MakeFromEuler(rot);
		}
		else
		{
			if (isSyncingXRotation())
			{
				readFromBuffer(&rotX);
			}
			if (isSyncingYRotation())
			{
				readFromBuffer(&rotY);
			}
			if (isSyncingZRotation())
			{
				readFromBuffer(&rotZ);
			}
			FVector3f rot = FVector3f(rotX, rotY, rotZ);
			stateToAdd->rotation = FQuat4f::MakeFromEuler(rot);
		}
	}
	else
	{
		if (stateCount > 0)
		{
			stateToAdd->rotation = stateBuffer[0]->rotation;
		}
		else
		{
			stateToAdd->rotation = getRotation();
		}
	}
	// Read scale.
	if (deserializeScale)
	{
		if (isScaleCompressed)
		{
			FFloat16 tempX, tempY, tempZ;
			if (isSyncingXScale())
			{
				readFromBuffer(&(tempX));
				stateToAdd->scale.X = float(tempX);
			}
			if (isSyncingYScale())
			{
				readFromBuffer(&(tempY));
				stateToAdd->scale.Y = float(tempY);
			}
			if (isSyncingZScale())
			{
				readFromBuffer(&(tempZ));
				stateToAdd->scale.Z = float(tempZ);
			}
		}
		else
		{
			if (isSyncingXScale())
			{
				readFromBuffer(&(stateToAdd->scale.X));
			}
			if (isSyncingYScale())
			{
				readFromBuffer(&(stateToAdd->scale.Y));
			}
			if (isSyncingZScale())
			{
				readFromBuffer(&(stateToAdd->scale.Z));
			}
		}
	}
	else
	{
		if (stateCount > 0)
		{
			stateToAdd->scale = stateBuffer[0]->scale;
		}
		else
		{
			stateToAdd->scale = getScale();
		}
	}
	// Read velocity.
	if (deserializeVelocity)
	{
		if (isVelocityCompressed)
		{
			FFloat16 tempX, tempY, tempZ;
			if (isSyncingXVelocity())
			{
				readFromBuffer(&(tempX));
				stateToAdd->velocity.X = float(tempX);
			}
			if (isSyncingYVelocity())
			{
				readFromBuffer(&(tempY));
				stateToAdd->velocity.Y = float(tempY);
			}
			if (isSyncingZVelocity())
			{
				readFromBuffer(&(tempZ));
				stateToAdd->velocity.Z = float(tempZ);
			}
		}
		else
		{
			if (isSyncingXVelocity())
			{
				readFromBuffer(&(stateToAdd->velocity.X));
			}
			if (isSyncingYVelocity())
			{
				readFromBuffer(&(stateToAdd->velocity.Y));
			}
			if (isSyncingZVelocity())
			{
				readFromBuffer(&(stateToAdd->velocity.Z));
			}
		}
		latestReceivedVelocity = stateToAdd->velocity;
	}
	else
	{
		// If we didn't receive an updated velocity, use the latest received velocity.
		stateToAdd->velocity = latestReceivedVelocity;
	}
	// Read anguluar velocity.
	if (deserializeAngularVelocity)
	{
		if (isAngularVelocityCompressed)
		{
			FFloat16 tempX, tempY, tempZ;
			if (isSyncingXAngularVelocity())
			{
				readFromBuffer(&(tempX));
				stateToAdd->angularVelocity.X = float(tempX);
			}
			if (isSyncingYAngularVelocity())
			{
				readFromBuffer(&(tempY));
				stateToAdd->angularVelocity.Y = float(tempY);
			}
			if (isSyncingZAngularVelocity())
			{
				readFromBuffer(&(tempZ));
				stateToAdd->angularVelocity.Z = float(tempZ);
			}
		}
		else
		{
			if (isSyncingXAngularVelocity())
			{
				readFromBuffer(&(stateToAdd->angularVelocity.X));
			}
			if (isSyncingYAngularVelocity())
			{
				readFromBuffer(&(stateToAdd->angularVelocity.Y));
			}
			if (isSyncingZAngularVelocity())
			{
				readFromBuffer(&(stateToAdd->angularVelocity.Z));
			}
		}
		latestReceivedAngularVelocity = stateToAdd->angularVelocity;
	}
	else
	{
		stateToAdd->angularVelocity = latestReceivedAngularVelocity;
	}

	// Check if ownership has changed
	if (syncOwnershipChange)
	{
		// Only need to read it on clients, the server already knows it
		if (realObjectToSync->GetWorld()->IsNetMode(ENetMode::NM_Client))
		{
			readFromBuffer(&ownerChangeIndicator);
		}
		checkIfOwnerHasChanged(stateToAdd);
	}

	addState(stateToAdd);
}

/// <summary>Checks if the owner has changed on each received State.</summary>
/// <remarks>If the owner has changed, the state buffer is cleared and owner time is reset</remarks>
void USmoothSync::checkIfOwnerHasChanged(SmoothState* newState)
{
	if (syncOwnershipChange &&
		ownerChangeIndicator != previousReceivedOwnerInt)
	{
		previousReceivedOwnerInt = ownerChangeIndicator;
		clearBuffer();
		ownerTimeOffsets.Empty();
	}
}

// Called every frame
void USmoothSync::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!isBeingUsed || realObjectToSync == nullptr || targetTempState == nullptr) return;

	IsTicking = true;

	updatedDeltaTime = DeltaTime;

	bool sendTransform = shouldSendTransform();

	// Code to test origin rebasing
	/*if (sendTransform)
	{
		FIntVector newOrigin;
		newOrigin.X = (int)(GetWorld()->OriginLocation.X + this->getPosition().X);
		newOrigin.Y = (int)(GetWorld()->OriginLocation.Y + this->getPosition().Y);
		newOrigin.Z = (int)(GetWorld()->OriginLocation.Z + this->getPosition().Z);
		if ((GetWorld()->OriginLocation - newOrigin).Size() > 2000)
		{
			UE_LOG(LogTemp, Warning, TEXT("Changing Origin: %s"), *(newOrigin.ToString()));
			GetWorld()->RequestNewWorldOrigin(newOrigin);
		}
	}*/

	if (realObjectToSync->GetWorld()->GetNetMode() < ENetMode::NM_Client)
	{
		if (syncOwnershipChange)
		{
			// Check if owner has changed
			AController* owningController = GetOwningController();
			if (owningController != owningControllerLastFrame)
			{
				ownerChangeIndicator++;
				// 127 for max number in a byte and go back to 1 so it's different than default 0.
				if (ownerChangeIndicator > 127)
				{
					ownerChangeIndicator = 1;
				}
				// This fixes some issues with old positions getting sent on unpossess because of some weird at-rest stuff
				ResetAtRestState();
			}
			owningControllerLastFrame = owningController;
		}

		// Check to see if network relevancy has changed. If so we need to resend the latest State with the latest origin
		// and movement mode. Otherwise objects can get stuck at their old origin when becoming relevant on non-owners
		bool becameRelevantToAnyone = false;
		for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
		{
			APlayerController* pc = Iterator->Get();
			if (pc == nullptr) continue;
			AActor* character = pc->GetCharacter();
			if (character == nullptr) continue;

			bool isRelevant = realObjectToSync->IsNetRelevantFor(pc, character, character->GetActorLocation());
			bool* wasRelevantLastTick = wasRelevant.Find(character);
			if (wasRelevantLastTick == nullptr || (*wasRelevantLastTick == false && isRelevant))
			{
				becameRelevantToAnyone = true;
			}

			wasRelevant.Add(character, isRelevant);
		}

		if (becameRelevantToAnyone)
		{
			// Unsetting lastOriginWhenStateWasSent forces the origin to be included in the State that is sent
			forceStateSend = true;
			// Send the State now unless we are about to send it below because we are owner
			if (!sendTransform && stateBuffer != nullptr && stateBuffer[0] != nullptr)
			{
				sendState(stateBuffer[0]);
			}
			// This fixes some issues with old positions getting sent because of some weird at-rest stuff
			ResetAtRestState();
		}
	}

	bool isAttached = realObjectToSync->GetAttachParentActor() != nullptr;
	if (isAttached != wasAttachedLastTick)
	{
		if (!sendTransform)
		{
			clearBuffer();
		}
		else
		{
			// This fixes some issues with old positions getting sent on detach because of some weird at-rest stuff
			ResetAtRestState();
		}
	}
	wasAttachedLastTick = isAttached;

	// Set the interpolated / extrapolated Transforms and Rigidbodies if we shouldn't send Transform.
	if (!sendTransform)
	{
		adjustOwnerTime();
		applyInterpolationOrExtrapolation();
	}
	else // Send out Transform if we should send Transform.
	{
		sendState();
	}

	// Set up variables to check against next frame.
	if (samePositionCount == 0 && restStatePosition != RestState::AT_REST)
	{
		positionLastFrame = getPosition();
		originLastFrame = GetWorld()->OriginLocation;
	}
	if (sameRotationCount == 0 && restStateRotation != RestState::AT_REST)
	{
		rotationLastFrame = getRotation();
	}
	linearVelocityLastFrame = getLinearVelocity();
	angularVelocityLastFrame = getAngularVelocity();

	// Reset back to default bools.
	resetFlags();

	IsTicking = false;
	if (ShouldCleanUp) CleanUp();
}

void USmoothSync::ResetAtRestState()
{
	// This fixes some issues with old positions getting sent on detach because of some weird at-rest stuff
	positionLastFrame = getPosition();
	rotationLastFrame = getRotation();
	lastPositionWhenStateWasSent = getPosition();
	lastRotationWhenStateWasSent = getRotation();
	samePositionCount = 0;
	sameRotationCount = 0;
	samePositionSentCount = 0;
	sameRotationSentCount = 0;
	restStatePosition = RestState::MOVING;
	restStateRotation = RestState::MOVING;
}

/// <summary>Get the Controller that owns realObjectToSync, if any.</summary>
/// <remarks>
/// Uses GetOwner() to travel up the ownership chain until either a Controller is found or the root object is reached.
/// If no Controller is found, returns nullptr.
/// </remarks>
AController* USmoothSync::GetOwningController()
{
	// Find the owning controller, if any
	AController* owningController = nullptr;
	AActor* owner = realObjectToSync;
	do
	{
		if (AController* controller = Cast<AController>(owner))
		{
			owningController = controller;
			break;
		}
		owner = owner->GetOwner();
	} while (owner != nullptr);

	return owningController;
}


/// <summary>Used to turn Smooth Sync on and off. True to enable Smooth Sync. False to disable Smooth Sync.</summary>
///	<remarks>Will automatically send RPCs across the network. Is meant to be called on the owned version of the Actor.</remarks>
void USmoothSync::enableSmoothSync(bool enable)
{
	if (realObjectToSync != nullptr && realObjectToSync->GetWorld() != nullptr && realObjectToSync->GetWorld()->GetNetMode() < ENetMode::NM_Client)
	{
		SmoothSyncEnableServerToClients(enable);
	}
	else
	{
		if (shouldSendTransform())
		{
			SmoothSyncEnableClientToServer(enable);
		}
	}
}

void USmoothSync::internalEnableSmoothSync(bool enable)
{
	if (enable)
	{
		isBeingUsed = true;
		clearBuffer();
		samePositionCount = 0;
		sameRotationCount = 0;
		restStatePosition = RestState::MOVING;
		restStateRotation = RestState::MOVING;
	}
	else
	{
		isBeingUsed = false;
		clearBuffer();
		samePositionCount = 0;
		sameRotationCount = 0;
		restStatePosition = RestState::MOVING;
		restStateRotation = RestState::MOVING;
	}
}

/// <summary>
/// Determines if we should be trying to send out the Transform.
/// </summary>
/// <remarks>
/// Rules for sending Transform.
/// Owned Actors: Owner determines position and sends out Transform.
/// Unowned Actors: Server determines position and sends out Transform.
/// </remarks>
bool USmoothSync::shouldSendTransform()
{
	if (realObjectToSync == nullptr) return false;

	auto controller = GetOwningController();
	if (controller == nullptr)
	{
		// If there is no owning controller than the object is unowned
		// and synced from the server to all clients
		return realObjectToSync->GetWorld()->GetNetMode() < ENetMode::NM_Client;
	}
	else
	{
		// Owned objects are synced from the controlling client to the server and ultimately all other clients
		return controller->IsLocalController();
	}
}

void USmoothSync::sendState(SmoothState* stateToSend)
{
	// Same position logic.
	if (syncPosition != SyncMode::NONE)
	{
		if (sameVector((FVector3f)originLastFrame + positionLastFrame, (FVector3f)GetWorld()->OriginLocation + getPosition(), atRestPositionThreshold))
		{
			if (restStatePosition != RestState::AT_REST)
			{
				samePositionCount += updatedDeltaTime;
			}
			if (samePositionCount >= atRestThresholdCount)
			{
				samePositionCount = 0;
				restStatePosition = RestState::AT_REST;
				forceStateSendNextFrame();
			}
		}
		else
		{
			if (restStatePosition == RestState::AT_REST && getPosition() != latestTeleportedFromPosition)
			{
				restStatePosition = RestState::JUST_STARTED_MOVING;
				forceStateSendNextFrame();
			}
			else if (restStatePosition == RestState::JUST_STARTED_MOVING)
			{
				restStatePosition = RestState::MOVING;
				//forceStateSendNextFixedUpdate();
			}
			else
			{
				samePositionCount = 0;
			}
		}
	}
	else
	{
		syncPosition = SyncMode::NONE;
	}
	// Same rotation logic.
	if (syncRotation != SyncMode::NONE)
	{
		if (sameVector(rotationLastFrame.Euler(), getRotation().Euler(), atRestRotationThreshold))
		{
			if (restStateRotation != RestState::AT_REST)
			{
				sameRotationCount += updatedDeltaTime;
			}

			if (sameRotationCount >= atRestThresholdCount)
			{
				sameRotationCount = 0;
				restStateRotation = RestState::AT_REST;
				forceStateSendNextFrame();
			}
		}
		else
		{
			if (restStateRotation == RestState::AT_REST && getRotation() != latestTeleportedFromRotation)
			{
				restStateRotation = RestState::JUST_STARTED_MOVING;
				forceStateSendNextFrame();
			}
			else if (restStateRotation == RestState::JUST_STARTED_MOVING)
			{
				restStateRotation = RestState::MOVING;
				//forceStateSendNextFixedUpdate();
			}
			else
			{
				sameRotationCount = 0;
			}
		}
	}
	else
	{
		syncRotation = SyncMode::NONE;
	}

	// If Movement Mode (animation) has changed and nothing else has changed, send State regardless of when the last State was sent.
	sendMovementMode = shouldSendMovementMode();
	if (sendMovementMode)
	{
		forceStateSendNextFrame();
	}

	// If hasn't been long enough since the last send(and we aren't forcing a state send), return and don't send out.
	if (UGameplayStatics::GetRealTimeSeconds(GetOwner()->GetWorld()) - lastTimeStateWasSent < GetNetworkSendInterval() && !forceStateSend) return;

	bool samePositionAsLastSend = sameVector(getPosition(), lastPositionWhenStateWasSent, sendPositionThreshold);
	if (samePositionAsLastSend) samePositionSentCount++;
	else samePositionSentCount = 0;

	bool sameRotationAsLastSend = sameVector(getRotation().Euler(), lastRotationWhenStateWasSent.Euler(), sendRotationThreshold);
	if (sameRotationAsLastSend) sameRotationSentCount++;
	else sameRotationSentCount = 0;

	// Checks the core variables to see if we should be sending them out.
	sendPosition = shouldSendPosition();
	sendRotation = shouldSendRotation();
	sendScale = shouldSendScale();
	sendVelocity = shouldSendVelocity();
	sendAngularVelocity = shouldSendAngularVelocity();

	// Check that at least one variable has changed that we want to sync.
	if (!sendPosition && !sendRotation && !sendScale && !sendVelocity && !sendAngularVelocity && !sendMovementMode) return;

	if (alwaysSendMovementMode)
	{
		// If we are sending anything, send movement mode
		sendMovementMode = true;
	}



	if (stateToSend == nullptr)
	{
		sendingTempState->copyFromSmoothSync(this);

		// Check if should send rest messages.
		if (restStatePosition == RestState::AT_REST) sendAtPositionalRestMessage = true;
		if (restStateRotation == RestState::AT_REST) sendAtRotationalRestMessage = true;

		// Send the new State when the object starts moving so we can interpolate correctly.
		if (restStatePosition == RestState::JUST_STARTED_MOVING)
		{
			sendingTempState->position = lastPositionWhenStateWasSent;
			sendingTempState->origin = lastOriginWhenStateWasSent;
		}
		if (restStateRotation == RestState::JUST_STARTED_MOVING)
		{
			sendingTempState->rotation = lastRotationWhenStateWasSent;
		}
		if (restStatePosition == RestState::JUST_STARTED_MOVING ||
			restStateRotation == RestState::JUST_STARTED_MOVING)
		{
			sendingTempState->ownerTimestamp =
				UGameplayStatics::GetRealTimeSeconds(GetOwner()->GetWorld()) - GetOwner()->GetWorld()->GetDeltaSeconds();
			if (restStatePosition != RestState::JUST_STARTED_MOVING)
			{
				sendingTempState->position = positionLastFrame;
				sendingTempState->origin = originLastFrame;
			}
			if (restStateRotation != RestState::JUST_STARTED_MOVING)
			{
				sendingTempState->rotation = rotationLastFrame;
			}
		}

		lastTimeStateWasSent = UGameplayStatics::GetRealTimeSeconds(GetOwner()->GetWorld());

		SerializeState(sendingTempState);
	}
	else
	{
		SerializeState(stateToSend);
	}
}

void USmoothSync::resetFlags()
{
	forceStateSend = false;
	sendAtPositionalRestMessage = false;
	sendAtRotationalRestMessage = false;
}

void USmoothSync::SerializeState(SmoothState* sendingState)
{
	sendingCharArraySize = 0;
	sendingCharArray.Empty();

	if (sendPosition) lastPositionWhenStateWasSent = sendingState->position;
	if (sendRotation) lastRotationWhenStateWasSent = sendingState->rotation;
	if (sendScale) lastScaleWhenStateWasSent = sendingState->scale;
	if (sendVelocity) lastVelocityWhenStateWasSent = sendingState->velocity;
	if (sendAngularVelocity) lastAngularVelocityWhenStateWasSent = sendingState->angularVelocity;

	copyToBuffer(encodeSyncInformation(sendPosition, sendRotation, sendScale,
		sendVelocity, sendAngularVelocity, sendAtPositionalRestMessage, sendAtRotationalRestMessage, sendMovementMode));

	if (isUsingOriginRebasing)
	{
		char extraSyncInfo = 0;
		if (alwaysSendOrigin || forceStateSend || sendingState->origin != lastOriginWhenStateWasSent)
		{
			extraSyncInfo |= originRebaseMask;
		}
		copyToBuffer(extraSyncInfo);
	}

	copyToBuffer(sendingState->ownerTimestamp);

	if (isUsingOriginRebasing)
	{
		if (alwaysSendOrigin || forceStateSend || sendingState->origin != lastOriginWhenStateWasSent)
		{
			copyToBuffer(sendingState->origin);
		}
		lastOriginWhenStateWasSent = sendingState->origin;
	}

	if (characterMovementComponent != nullptr)
	{
		if (sendMovementMode)
		{
			copyToBuffer(sendingState->movementMode);
			latestSentMovementMode = sendingState->movementMode;
		}
	}

	// Write position.
	if (sendPosition)
	{
		if (isPositionCompressed)
		{
			// Divide by 100 before sending to make compression more accurate for larger numbers
			sendingState->position = sendingState->position / 100.0f;
			if (isSyncingXPosition())
			{
				copyToBuffer(FFloat16(sendingState->position.X));
			}
			if (isSyncingYPosition())
			{
				copyToBuffer(FFloat16(sendingState->position.Y));
			}
			if (isSyncingZPosition())
			{
				copyToBuffer(FFloat16(sendingState->position.Z));
			}
		}
		else
		{
			if (isSyncingXPosition())
			{
				copyToBuffer(sendingState->position.X);
			}
			if (isSyncingYPosition())
			{
				copyToBuffer(sendingState->position.Y);
			}
			if (isSyncingZPosition())
			{
				copyToBuffer(sendingState->position.Z);
			}
		}
	}
	// Write rotation.
	if (sendRotation)
	{
		FVector3f rot = sendingState->rotation.Euler();
		if (isRotationCompressed)
		{
			if (isSyncingXRotation())
			{
				copyToBuffer(FFloat16(rot.X));
			}
			if (isSyncingYRotation())
			{
				copyToBuffer(FFloat16(rot.Y));
			}
			if (isSyncingZRotation())
			{
				copyToBuffer(FFloat16(rot.Z));
			}
		}
		else
		{
			if (isSyncingXRotation())
			{
				copyToBuffer(rot.X);
			}
			if (isSyncingYRotation())
			{
				copyToBuffer(rot.Y);
			}
			if (isSyncingZRotation())
			{
				copyToBuffer(rot.Z);
			}
		}
	}
	// Write scale.
	if (sendScale)
	{
		if (isScaleCompressed)
		{
			if (isSyncingXScale())
			{
				copyToBuffer(FFloat16(sendingState->scale.X));
			}
			if (isSyncingYScale())
			{
				copyToBuffer(FFloat16(sendingState->scale.Y));
			}
			if (isSyncingZScale())
			{
				copyToBuffer(FFloat16(sendingState->scale.Z));
			}
		}
		else
		{
			if (isSyncingXScale())
			{
				copyToBuffer(sendingState->scale.X);
			}
			if (isSyncingYScale())
			{
				copyToBuffer(sendingState->scale.Y);
			}
			if (isSyncingZScale())
			{
				copyToBuffer(sendingState->scale.Z);
			}
		}
	}
	// Write velocity.
	if (sendVelocity)
	{
		if (isVelocityCompressed)
		{
			if (isSyncingXVelocity())
			{
				copyToBuffer(FFloat16(sendingState->velocity.X));
			}
			if (isSyncingYVelocity())
			{
				copyToBuffer(FFloat16(sendingState->velocity.Y));
			}
			if (isSyncingZVelocity())
			{
				copyToBuffer(FFloat16(sendingState->velocity.Z));
			}
		}
		else
		{
			if (isSyncingXVelocity())
			{
				copyToBuffer(sendingState->velocity.X);
			}
			if (isSyncingYVelocity())
			{
				copyToBuffer(sendingState->velocity.Y);
			}
			if (isSyncingZVelocity())
			{
				copyToBuffer(sendingState->velocity.Z);
			}
		}
	}
	// Write angular velocity.
	if (sendAngularVelocity)
	{
		if (isAngularVelocityCompressed)
		{
			if (isSyncingXAngularVelocity())
			{
				copyToBuffer(FFloat16(sendingState->angularVelocity.X));
			}
			if (isSyncingYAngularVelocity())
			{
				copyToBuffer(FFloat16(sendingState->angularVelocity.Y));
			}
			if (isSyncingZAngularVelocity())
			{
				copyToBuffer(FFloat16(sendingState->angularVelocity.Z));
			}
		}
		else
		{
			if (isSyncingXAngularVelocity())
			{
				copyToBuffer(sendingState->angularVelocity.X);
			}
			if (isSyncingYAngularVelocity())
			{
				copyToBuffer(sendingState->angularVelocity.Y);
			}
			if (isSyncingZAngularVelocity())
			{
				copyToBuffer(sendingState->angularVelocity.Z);
			}
		}
	}

	if (realObjectToSync->GetWorld()->GetNetMode() < ENetMode::NM_Client)
	{
		// Only the server sends out owner information.
		if (syncOwnershipChange)
		{
			copyToBuffer(ownerChangeIndicator);
		}
		ServerSendsTransformToEveryone(sendingCharArray);
	}
	else
	{
		ClientSendsTransformToServer(sendingCharArray);
	}
}

/// <summary>Use the SmoothState buffer to set interpolated or extrapolated Transforms and Rigidbodies on non-owned objects.</summary>
void USmoothSync::applyInterpolationOrExtrapolation()
{
	if (stateCount == 0 || stateBuffer[0] == nullptr) return;

	// Reset the temporary SmoothState so it can be refilled.
	if (!extrapolatedLastFrame)
	{
		targetTempState->defaultTheVariables();
	}

	triedToExtrapolateTooFar = false;

	bool isExtrapolating = false;
	bool shouldSetPositionAndRotation = false;

	// The target playback time
	interpolationTime = ownerTime - interpolationBackTime;

	// Use interpolation if the target playback time is present in the buffer.
	if (stateCount > 1 && stateBuffer[0]->ownerTimestamp > interpolationTime)
	{
		shouldSetPositionAndRotation = true;
		interpolate(interpolationTime, targetTempState);
		extrapolatedLastFrame = false;
	}
	// Don't extrapolate if we are at rest, but continue moving towards the final destination.
	else if (stateBuffer[0]->atPositionalRest && stateBuffer[0]->atRotationalRest)
	{
		shouldSetPositionAndRotation = true;
		targetTempState->copyFromState(stateBuffer[0]);
		extrapolatedLastFrame = false;
	}
	// The newest state is too old, we'll have to use extrapolation.
	else
	{
		bool success = extrapolate(interpolationTime, targetTempState, shouldSetPositionAndRotation);
		extrapolatedLastFrame = true;
		triedToExtrapolateTooFar = !success;
		if (!triedToExtrapolateTooFar)
		{
			isExtrapolating = true;
		}
	}

	float actualPositionLerpSpeed = positionLerpSpeed;
	float actualRotationLerpSpeed = rotationLerpSpeed;
	float actualScaleLerpSpeed = scaleLerpSpeed;
	bool teleportPosition = false;
	bool teleportRotation = false;

	if (dontEasePosition)
	{
		actualPositionLerpSpeed = 1;
		teleportPosition = true;
		dontEasePosition = false;
	}

	if (dontEaseRotation)
	{
		actualRotationLerpSpeed = 1;
		teleportRotation = true;
		dontEaseRotation = false;
	}

	if (dontEaseScale)
	{
		actualScaleLerpSpeed = 1;
		dontEaseScale = false;
	}

	// Set position, rotation, scale, velocity, and angular velocity (as long as we didn't try and extrapolate too far).
	if (!triedToExtrapolateTooFar)// || (!isSimulatingPhysics))
	{
		FIntVector localOrigin = GetWorld()->OriginLocation;
		bool changedPositionEnough = false;
		float distance = 0;
		// If the current position is different from target position
		if (getPosition() != targetTempState->position)
		{
			// If we want to use either of these variables, we need to calculate the distance.
			if (receivedPositionThreshold != 0)
			{
				distance = FVector3f::Distance(getPosition(), targetTempState->rebasedPosition(localOrigin));
			}
		}
		// If we want to use receivedPositionThreshold, check if the distance has passed the threshold.
		if (receivedPositionThreshold != 0)
		{
			if (distance > receivedPositionThreshold)
			{
				changedPositionEnough = true;
			}
		}
		else // If we don't want to use receivedPositionThreshold, we will always set the new position.
		{
			changedPositionEnough = true;
		}

		bool changedRotationEnough = false;
		float angleDifference = 0;
		// If the current rotation is different from target rotation
		if (getRotation() != targetTempState->rotation)
		{
			// If we want to use either of these variables, we need to calculate the angle difference.
			if (receivedRotationThreshold != 0)
			{
				if (realComponentToSync != nullptr)
				{
					angleDifference = ((FQuat4f)realComponentToSync->GetComponentRotation().Quaternion()).AngularDistance(targetTempState->rotation);
				}
				else
				{
					angleDifference = ((FQuat4f)realObjectToSync->GetActorRotation().Quaternion()).AngularDistance(targetTempState->rotation);
				}
				angleDifference = angleDifference * (180.0f / PI);
			}
		}
		// If we want to use receivedRotationThreshold, check if the angle difference has passed the threshold.
		if (receivedRotationThreshold != 0)
		{
			if (angleDifference > receivedRotationThreshold)
			{
				changedRotationEnough = true;
			}
		}
		else // If we don't want to use receivedRotationThreshold, we will always set the new position.
		{
			changedRotationEnough = true;
		}

		// If current scale is different from target scale
		bool changedScaleEnough = false;
		if (getScale() != targetTempState->scale)
		{
			changedScaleEnough = true;
		}

		// Set velocity if not extrapolating
		// When extrapolating this will have already been done in extrapolate() 
		// for the first frame of extrapolation. After that, physics takes over
		if (!isExtrapolating)
		{
			setLinearVelocity(targetTempState->velocity);
			setAngularVelocity(targetTempState->angularVelocity);
		}

		// Always set velocity if we're using a character or movement controller
		// This velocity is not used to move the actual object, it's just for animations and whatnot
		// so it is ok to set even when extrapolating. This is necessary because physics will not set it.
		if (characterMovementComponent != nullptr || movementComponent != nullptr)
		{
			setLinearVelocity(targetTempState->velocity);
		}

		if (syncPosition != SyncMode::NONE && shouldSetPositionAndRotation)
		{
			if (changedPositionEnough)
			{
				FVector3f newPosition = getPosition();

				if (isSyncingXPosition())
				{
					newPosition.X = targetTempState->rebasedPosition(localOrigin).X;
				}
				if (isSyncingYPosition())
				{
					newPosition.Y = targetTempState->rebasedPosition(localOrigin).Y;
				}
				if (isSyncingZPosition())
				{
					newPosition.Z = targetTempState->rebasedPosition(localOrigin).Z;
				}

				setPosition(FMath::Lerp(getPosition(), newPosition, actualPositionLerpSpeed), teleportPosition);
			}
		}
		if (syncRotation != SyncMode::NONE && shouldSetPositionAndRotation)
		{
			if (changedRotationEnough)
			{
				FVector3f newRotation = getRotation().Euler();
				if (isSyncingXRotation())
				{
					newRotation.X = targetTempState->rotation.Euler().X;
				}
				if (isSyncingYRotation())
				{
					newRotation.Y = targetTempState->rotation.Euler().Y;
				}
				if (isSyncingZRotation())
				{
					newRotation.Z = targetTempState->rotation.Euler().Z;
				}
				FQuat4f newQuaternion = FQuat4f::MakeFromEuler(newRotation);
				setRotation(FMath::Lerp(getRotation(), newQuaternion, actualRotationLerpSpeed), teleportRotation);
			}
		}
		if (syncScale != SyncMode::NONE)
		{
			if (changedScaleEnough)
			{
				FVector3f newScale = getScale();
				if (isSyncingXScale())
				{
					newScale.X = targetTempState->scale.X;
				}
				if (isSyncingYScale())
				{
					newScale.Y = targetTempState->scale.Y;
				}
				if (isSyncingZScale())
				{
					newScale.Z = targetTempState->scale.Z;
				}
				setScale(FMath::Lerp(getScale(), newScale, actualScaleLerpSpeed));
			}
		}
	}
	else if (triedToExtrapolateTooFar)
	{
		if (isSimulatingPhysics)
		{
			setLinearVelocity(FVector3f::ZeroVector);
			setAngularVelocity(FVector3f::ZeroVector);
		}
	}

	if (characterMovementComponent != nullptr)
	{
		characterMovementComponent->UpdateProxyAcceleration();
		characterMovementComponent->ApplyNetworkMovementMode(targetTempState->movementMode);
	}
}

/// <summary>
/// Interpolate between two States from the stateBuffer in order calculate the targetState.
/// </summary>
/// <param name="interpolationTimeLocal">The target time</param>
void USmoothSync::interpolate(float interpolationTimeLocal, SmoothState* targetState)
{
	// Go through buffer and find correct SmoothState to start at.
	int stateIndex = 0;
	for (; stateIndex < stateCount; stateIndex++)
	{
		if (stateBuffer[stateIndex]->ownerTimestamp <= interpolationTimeLocal) break;
	}

	if (stateIndex == stateCount)
	{
		//Debug.LogError("Ran out of States in SmoothSync SmoothState buffer for object: " + gameObject.name);
		stateIndex--;
	}

	// The SmoothState one slot newer than the starting SmoothState.
	SmoothState* end = stateBuffer[FMath::Max(stateIndex - 1, 0)];
	// The starting playback SmoothState.
	SmoothState* start = stateBuffer[stateIndex];

	// Calculate how far between the two States we should be.
	float t = 1;
	if (end->ownerTimestamp != start->ownerTimestamp) // A not so pretty fix for having two States with same ownerTimestamp.
	{
		t = (interpolationTimeLocal - start->ownerTimestamp) / (end->ownerTimestamp - start->ownerTimestamp);
	}

	shouldTeleport(start, end, interpolationTimeLocal, &t);

	// Interpolate between the States to get the target SmoothState.
	targetState->Lerp(targetState, start, end, t);

	// Snap thresholds
	if (positionSnapThreshold != 0)
	{
		float positionDifference = FVector3f::Distance(end->position, start->position);
		if (positionDifference > positionSnapThreshold)
		{
			targetState->position = end->position;
		}
		dontEasePosition = true;
	}

	if (scaleSnapThreshold != 0)
	{
		float scaleDifference = FVector3f::Distance(end->scale, start->scale);
		if (scaleDifference > scaleSnapThreshold)
		{
			targetState->scale = end->scale;
		}
		dontEaseScale = true;
	}

	if (rotationSnapThreshold != 0)
	{
		auto rotationDifference = start->rotation.AngularDistance(end->rotation);
		if (rotationDifference > rotationSnapThreshold)
		{
			targetState->rotation = end->rotation;
		}
		dontEaseRotation = true;
	}
}

/// <summary>
/// Attempt to extrapolate from the newest SmoothState in the buffer
/// </summary>
/// <param name="interpolationTimeLocal">The target time</param>
/// <returns>true on success, false if interpolationTime is more than extrapolationLength in the future</returns>
bool USmoothSync::extrapolate(float interpolationTimeLocal, SmoothState* targetState, bool& shouldSetPositionAndRotation)
{
	// If we don't want to extrapolate, don't.
	if (extrapolationMode == ExtrapolationMode::NONE) return false;

	// Start from the latest State
	bool firstTimeExtrapolatingFromThisState = false;
	if (!extrapolatedLastFrame || targetState->ownerTimestamp < stateBuffer[0]->ownerTimestamp)
	{
		firstTimeExtrapolatingFromThisState = true;
		targetState->copyFromState(stateBuffer[0]);
		timeSpentExtrapolating = 0;
	}

	FIntVector localOrigin = GetWorld()->OriginLocation;

	// Don't extrapolate for more than extrapolationDistanceLimit if we are using it.
	if (useExtrapolationDistanceLimit)
	{
		float distance = FVector3f::Distance(stateBuffer[0]->rebasedPosition(localOrigin), getPosition());
		if (distance >= extrapolationDistanceLimit)
		{
			return false;
		}
	}

	// Calculate how long to extrapolate from the current target State.
	float timeDif = 0;
	if (timeSpentExtrapolating == 0)
	{
		timeDif = interpolationTimeLocal - targetState->ownerTimestamp;
	}
	else
	{
		timeDif = updatedDeltaTime;
	}
	timeSpentExtrapolating += timeDif;

	// Don't extrapolate for more than extrapolationTimeLimit if we are using it.
	if (useExtrapolationTimeLimit && timeSpentExtrapolating > extrapolationTimeLimit)
	{
		return false;
	}

	// For the first frame of extrapolation we calculate or set velocity
	// After the first frame either physics takes over or velocity is fixed
	if (firstTimeExtrapolatingFromThisState)
	{
		// Determines velocities based on previous State. Used on non-rigidbodies and when not syncing velocity 
		// to save bandwidth. This is less accurate than syncing velocity for rigidbodies. 
		if (stateCount >= 2)
		{
			if (!stateBuffer[0]->atPositionalRest)
			{
				bool hasVelocitySource = isSimulatingPhysics || characterMovementComponent != nullptr || movementComponent != nullptr;
				if (!hasVelocitySource || syncVelocity == SyncMode::NONE)
				{
					FVector3f latestPosition = stateBuffer[0]->rebasedPosition(localOrigin);
					FVector3f previousPosition = stateBuffer[1]->rebasedPosition(localOrigin);
					if (stateBuffer[0]->ownerTimestamp == stateBuffer[1]->ownerTimestamp)
					{
						targetState->velocity = linearVelocityLastFrame;
					}
					else
					{
						targetState->velocity = (latestPosition - previousPosition) / (stateBuffer[0]->ownerTimestamp - stateBuffer[1]->ownerTimestamp);
					}
				}
			}
			if (!stateBuffer[0]->atRotationalRest)
			{
				bool hasAngularVelocitySource = isSimulatingPhysics;
				if (!hasAngularVelocitySource || syncAngularVelocity == SyncMode::NONE)
				{
					FQuat4f DeltaRot = stateBuffer[1]->rotation * stateBuffer[0]->rotation.Inverse();
					FVector3f eulerRot = DeltaRot.Euler();
					eulerRot.Z *= -1;
					if (stateBuffer[0]->ownerTimestamp == stateBuffer[1]->ownerTimestamp)
					{
						targetState->velocity = angularVelocityLastFrame;
					}
					else
					{
						targetState->angularVelocity = eulerRot / (stateBuffer[0]->ownerTimestamp - stateBuffer[1]->ownerTimestamp);
					}
				}
			}
		}
	}

	// Set up some booleans for if we are moving.
	bool hasVelocity = FMath::Abs(targetState->velocity.X) >= .01f ||
		FMath::Abs(targetState->velocity.Y) >= .01f ||
		FMath::Abs(targetState->velocity.Z) >= .01f;
	bool hasAngularVelocity = FMath::Abs(targetState->angularVelocity.X) >= .01f ||
		FMath::Abs(targetState->angularVelocity.Y) >= .01f ||
		FMath::Abs(targetState->angularVelocity.Z) >= .01f;

	// We set velocity for the first frame of extrapolation then let the physics engine take over after that
	if (firstTimeExtrapolatingFromThisState)
	{
		// Only extrapolate position if not at positional rest.
		if (hasVelocity)
		{
			setLinearVelocity(targetState->velocity);
		}

		// Only extrapolate rotation if not at rotational rest.
		if (hasAngularVelocity)
		{
			setAngularVelocity(targetState->angularVelocity);
		}
	}

	// When not simulating physics we need to update position and rotation manually
	// When simulating physics the physics engine will take care of it
	// and targetState->position and targetState->rotation will not be used
	// Note that when extrapolating without simulating physics it is possible
	// to extrapolate through walls / floors / colliders. Nothing we can do about that though.
	if (!isSimulatingPhysics || firstTimeExtrapolatingFromThisState)
	{
		shouldSetPositionAndRotation = true;
		if (hasVelocity)
		{
			// Apply velocity to position because physics isn't doing it for us
			targetState->position += targetState->velocity * timeDif;
		}

		if (hasAngularVelocity)
		{
			// Apply angular velocity to rotation because physics isn't doing it for us
			FVector3f correctedEuler = targetState->angularVelocity;
			correctedEuler.X *= -1;
			correctedEuler.Y *= -1;
			FVector3f angularVelocityPerDelta = timeDif * targetState->angularVelocity;
			FQuat4f changeInRotation = FQuat4f::MakeFromEuler(angularVelocityPerDelta);
			targetState->rotation = changeInRotation * targetState->rotation;
		}
	}

	return true;
}
void USmoothSync::shouldTeleport(SmoothState* start, SmoothState* end, float interpolationTimeLocal, float* t)
{
	// If the interpolationTimeLocal is further back than the start State time and start State is a teleport, then teleport.
	if (start->ownerTimestamp > interpolationTimeLocal && start->teleport && stateCount == 2)
	{
		// Because we are further back than the Start state, the Start state is our end State.
		end = start;
		*t = 1;
		stopEasing();
	}
	// Check if low FPS caused us to skip a teleport State. If yes, teleport.
	for (int i = 0; i < stateCount; i++)
	{
		if (stateBuffer[i] == latestEndStateUsed && latestEndStateUsed != end && latestEndStateUsed != start)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (stateBuffer[j]->teleport == true)
				{
					*t = 1;
					stopEasing();
				}
				if (stateBuffer[j] == start) break;
			}
			break;
		}
	}
	latestEndStateUsed = end;
	// If target State is a teleport State, stop lerping and immediately move to it.
	if (end->teleport == true)
	{
		*t = 1;
		stopEasing();
	}
}

/// <summary>Get position of object.</summary>
FVector3f USmoothSync::getPosition()
{
	if (realComponentToSync != nullptr)
	{
		if (primitiveComponent != nullptr)
		{
			return (FVector3f)realComponentToSync->GetComponentLocation();
		}
		else
		{
			return (FVector3f)realComponentToSync->GetRelativeLocation();
		}
	}
	else if (realObjectToSync != nullptr)
	{
		return (FVector3f)realObjectToSync->GetRootComponent()->GetRelativeLocation();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("realComponentToSync AND realObjectToSync are NULL. Cannot getPosition()."));
		return lastPositionWhenStateWasSent;
	}
}
/// <summary>Get rotation of object.</summary>
FQuat4f USmoothSync::getRotation()
{
	if (realComponentToSync != nullptr)
	{
		return (FQuat4f)realComponentToSync->GetRelativeRotation().Quaternion();
	}
	else if (realObjectToSync != nullptr)
	{
		return (FQuat4f)realObjectToSync->GetRootComponent()->GetRelativeRotation().Quaternion();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("realComponentToSync AND realObjectToSync are NULL. Cannot getRotation()."));
		return lastRotationWhenStateWasSent;
	}
}
/// <summary>Get scale of object.</summary>
FVector3f USmoothSync::getScale()
{
	if (realComponentToSync != nullptr)
	{
		return (FVector3f)realComponentToSync->GetRelativeScale3D();
	}
	else if (realObjectToSync != nullptr)
	{
		return (FVector3f)realObjectToSync->GetActorRelativeScale3D();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("realComponentToSync AND realObjectToSync are NULL. Cannot getScale()."));
		return lastScaleWhenStateWasSent;
	}
}
/// <summary>Set scale of object.</summary>
FVector3f USmoothSync::getLinearVelocity()
{
	if (isSimulatingPhysics && primitiveComponent != nullptr)
	{
		return (FVector3f)primitiveComponent->GetPhysicsLinearVelocity();
	}
	else if (movementComponent != nullptr)
	{
		return (FVector3f)movementComponent->Velocity;
	}
	else if (characterMovementComponent != nullptr)
	{
		return (FVector3f)characterMovementComponent->Velocity;
	}
	else
	{
		return FVector3f::ZeroVector;
	}
}
/// <summary>Set scale of object.</summary>
FVector3f USmoothSync::getAngularVelocity()
{
	if (isSimulatingPhysics && primitiveComponent != nullptr)
	{
		return (FVector3f)primitiveComponent->GetPhysicsAngularVelocityInDegrees();
	}
	else
	{
		return FVector3f::ZeroVector;
	}
}
/// <summary>Set position of object.</summary>
void USmoothSync::setPosition(FVector3f position, bool teleport)
{
	if (primitiveComponent != nullptr && primitiveComponent->IsSimulatingPhysics())
	{
		teleport = true;
	}

	ETeleportType type = ETeleportType::None;
	if (teleport)
	{
		type = ETeleportType::TeleportPhysics;
	}

	if (realComponentToSync != nullptr)
	{
		if (primitiveComponent != nullptr)
		{
			realComponentToSync->SetWorldLocation((FVector)position, false, 0, type);
		}
		else
		{
			realComponentToSync->SetRelativeLocation((FVector)position, false, 0, type);
		}
	}
	else if (realObjectToSync != nullptr)
	{
		realObjectToSync->SetActorRelativeLocation((FVector)position, false, 0, type);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("realComponentToSync AND realObjectToSync are NULL. Cannot setPosition()."));
	}
}
/// <summary>Set rotation of object.</summary>
void USmoothSync::setRotation(const FQuat4f& rotation, bool teleport)
{
	if (primitiveComponent != nullptr && primitiveComponent->IsSimulatingPhysics())
	{
		teleport = true;
	}

	ETeleportType type = ETeleportType::None;
	if (teleport)
	{
		type = ETeleportType::TeleportPhysics;
	}

	if (realComponentToSync != nullptr)
	{
		realComponentToSync->SetRelativeRotation((FQuat)rotation, false, NULL, type);
	}
	else if (realObjectToSync != nullptr)
	{
		realObjectToSync->SetActorRelativeRotation((FQuat)rotation, false, NULL, type);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("realComponentToSync AND realObjectToSync are NULL. Cannot setRotation()."));
	}
}
/// <summary>Set scale of object.</summary>
void USmoothSync::setScale(FVector3f scale)
{
	if (realComponentToSync != nullptr)
	{
		realComponentToSync->SetRelativeScale3D((FVector)scale);
	}
	else if (realObjectToSync != nullptr)
	{
		realObjectToSync->SetActorRelativeScale3D((FVector)scale);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("realComponentToSync AND realObjectToSync are NULL. Cannot setScale()."));
	}
}
/// <summary>Set scale of object.</summary>
void USmoothSync::setLinearVelocity(FVector3f linearVelocity)
{
	if (isSimulatingPhysics && primitiveComponent != nullptr)
	{
		primitiveComponent->SetPhysicsLinearVelocity((FVector)linearVelocity);
	}
	else if (movementComponent != nullptr)
	{
		movementComponent->Velocity = (FVector)linearVelocity;
	}
	else if (characterMovementComponent != nullptr)
	{
		characterMovementComponent->Velocity = (FVector)linearVelocity;
	}
}
/// <summary>Set scale of object.</summary>
void USmoothSync::setAngularVelocity(FVector3f angularVelocity)
{
	if (isSimulatingPhysics && primitiveComponent != nullptr)
	{
		primitiveComponent->SetPhysicsAngularVelocityInDegrees((FVector)angularVelocity);
	}
}

//#endregion Internal stuff

//#region Public interface

/// <summary>Add an incoming state to the stateBuffer on non-owned objects.</summary>
void USmoothSync::addState(SmoothState* state)
{
	if (stateCount > 1 && state->ownerTimestamp <= stateBuffer[0]->ownerTimestamp)
	{
		// State was received out of order, this is ok, we just don't use it to update owner time offset since it is old
	}
	else
	{
		// Store the latest owner time offset
		AddOwnerTimeOffset(state->ownerTimestamp);
	}

	int stateBufferLength = FMath::Max(calculatedStateBufferSize, 30);
	int insertPos = 0;
	if (stateCount > 0)
	{
		// Find where the incoming state goes in the buffer based on ownerTimestamp
		for (; insertPos < stateCount; insertPos++)
		{
			if (stateBuffer[insertPos] == nullptr || state->ownerTimestamp >= stateBuffer[insertPos]->ownerTimestamp)
			{
				break;
			}
		}

		// New state is older than everything and buffer is full, just drop it
		if (insertPos == stateBufferLength)
		{
			UE_LOG(LogTemp, Warning, TEXT("Received very old state. Dropping it. If this happens while changing possession consider enabling 'Sync Ownership Change'"));
			return;
		}

		delete stateBuffer[FMath::Min(stateCount, stateBufferLength - 1)];

		// Shift all states after the insertPos to make room
		for (int i = FMath::Min(stateCount, stateBufferLength - 1); i > insertPos; i--)
		{
			stateBuffer[i] = stateBuffer[i - 1];
		}

		if (!state->wasMovementModeReceived)
		{
			// Use the movement mode from the previous state if this state has no movement mode
			if (insertPos + 1 < stateCount && stateBuffer[insertPos + 1] != nullptr)
			{
				state->movementMode = stateBuffer[insertPos + 1]->movementMode;
			}
			else
			{
				state->movementMode = 0;
			}
		}
		else
		{
			// This state does have a movement mode, so if there are newer states we may need to update their movement mode
			if (insertPos != 0)
			{
				for (int i = insertPos - 1; i >= 0; i--)
				{
					// Only update newer states that didn't receive their own movement mode
					if (!stateBuffer[i]->wasMovementModeReceived)
					{
						stateBuffer[i]->movementMode = state->movementMode;

						if (i == 0)
						{
							// If we change the movement mode of the newest state we need to change targetTempState
							// as well because this is the state extrapolation is using.
							// If we don't update this the movement mode will not be corrected until a new state is received
							targetTempState->movementMode = state->movementMode;
						}
					}
					else
					{
						// As soon as we find a newer state that received a movement mode we can stop
						break;
					}
				}
			}
		}
	}

	// Insert the incoming state into the buffer
	stateBuffer[insertPos] = state;

	// Keep track of how many States are in the buffer.	
	stateCount = FMath::Min(stateCount + 1, stateBufferLength);
}

/// <summary>Stop updating the States of non-owned objects so that the object can be teleported.</summary>
void USmoothSync::stopEasing()
{
	dontEasePosition = true;
	dontEaseRotation = true;
	dontEaseScale = true;
}

/// <summary>Effectively clear the state buffer. Used for teleporting and ownership changes.</summary>
void USmoothSync::clearBuffer()
{
	if (stateBuffer != nullptr)
	{
		for (int i = 0; i < FMath::Max(calculatedStateBufferSize, 30); i++)
		{
			if (stateBuffer[i] != nullptr)
			{
				delete(stateBuffer[i]);
				stateBuffer[i] = nullptr;
			}
		}
	}

	stateCount = 0;
}

/// <summary>
/// Teleport the player so that position will not be interpolated on non-owners.
/// </summary>
/// <remarks>
/// Use teleport() on the owner and the Actor will jump to the current owner's position on non-owners. 
/// </remarks>
void USmoothSync::teleport()
{
	if (!shouldSendTransform())
	{
		UE_LOG(LogTemp, Warning, TEXT("Trying to teleport from an unowned object. You can only teleport from an owned object. Look up Unreal networking object ownership."));
		return;
	}
	latestTeleportedFromPosition = getPosition();
	latestTeleportedFromRotation = getRotation();
	if (realObjectToSync->GetWorld()->GetNetMode() < ENetMode::NM_Client)
	{
		SmoothSyncTeleportServerToClients(getPosition(), getRotation().Euler(), getScale(),
			UGameplayStatics::GetRealTimeSeconds(GetOwner()->GetWorld()));
	}
	else
	{
		SmoothSyncTeleportClientToServer(getPosition(), getRotation().Euler(), getScale(),
			UGameplayStatics::GetRealTimeSeconds(GetOwner()->GetWorld()));
	}
}
/// <summary>
/// Add the teleport State at the correct place in the State buffer.
/// </summary>
void USmoothSync::addTeleportState(SmoothState* teleportState)
{
	int stateBufferLength = FMath::Max(calculatedStateBufferSize, 30);

	// If the teleport State is the newest received State.
	if (stateCount == 0 || teleportState->ownerTimestamp >= stateBuffer[0]->ownerTimestamp)
	{
		// Shift the buffer, deleting the oldest State.
		for (int k = stateBufferLength - 1; k >= 1; k--)
		{
			stateBuffer[k] = stateBuffer[k - 1];
		}
		// Add the new State at the front of the buffer.
		stateBuffer[0] = teleportState;

		// Fix for if the first received State is a teleport.
		if (stateCount == 0)
		{
			SmoothState* newTeleportState = new SmoothState();
			newTeleportState->copyFromState(teleportState);
			delete stateBuffer[1];
			stateBuffer[1] = newTeleportState;
			stateCount = FMath::Min(stateCount + 1, stateBufferLength);
		}
	}
	// Check the rest of the States to see where the teleport State belongs.
	else
	{
		for (int i = stateBufferLength - 2; i >= 0; i--)
		{
			if (stateBuffer[i] == nullptr) continue;

			if (stateBuffer[i]->ownerTimestamp > teleportState->ownerTimestamp)
			{
				delete stateBuffer[stateBufferLength - 1];

				// Shift the buffer from where the teleport State should be and add the new State. 
				for (int j = stateBufferLength - 1; j > i + 1; j--)
				{
					stateBuffer[j] = stateBuffer[j - 1];
				}

				stateBuffer[i + 1] = teleportState;
				break;
			}
		}
	}
	// Keep track of how many States are in the buffer.
	stateCount = FMath::Min(stateCount + 1, stateBufferLength);
}
/// <summary>
/// Forces the SmoothState to be sent on owned objects the next time it goes through Update().
/// </summary>
/// <remarks>
/// The SmoothState will get sent next frame regardless of all limitations.
/// </remarks>
void USmoothSync::forceStateSendNextFrame()
{
	forceStateSend = true;
}

bool USmoothSync::sameVector(FVector3f one, FVector3f two, float threshold)
{
	if (FMath::Abs(one.X - two.X) > threshold) return false;
	if (FMath::Abs(one.Y - two.Y) > threshold) return false;
	if (FMath::Abs(one.Z - two.Z) > threshold) return false;
	return true;
}
/// <summary>
/// Check if position has changed enough.
/// </summary>
/// <remarks>
/// If sendPositionThreshold is 0, returns true if the current position is different than the latest sent position.
/// If sendPositionThreshold is greater than 0, returns true if distance between position and latest sent position is greater 
/// than the sendPositionThreshold.
/// </remarks>
bool USmoothSync::shouldSendPosition()
{
	if (syncPosition != SyncMode::NONE &&
		(forceStateSend ||
			(samePositionSentCount < 4 && restStatePosition != RestState::AT_REST)))
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Check if rotation has changed enough.
/// </summary>
/// <remarks>
/// If sendRotationThreshold is 0, returns true if the current rotation is different from the latest sent rotation.
/// If sendRotationThreshold is greater than 0, returns true if difference (angle) between rotation and latest sent rotation is greater 
/// than the sendRotationThreshold.
/// </remarks>
bool USmoothSync::shouldSendRotation()
{
	if (syncRotation != SyncMode::NONE &&
		(forceStateSend ||
			(sameRotationCount < 4 && restStateRotation != RestState::AT_REST)))
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Check if scale has changed enough.
/// </summary>
/// <remarks>
/// If sendScaleThreshold is 0, returns true if the current scale is different than the latest sent scale.
/// If sendScaleThreshold is greater than 0, returns true if the difference between scale and latest sent scale is greater 
/// than the sendScaleThreshold.
/// </remarks>
bool USmoothSync::shouldSendScale()
{
	if (syncScale != SyncMode::NONE &&
		(forceStateSend ||
			(!sameVector(getScale(), lastScaleWhenStateWasSent, sendScaleThreshold) &&
				(sendScaleThreshold == 0 || FVector3f::Distance(lastScaleWhenStateWasSent, getScale()) > sendScaleThreshold))))
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Check if velocity has changed enough.
/// </summary>
/// <remarks>
/// If sendVelocityThreshold is 0, returns true if the current velocity is different from the latest sent velocity.
/// If sendVelocityThreshold is greater than 0, returns true if difference between velocity and latest sent velocity is greater 
/// than the velocity threshold.
/// </remarks>
bool USmoothSync::shouldSendVelocity()
{
	if (isSimulatingPhysics || characterMovementComponent != nullptr || movementComponent != nullptr)
	{
		if (syncVelocity != SyncMode::NONE &&
			(forceStateSend ||
				(!sameVector(getLinearVelocity(), lastVelocityWhenStateWasSent, sendVelocityThreshold) &&
					restStatePosition != RestState::AT_REST)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Check if angular velocity has changed enough.
/// </summary>
/// <remarks>
/// If sendAngularVelocityThreshold is 0, returns true if the current angular velocity is different from the latest sent angular velocity.
/// If sendAngularVelocityThreshold is greater than 0, returns true if difference between angular velocity and latest sent angular velocity is 
/// greater than the angular velocity threshold.
/// </remarks>
bool USmoothSync::shouldSendAngularVelocity()
{
	if (isSimulatingPhysics)
	{
		if (syncAngularVelocity != SyncMode::NONE &&
			(forceStateSend ||
				(!sameVector(getAngularVelocity(), lastAngularVelocityWhenStateWasSent, sendAngularVelocityThreshold) &&
					restStateRotation != RestState::AT_REST)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Check if we want to sync Movement Mode and if it has changed.
/// </summary>
bool USmoothSync::shouldSendMovementMode()
{
	if (!syncMovementMode) return false;
	if (forceStateSend) return true;
	if (characterMovementComponent == nullptr) return false;

	return latestSentMovementMode != characterMovementComponent->MovementMode;
}

//#region Sync Properties
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingXPosition()
{
	if (syncPosition == SyncMode::XYZ ||
		syncPosition == SyncMode::XY ||
		syncPosition == SyncMode::XZ ||
		syncPosition == SyncMode::X)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingYPosition()
{
	if (syncPosition == SyncMode::XYZ ||
		syncPosition == SyncMode::XY ||
		syncPosition == SyncMode::YZ ||
		syncPosition == SyncMode::Y)
	{
		return true;
	}
	else
	{
		return false;
	}

}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingZPosition()
{
	if (syncPosition == SyncMode::XYZ ||
		syncPosition == SyncMode::XZ ||
		syncPosition == SyncMode::YZ ||
		syncPosition == SyncMode::Z)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingXRotation()
{
	if (syncRotation == SyncMode::XYZ ||
		syncRotation == SyncMode::XY ||
		syncRotation == SyncMode::XZ ||
		syncRotation == SyncMode::X)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingYRotation()
{
	if (syncRotation == SyncMode::XYZ ||
		syncRotation == SyncMode::XY ||
		syncRotation == SyncMode::YZ ||
		syncRotation == SyncMode::Y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingZRotation()
{
	if (syncRotation == SyncMode::XYZ ||
		syncRotation == SyncMode::XZ ||
		syncRotation == SyncMode::YZ ||
		syncRotation == SyncMode::Z)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingXScale()
{
	if (syncScale == SyncMode::XYZ ||
		syncScale == SyncMode::XY ||
		syncScale == SyncMode::XZ ||
		syncScale == SyncMode::X)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingYScale()
{
	if (syncScale == SyncMode::XYZ ||
		syncScale == SyncMode::XY ||
		syncScale == SyncMode::YZ ||
		syncScale == SyncMode::Y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingZScale()
{
	if (syncScale == SyncMode::XYZ ||
		syncScale == SyncMode::XZ ||
		syncScale == SyncMode::YZ ||
		syncScale == SyncMode::Z)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingXVelocity()
{
	if (syncVelocity == SyncMode::XYZ ||
		syncVelocity == SyncMode::XY ||
		syncVelocity == SyncMode::XZ ||
		syncVelocity == SyncMode::X)
	{
		return true;
	}
	else
	{
		return false;
	}

}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingYVelocity()
{
	if (syncVelocity == SyncMode::XYZ ||
		syncVelocity == SyncMode::XY ||
		syncVelocity == SyncMode::YZ ||
		syncVelocity == SyncMode::Y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingZVelocity()
{
	if (syncVelocity == SyncMode::XYZ ||
		syncVelocity == SyncMode::XZ ||
		syncVelocity == SyncMode::YZ ||
		syncVelocity == SyncMode::Z)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingXAngularVelocity()
{
	if (syncAngularVelocity == SyncMode::XYZ ||
		syncAngularVelocity == SyncMode::XY ||
		syncAngularVelocity == SyncMode::XZ ||
		syncAngularVelocity == SyncMode::X)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingYAngularVelocity()
{
	if (syncAngularVelocity == SyncMode::XYZ ||
		syncAngularVelocity == SyncMode::XY ||
		syncAngularVelocity == SyncMode::YZ ||
		syncAngularVelocity == SyncMode::Y)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/// <summary>
/// Determine if should be syncing.
/// </summary>
bool USmoothSync::isSyncingZAngularVelocity()
{
	if (syncAngularVelocity == SyncMode::XYZ ||
		syncAngularVelocity == SyncMode::XZ ||
		syncAngularVelocity == SyncMode::YZ ||
		syncAngularVelocity == SyncMode::Z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

float USmoothSync::GetNetworkSendInterval()
{
	return 1 / sendRate;
}

/// <summary>
/// Adjust owner time based on average difference between local and owner time
/// </summary>
void USmoothSync::adjustOwnerTime()
{
	if (stateBuffer[0] == nullptr) return;
#ifdef TimeSync
	if (enableLagCompensation)
	{
		float timeOffset = 0;
		if (!GetOwner()->GetWorld()->IsServer())
		{
			timeSync->GetServerTimeOffset(timeOffset);
		}
		ownerTime = UGameplayStatics::GetRealTimeSeconds(GetOwner()->GetWorld()) + timeOffset;
	}
	else
	{
		ownerTime = UGameplayStatics::GetRealTimeSeconds(GetOwner()->GetWorld()) + averageOwnerTimeOffset;
	}
#else
	// New owner time is current time plus the average difference between owner time and local time
	ownerTime = UGameplayStatics::GetRealTimeSeconds(GetOwner()->GetWorld()) + averageOwnerTimeOffset;
#endif
}

/// <summary>Keep a list of differences between local and owner time so we can calculate the average</summary>
/// <remarks>
/// We store up to sendRate*timeSmoothing values for averaging.
/// This means regardless of send rate, the average will fully react to any changes
/// within timeSmoothing seconds, since the full list of values will have been replaced by then.
/// </remarks>
void USmoothSync::AddOwnerTimeOffset(float newOwnerTime)
{
	int numValuesToStore = FMath::Max(1.0f, sendRate * timeSmoothing);
	if (ownerTimeOffsets.Num() == numValuesToStore)
	{
		// Remove oldest value
		ownerTimeOffsets.RemoveAt(0, 1, false);
	}

	// Calculate latest difference between local and owner time
	float newTimeOffset = newOwnerTime - UGameplayStatics::GetRealTimeSeconds(GetOwner()->GetWorld());
	// Add the new value
	ownerTimeOffsets.Add(newTimeOffset);

	// Update the average, since it will have changed
	averageOwnerTimeOffset = GetAverageOwnerTimeOffset();
}

/// <summary>Get the average difference between owner and local time</summary>
/// <remarks>
/// Even with 0 latency, the difference from owner time is expected to vary by one owner deltaTime.
/// This is because of aliasing between send rate and Tick().
/// Also the owner's deltaTime can be variable itself, so the amount it can be off due to above is variable
/// Also latency is always changing
/// So better to use a running average than the raw values to smooth things out
/// </remarks>
float USmoothSync::GetAverageOwnerTimeOffset()
{
	float total = 0;
	for (float val : ownerTimeOffsets) total += val;
	return total / ownerTimeOffsets.Num();
}

bool USmoothSync::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	if (RepFlags->bNetInitial)
	{
		forceStateSend = true;
	}

	return Super::ReplicateSubobjects(Channel, Bunch, RepFlags);
}

//#if WITH_EDITOR
//bool USmoothSync::CanEditChange(const UProperty* InProperty) const
//{
//	const bool ParentVal = Super::CanEditChange(InProperty);
//
//	// Can we edit flower color?
//	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(USmoothSync, enableLagCompensation))
//	{
//#ifdef TimeSync
//		return true;
//#else
//		return false;
//#endif
//	}
//
//	return ParentVal;
//}
//#endif
