// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"

#ifdef TimeSync
#include "GameFramework/GameStateBase.h"
#include "TimeSyncGameStateComponentBase.h"
#endif

#include "SmoothSync.generated.h"

class SmoothState;
class NetworkState;

//typedef FVector FVector3f;
//typedef FQuat FQuat4f;

/// <summary>The variables that will be synced.</summary>
UENUM(BlueprintType)
enum class SyncMode : uint8
{
	XYZ, XY, XZ, YZ, X, Y, Z, NONE
};

/// <summary>The extrapolation mode.</summary>
UENUM(BlueprintType)
enum class ExtrapolationMode : uint8
{
	UNLIMITED, LIMITED, NONE
};

/// <summary>The variables that will be synced.</summary>
UENUM(BlueprintType)
enum class RestState : uint8
{
	AT_REST, JUST_STARTED_MOVING, MOVING
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SMOOTHSYNCPLUGIN_API USmoothSync : public UActorComponent
{
	GENERATED_BODY()

private:

	TArray<uint8> sendingCharArray;
	int sendingCharArraySize = 0;
	TArray<uint8> readingCharArray;
	int readingCharArraySize = 0;

	TArray<float> ownerTimeOffsets;
	float averageOwnerTimeOffset = 0;

	int samePositionSentCount = 0;
	int sameRotationSentCount = 0;
	bool wasAttachedLastTick = false;

	/// <summary> Used to know when the owner has changed. Not an identifier. </summary>
	uint8 previousReceivedOwnerInt = 1;

	AController* owningControllerLastFrame = nullptr;

public:

	/// <summary>How much time in the past non-owned objects should be.</summary>
	/// <remarks>
	/// interpolationBackTime is the amount of time in the past the object will be on non-owners.
	/// This is so if you hit a latency spike, you still have a buffer of the interpolation back time of known States 
	/// before you start extrapolating into the unknown.
	///
	/// Increasing will make interpolation more likely to be used,
	/// which means the synced position will be more likely to be an actual position that the owner was at.
	///
	/// Decreasing will make extrapolation more likely to be used,
	/// this will increase reponsiveness, but with any latency spikes that last longer than the interpolationBackTime, 
	/// the position will be less correct to where the player was actually at.
	///
	/// Keep this higher than 1/SendRate to attempt to always interpolate. Keep in mind your send rate may fluctuate
	/// depending on your Unreal NetpdateFrequency settings and NetPriority. 
	///  
	/// Measured in seconds.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important)
	float interpolationBackTime = .1f;

	/// <summary>Enable lag compensation to adjust synced actor's network time using estimated latency.</summary>
	/// <remarks>
	/// Lag compensation will ensure that all synced objects are equally in the past regardless of latency.
	/// Without Lag compensation clients who experience higher latency will appear to be more in the past.
	///
	/// With lag compensation and an interpolation back time of 0 all objects will be at their present position
	/// with no delay. This will cause constant extrapolation though, which is less accurate than interpolation.
	/// This option requires the Time Sync plugin to sync time and measure latency.
	/// </remarks>
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important)
	//	bool enableLagCompensation = false;

	/// <summary>The amount of extrapolation used.</summary>
	/// <remarks>
	/// Extrapolation is going into the unknown based on information we had in the past. Generally, you'll
	/// want extrapolation to help fill in missing information during lag spikes. 
	/// None - Use no extrapolation. 
	/// Limited - Use the settings for extrapolation limits. 
	/// Unlimited - Allow extrapolation forever. 
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Extrapolation)
	ExtrapolationMode extrapolationMode = ExtrapolationMode::LIMITED;

	/// <summary>Whether or not to have an extrapolation time limit.</summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Extrapolation)
	bool useExtrapolationTimeLimit = true;

	/// <summary>How much time into the future a non-owned object is allowed to extrapolate.</summary>
	/// <remarks>
	/// Extrapolating too far tends to cause erratic and non-realistic movement, but a little bit of extrapolation is 
	/// better than none because it keeps things working semi-right during latency spikes.
	///
	/// Measured in seconds.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Extrapolation)
	float extrapolationTimeLimit = 1.0f;

	/// <summary>Whether or not to have an extrapolation distance limit.</summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Extrapolation)
	bool useExtrapolationDistanceLimit = false;

	/// <summary>How much distance into the future a non-owned object is allowed to extrapolate.</summary>
	/// <remarks>
	/// Extrapolating too far tends to cause erratic and non-realistic movement, but a little bit of extrapolation is 
	/// better than none because it keeps things working semi-right during latency spikes.
	/// 
	/// Measured in distance units.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Extrapolation)
	float extrapolationDistanceLimit = 100.0f;

	/// <summary>The position won't send unless one of its Vector values has changed this much.</summary>
	/// <remarks>
	/// Set to 0 to send the position of owned objects if it has changed since the last sent position.
	/// Will not send quicker than SendRate.
	///
	/// If greater than 0, a synced object's position is only sent if its vector position value is off from the last
	/// sent position by more than the threshold. 
	///
	/// Measured in distance units.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float sendPositionThreshold = 0.0f;

	/// <summary>The rotation won't send unless one of its Vector values has changed this much.</summary>
	/// <remarks>
	/// Set to 0 to send the rotation of owned objects if it has changed since the last sent rotation.
	/// Will not send quicker than SendRate.
	///
	/// If greater than 0, a synced object's rotation is only sent if its euler value is off from the last sent rotation
	/// by more than the threshold.
	///
	/// Measured in degrees.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float sendRotationThreshold = 0.0f;

	/// <summary>The scale won't send unless one of its Vector values it changed this much.</summary>
	/// <remarks>
	/// Set to 0 to send the scale of owned objects if it has changed since the last sent scale.
	/// Will not send quicker than SendRate.
	///
	/// If greater than 0, a synced object's scale is only sent if its scale is off from the last sent scale by more 
	/// than the threshold. 
	///
	/// Measured in distance units.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float sendScaleThreshold = 0.0f;

	/// <summary>The velocity won't send unless one of its Vector values changed this much.</summary>
	/// <remarks>
	/// Set to 0 to send the velocity of owned objects if it has changed since the last sent velocity.
	/// Will not send quicker than SendRate.
	///
	/// If greater than 0, a synced object's velocity is only sent if its velocity is off from the last sent velocity
	/// by more than the threshold. 
	///
	/// Measured in velocity units.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float sendVelocityThreshold = 0.0f;

	/// <summary>The angular velocity won't send unless one of its Vector values changed this much.</summary>
	/// <remarks>
	/// Set to 0 to send the angular velocity of owned objects if it has changed since the last sent angular velocity.
	/// Will not send quicker than SendRate.
	///
	/// If greater than 0, a synced object's angular velocity is only sent if its angular velocity is off from the last sent angular velocity
	/// by more than the threshold. 
	///
	/// Measured in radians per second.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float sendAngularVelocityThreshold = 0.0f;

	/// <summary>The position won't be set on non-owned objects unless it changed this much.</summary>
	/// <remarks>
	/// Set to 0 to always update the position of non-owned objects if it has changed, and to use one less distance check per frame if you also have positionSnapThreshold at 0.
	/// If greater than 0, a synced object's position is only updated if it is off from the target position by more than the threshold.
	///
	/// Usually keep this at 0 or really low, at higher numbers it's useful if you are extrapolating into the future and want to stop instantly 
	/// and not have it backtrack to where it currently is on the owner.
	///
	/// Measured in distance units.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float receivedPositionThreshold = 0.0f;

	/// <summary>The rotation won't be set on non-owned objects unless it changed this much.</summary>
	/// <remarks>
	/// Set to 0 to always update the rotation of non-owned objects if it has changed, and to use one less FQuat4f.AngularDistance() check per frame if you also have rotationSnapThreshold at 0.
	/// If greater than 0, a synced object's rotation is only updated if it is off from the target rotation by more than the threshold.
	///
	/// Usually keep this at 0 or really low, at higher numbers it's useful if you are extrapolating into the future and want to stop instantly and 
	/// not have it backtrack to where it currently is on the owner.
	///
	/// Measured in degrees.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float receivedRotationThreshold = 0.0f;

	/// <summary>If a synced object's position is more than positionSnapThreshold units from the target position, it will jump to the target position immediately instead of lerping.</summary>
	/// <remarks>
	/// Set to zero to not use at all and use one less distance check per frame if you also have receivedPositionThreshold at 0.
	///
	/// Measured in distance units.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float positionSnapThreshold = 500;

	/// <summary>If a synced object's rotation is more than rotationSnapThreshold from the target rotation, it will jump to the target rotation immediately instead of lerping.</summary>
	/// <remarks>
	/// Set to zero to not use at all and use one less FQuat4f.AnglularDistance() check per frame if you also have receivedRotationThreshold at 0.
	///
	/// Measured in degrees.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float rotationSnapThreshold = 100;

	/// <summary>If a synced object's scale is more than scaleSnapThreshold units from the target scale, it will jump to the target scale immediately instead of lerping.</summary>
	/// <remarks>
	/// Set to zero to not use at all and use one less distance check per frame.
	///
	/// Measured in distance units.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float scaleSnapThreshold = 3;

	/// <summary>How much to smooth owner time.</summary>
	/// <remarks>
	/// This is how long, in seconds, it takes to adjust the estimated owner time offset to match the latest value from the owner.
	/// Larger values mean smoother movement, but more delay reacting to changes in owner time (usually caused by changing latency).
	/// Smaller values will keep things more accurate but may result in jittering / stuttering due to natural variations in latency.
	/// Set to zero to always use the latest owner time offset with no smoothing at all. 
	/// A value of 0 is not recommended and will definitely result in at least a small amount of stuttering.
	/// Note that this option is not used when latency compensation is enabled. Use the options in Time Sync instead.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important, meta = (ClampMin = "0.0", ClampMax = "5.0", UIMin = "0.0", UIMax = "5.0"))
	float timeSmoothing = 2.0f;

	/// <summary>How fast to lerp the position to the target SmoothState. 0 is never, 1 is instant.</summary>
	/// <remarks>
	/// Lower values mean smoother but maybe sluggish movement.
	/// Higher values mean more responsive but maybe jerky or stuttery movement.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float positionLerpSpeed = .85f;

	/// <summary>How fast to lerp the rotation to the target State. 0 is never, 1 is instant..</summary>
	/// <remarks>
	/// Lower values mean smoother but maybe sluggish movement.
	/// Higher values mean more responsive but maybe jerky or stuttery movement.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float rotationLerpSpeed = .85f;

	/// <summary>How fast to lerp the scale to the target State. 0 is never, 1 is instant.</summary>
	/// <remarks>
	/// Lower values mean smoother but maybe sluggish movement.
	/// Higher values mean more responsive but maybe jerky or stuttery movement.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float scaleLerpSpeed = .85f;

	/// <summary>Position sync mode</summary>
	/// <remarks>
	/// Fine tune how position is synced. 
	/// For objects that don't move, use SyncMode.NONE
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SyncModes)
	SyncMode syncPosition = SyncMode::XYZ;

	/// <summary>Rotation sync mode</summary>
	/// <remarks>
	/// Fine tune how rotation is synced. 
	/// For objects that don't rotate, use SyncMode.NONE
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SyncModes)
	SyncMode syncRotation = SyncMode::XYZ;

	/// <summary>Scale sync mode</summary>
	/// <remarks>
	/// Fine tune how scale is synced. 
	/// For objects that don't scale, use SyncMode.NONE
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SyncModes)
	SyncMode syncScale = SyncMode::XYZ;

	/// <summary>Velocity sync mode</summary>
	/// <remarks>
	/// Fine tune how velocity is synced.
	/// Syncs Primitive (if simulating physics), Movement, or CharacterMovement Components as well as allows for more accurate extrapolation.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SyncModes)
	SyncMode syncVelocity = SyncMode::XYZ;

	/// <summary>Angular velocity sync mode</summary>
	/// <remarks>
	/// Fine tune how angular velocity is synced. 
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SyncModes)
	SyncMode syncAngularVelocity = SyncMode::XYZ;

	///	<summary>Sync Movement Mode (animations)</summary>
	/// <remarks>
	/// Syncs Unreal's Movement Mode (animations) for Characters.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SyncModes)
	bool syncMovementMode = true;

	/// <summary>Compress position floats when sending over the network.</summary>
	/// <remarks>
	/// Convert position floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Compression)
	bool isPositionCompressed = false;

	/// <summary>Compress rotation floats when sending over the network.</summary>
	/// <remarks>
	/// Convert rotation floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Compression)
	bool isRotationCompressed = false;

	/// <summary>Compress scale floats when sending over the network.</summary>
	/// <remarks>
	/// Convert scale floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Compression)
	bool isScaleCompressed = false;

	/// <summary>Compress velocity floats when sending over the network.</summary>
	/// <remarks>
	/// Convert velocity floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Compression)
	bool isVelocityCompressed = false;

	/// <summary>Compress angular velocity floats when sending over the network.</summary>
	/// <remarks>
	/// Convert angular velocity floats sent over the network to Halfs, which use half as much bandwidth but are also half as precise.
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Compression)
	bool isAngularVelocityCompressed = false;

	/// <summary>How many times per second to send network updates.</summary>
	/// <remarks>Keep in mind this can be limited by Unreal's Net Update Frequency.</remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important)
	float sendRate = 30;

	/// <summary>Whether or not to sync origin for Origin Rebasing.</summary>
	/// <remarks>You will need this only if your levels are very large. This requires an extra byte when syncing.</remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important)
	bool isUsingOriginRebasing = false;

	/// <summary>Send the origin with every update. Costs extra but fixes issues with network relevancy.</summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important)
	bool alwaysSendOrigin = false;

	/// <summary>Sync changes in owernship.</summary>
	/// <remarks>
	/// Sends an extra byte with each network state that allows clients to handle ownership changes
	/// </remarks>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Important)
	bool syncOwnershipChange = false;

	/// <summary>Non-owners keep a list of recent States received over the network for interpolating.</summary>
	/// <remarks>Index 0 is the newest received State.</remarks>
	SmoothState** stateBuffer;

	/// <summary>
	/// Uses a State buffer of at least 30 for ease of use, or a buffer size in relation 
	/// to the send rate and how far back in time we want to be. Doubled buffer as estimation for forced SmoothState sends.
	/// </summary>
	int calculatedStateBufferSize = ((int)(sendRate * interpolationBackTime) + 1) * 2;

	/// <summary>The number of States in the stateBuffer</summary>
	int stateCount = 0;

	/// <summary>
	/// Used via stopEasing() to 'teleport' a synced object without unwanted easing.
	/// Useful for player spawning and whatnot. Also used for snapping.
	/// </summary>
	bool dontEasePosition = false;
	/// <summary>
	/// Used via stopEasing() to 'teleport' a synced object without unwanted easing.
	/// Useful for player spawning and whatnot. Also used for snapping.
	/// </summary>
	bool dontEaseScale = false;
	/// <summary>
	/// Used via stopEasing() to 'teleport' a synced object without unwanted easing.
	/// Useful for player spawning and whatnot. Also used for snapping.
	/// </summary>
	bool dontEaseRotation = false;

	/// <summary>Last time the object was teleported.</summary>
	float lastTeleportOwnerTime = 0;

	/// <summary>Last time owner sent a SmoothState.</summary>
	float lastTimeStateWasSent = 0;

	/// <summary>Position owner was at when the last position SmoothState was sent.</summary>
	FVector3f lastPositionWhenStateWasSent = FVector3f::ZeroVector;

	/// <summary>Rotation owner was at when the last rotation SmoothState was sent.</summary>
	FQuat4f lastRotationWhenStateWasSent = FQuat4f::Identity;

	/// <summary>Scale owner was at when the last scale SmoothState was sent.</summary>
	FVector3f lastScaleWhenStateWasSent = FVector3f::OneVector;

	/// <summary>Velocity owner was at when the last velocity SmoothState was sent.</summary>
	FVector3f lastVelocityWhenStateWasSent = FVector3f::ZeroVector;

	/// <summary>Angular velocity owner was at when the last angular velociy SmoothState was sent.</summary>
	FVector3f lastAngularVelocityWhenStateWasSent = FVector3f::ZeroVector;

	/// <summary>Gets assigned to the real object to sync.</summary>
	AActor* realObjectToSync;

	/// <summary>Gets assigned to the movement component on the actor.</summary>
	UMovementComponent* movementComponent;

	/// <summary>Gets assigned to the character movement component on the actor.</summary>
	UCharacterMovementComponent* characterMovementComponent;

	/// <summary>Origin on owner when the last SmoothState was sent.</summary>
	FIntVector lastOriginWhenStateWasSent = FIntVector::ZeroValue;

	/// <summary>Latest origin received from owner</summary>
	FIntVector lastOriginWhenStateWasReceived = FIntVector::ZeroValue;

	/// <summary>Gets assigned to the real transform to sync. Use SetSceneComponentToSync() method to set it up. If
	/// this variable is not assigned, SmoothSync will sync the actor.</summary>
	UPROPERTY(BlueprintReadWrite, Category = Important)
	USceneComponent* realComponentToSync;

	/// <summary>SmoothState when extrapolation ended.</summary>
	SmoothState* extrapolationEndState;

	/// <summary>Time when extrapolation ended.</summary>
	float extrapolationStopTime;

	/// <summary>Gets set to true in order to force the state to be sent next frame on owners.</summary>
	bool forceStateSend = false;

	/// <summary>Variable we set at the beginning of Update so we only need to do the checks once a frame.</summary>
	bool sendPosition = true;
	/// <summary>Variable we set at the beginning of Update so we only need to do the checks once a frame.</summary>
	bool sendRotation = true;
	/// <summary>Variable we set at the beginning of Update so we only need to do the checks once a frame.</summary>
	bool sendScale = true;
	/// <summary>Variable we set at the beginning of Update so we only need to do the checks once a frame.</summary>
	bool sendVelocity = true;
	/// <summary>Variable we set at the beginning of Update so we only need to do the checks once a frame.</summary>
	bool sendAngularVelocity = true;
	/// <summary>Variable we set at the beginning of Update so we only need to do the checks once a frame.</summary>
	bool sendMovementMode = true;
	/// <summary>Normally movement mode is only sent when it changes, but networking in unrealiable, so you may get better results sending it all the time.</summary>
	bool alwaysSendMovementMode = false;
	/// <summary>Used to turn Smooth Sync off and on.</summary>
	bool isBeingUsed = true;

	/// <summary>
	/// The time that the non-owner uses to playback the Transform of the owner. This is sent from the owner to non-owners.
	/// This is exposed so you can line up things like animations with the exact positioning. You could send over what animation you want in your own RPC along with 
	/// UGameplayStatics::GetRealTimeSeconds(smoothSyncScript->GetOwner()->GetWorld()) and then have the animation happen when this variable has reached that time on the non-owners.
	/// </summary>
	UPROPERTY(BlueprintReadOnly, Category = Important)
	float interpolationTime = 0;

	/// <summary>
	/// The last owner time received over the network
	/// </summary>
	float ownerTime = 0;

	/// <summary>
	/// The realTimeSinceStartup when we received the last owner time.
	/// </summary>
	float lastTimeOwnerTimeWasSet = 0;

	/// <summary>
	/// SmoothState we fill up to better organize the data before sending it out.
	/// </summary>
	SmoothState* sendingTempState;

	/// <summary>
	/// Gets filled each frame with a SmoothState to move towards
	/// </summary>
	SmoothState* targetTempState;

	/// <summary> Used to check if low FPS causes us to skip a teleport State. </summary>
	SmoothState* latestEndStateUsed;

	/// <summary> Used to check if we should be sending a "JustStartedMoving" State. If we are teleporting, don't send one. </summary>
	FVector3f latestTeleportedFromPosition;

	/// <summary> Used to check if we should be sending a "JustStartedMoving" State. If we are teleporting, don't send one. </summary>
	FQuat4f latestTeleportedFromRotation;

	/// <summary>
	/// Reference to the Primitive Component.
	/// </summary>
	UPrimitiveComponent* primitiveComponent;

	uint8 latestSentMovementMode = 0;

	TMap<AActor*, bool> wasRelevant;
	float approximateNetworkTimeOnOwner = 0;
	int receivedStatesCounter = 0;
	float updatedDeltaTime = 0;
	bool isSimulatingPhysics = false;

	RestState restStatePosition = RestState::MOVING;
	RestState restStateRotation = RestState::MOVING;

	/// <summary>Counts up for each FixedUpdate() that position is the same until the atRestThresholdCount.</summary>
	float samePositionCount = 0;
	/// <summary>Counts up for each FixedUpdate() that rotation is the same until the atRestThresholdCount.</summary>
	float sameRotationCount = 0;
	/// <summary>Used to tell whether the object is at positional rest or not.</summary>
	bool changedPositionLastFrame = false;
	/// <summary>Used to tell whether the object is at rotational rest or not.</summary>
	bool changedRotationLastFrame = false;
	/// <summary>Is considered at rest if at same position for this many FixedUpdate()s.</summary>
	float atRestThresholdCount = .5f;

	bool triedToExtrapolateTooFar = false;
	bool extrapolatedLastFrame = false;
	float timeSpentExtrapolating = 0;
	/// <summary>Gets set to true when position is the same for two frames in order to tell non-owners to stop extrapolating position.</summary>
	bool sendAtPositionalRestMessage = false;
	/// <summary>Gets set to true when rotation is the same for two frames in order to tell non-owners to stop extrapolating rotation.</summary>
	bool sendAtRotationalRestMessage = false;
	FVector3f positionLastFrame = FVector3f::ZeroVector;
	FIntVector originLastFrame = FIntVector::ZeroValue;
	FQuat4f rotationLastFrame = FQuat4f::Identity;
	FVector3f linearVelocityLastFrame = FVector3f::ZeroVector;
	FVector3f angularVelocityLastFrame = FVector3f::ZeroVector;
	FVector3f latestReceivedVelocity;
	FVector3f latestReceivedAngularVelocity;

	/// <summary>Actor will come to positional rest if it stops moving by this amount. Used to smooth out stops and starts.</summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float atRestPositionThreshold = .05f;

	/// <summary>Actor will come to rotational rest if it stops rotating by this amount. Used to smooth out stops and starts.</summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Thresholds)
	float atRestRotationThreshold = .1f;

	/// <summary> Used to know when the owner has changed. Not an identifier. Only sent from Server. </summary>
	uint8 ownerChangeIndicator = 1;

#ifdef TimeSync
	UTimeSyncGameStateComponentBase* timeSync = nullptr;
#endif

	/// <summary>
	/// Hardcoded information to determine rotation syncing.
	/// </summary>
	const unsigned char positionMask = 1;           // 0000_0001
	/// <summary>
	/// Hardcoded information to determine rotation syncing.
	/// </summary>
	const unsigned char rotationMask = 2;           // 0000_0010
	/// <summary>
	/// Hardcoded information to determine scale syncing.
	/// </summary>
	const unsigned char scaleMask = 4;              // 0000_0100
	/// <summary>
	/// Hardcoded information to determine velocity syncing.
	/// </summary>
	const unsigned char velocityMask = 8;           // 0000_1000
	/// <summary>
	/// Hardcoded information to determine angular velocity syncing.
	/// </summary>
	const unsigned char angularVelocityMask = 16;   // 0001_0000
	/// <summary>
	/// Hardcoded information to determine if MovementMode has changed.
	/// </summary>
	const unsigned char movementModeMask = 32;      // 0010_0000
	/// <summary>
	/// Hardcoded information to determine if at positional rest.
	/// </summary>
	const unsigned char atPositionalRestMask = 64;  // 0100_0000
	/// <summary>
	/// Hardcoded information to determine if at rotational rest.
	/// </summary>
	const unsigned char atRotationalRestMask = 128; // 1000_0000
	/// <summary>
	/// Hardcoded information to determine origin rebasing
	/// </summary>
	const unsigned char originRebaseMask = 1;       // 0000_0001

	bool ShouldCleanUp = false;
	bool IsTicking = false;

private:

public:
	/// Sets default values for this component's properties
	USmoothSync();

	void CleanUp();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	void checkIfOwnerHasChanged(SmoothState* newState);
	void applyInterpolationOrExtrapolation();
	void interpolate(float interpolationTimeLocal, SmoothState* targetState);
	bool extrapolate(float interpolationTimeLocal, SmoothState* targetState, bool& shouldSetPosition);
	void addState(SmoothState* state);
	void addTeleportState(SmoothState* state);
	void setPosition(FVector3f position, bool teleport);
	void setRotation(const FQuat4f& rotation, bool teleport);
	void setScale(FVector3f scale);
	void setLinearVelocity(FVector3f position);
	void setAngularVelocity(FVector3f position);
	FVector3f getPosition();
	FQuat4f getRotation();
	FVector3f getScale();
	FVector3f getLinearVelocity();
	FVector3f getAngularVelocity();
	float GetNetworkSendInterval();
	bool shouldSendTransform();
	bool shouldSendPosition();
	bool shouldSendRotation();
	bool shouldSendScale();
	bool shouldSendVelocity();
	bool shouldSendAngularVelocity();
	bool shouldSendMovementMode();
	bool isSyncingXPosition();
	bool isSyncingYPosition();
	bool isSyncingZPosition();
	bool isSyncingXRotation();
	bool isSyncingYRotation();
	bool isSyncingZRotation();
	bool isSyncingXVelocity();
	bool isSyncingYVelocity();
	bool isSyncingZVelocity();
	bool isSyncingXScale();
	bool isSyncingYScale();
	bool isSyncingZScale();
	bool isSyncingXAngularVelocity();
	bool isSyncingYAngularVelocity();
	bool isSyncingZAngularVelocity();

	/// Clear the state buffer. You will call this on all unowned Actor instances on ownership changes.
	UFUNCTION(BlueprintCallable, Category = "SmoothSync")
	void clearBuffer();

	void stopEasing();

	/// Teleport the player so that position will not be interpolated on non-owners. Use teleport() on the owner and 
	/// the Actor will jump to the current owner's position on non-owners. 
	UFUNCTION(BlueprintCallable, Category = "SmoothSync")
	void teleport();

	/// Used to turn Smooth Sync on and off. True to enable Smooth Sync. False to disable Smooth Sync.
	///	Will automatically send RPCs across the network. Is meant to be called on the owned version of the Actor.
	UFUNCTION(BlueprintCallable, Category = "SmoothSync")
	void enableSmoothSync(bool enable);

	/// Forces the SmoothState (Transform) to be sent on owned objects the next time it goes through TickComponent(). 
	/// The SmoothState (Transform) will get sent next frame regardless of all limitations.
	UFUNCTION(BlueprintCallable, Category = "SmoothSync")
	void forceStateSendNextFrame();

	/// Used to set the transform that you want to sync on this SmoothSync. If this is not called, SmoothSync will sync the actor. 
	/// Must have one SmoothSync for each Transform that you want to sync. 
	UFUNCTION(BlueprintCallable, Category = "SmoothSync")
	void setSceneComponentToSync(USceneComponent* theComponent);

	void internalEnableSmoothSync(bool enable);
	void resetFlags();
	void sendState(SmoothState* stateToSend = nullptr);
	bool sameVector(FVector3f one, FVector3f two, float threshold);

	UFUNCTION(NetMulticast, unreliable, WithValidation)
	void ServerSendsTransformToEveryone(const TArray<uint8>& value);
	UFUNCTION(Server, unreliable, WithValidation)
	void ClientSendsTransformToServer(const TArray<uint8>& value);

	UFUNCTION(NetMulticast, unreliable, WithValidation)
	void SmoothSyncEnableServerToClients(bool enable);
	UFUNCTION(Server, unreliable, WithValidation)
	void SmoothSyncEnableClientToServer(bool enable);
	UFUNCTION(NetMulticast, reliable, WithValidation)
	void SmoothSyncTeleportServerToClients(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime);
	UFUNCTION(Server, reliable, WithValidation)
	void SmoothSyncTeleportClientToServer(FVector3f position, FVector3f rotation, FVector3f scale, float tempOwnerTime);


	template <class T>
	void copyToBuffer(T thing);
	template <class T>
	void readFromBuffer(T* thing);

	void SerializeState(SmoothState* sendingState);
	char encodeSyncInformation(bool sendPositionFlag, bool sendRotationFlag, bool sendScaleFlag, bool sendVelocityFlag, bool sendAngularVelocityFlag, bool atPositionalRestFlag, bool atRotationalRestFlag, bool sendMovementModeFlag);
	bool shouldDeserializePosition(char syncInformation);
	bool shouldDeserializeRotation(char syncInformation);
	bool shouldDeserializeScale(char syncInformation);
	bool shouldDeserializeVelocity(char syncInformation);
	bool shouldDeserializeAngularVelocity(char syncInformation);
	bool shouldDeserializeMovementMode(char syncInformation);
	bool deserializePositionalRestFlag(char syncInformation);
	bool deserializeRotationalRestFlag(char syncInformation);

	void ResetAtRestState();
	AController* GetOwningController();

	void shouldTeleport(SmoothState* start, SmoothState* end, float interpolationTimeLocal, float* t);

	/// <summary>
	/// Adjust estimated owner time based on average difference between local and owner time
	/// </summary>
	void adjustOwnerTime();

	/// <summary>Get the average difference between owner and local time</summary>
	/// <remarks>
	/// Even with 0 latency, the difference from owner time is expected to vary by one owner deltaTime.
	/// This is because of aliasing between send rate and Tick().
	/// Also the owner's deltaTime can be variable itself, so the amount it can be off due to above is variable
	/// Also latency can be jittery
	/// So better to use a running average than the raw values to smooth things out
	/// </remarks>
	float GetAverageOwnerTimeOffset();

	/// <summary>Keep a list of differences between local and owner time so we can calculate the average</summary>
	/// <remarks>
	/// We store up to sendRate values for averaging.
	/// This means regardless of send rate, the average will fully react to any changes
	/// within one second, since the full list of values will have been replaced by then.
	/// </remarks>
	void AddOwnerTimeOffset(float newOwnerTime);

	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;

protected:

	virtual void BeginPlay() override;
#if WITH_EDITOR
	//virtual bool CanEditChange(const UProperty* InProperty) const override;
#endif
};
