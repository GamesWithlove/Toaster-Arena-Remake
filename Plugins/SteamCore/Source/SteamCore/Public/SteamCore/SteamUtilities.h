/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "TextureResource.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sound/SoundWaveProcedural.h"
#include "SteamCore/SteamTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamInventory/SteamInventoryTypes.h"
#include "Misc/EngineVersionComparison.h"
#include "SteamUtilities.generated.h"

class UServerFilter;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamMessage, ESteamMessageType, Type, const FString&, Message);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnHTTPResponse, const FString&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnControllerChangedCallback, bool, bIsConnected, int32, UserId);

UCLASS()
class STEAMCORE_API USteamCoreVoice : public USoundWaveProcedural
{
	GENERATED_BODY()
public:
	USteamCoreVoice(const FObjectInitializer& ObjectInitializer);
public:
	UFUNCTION(BlueprintCallable, Category = "SteamCoreVoice")
	void AddAudioBuffer(const TArray<uint8>& Buffer);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static void DestroySteamCoreVoice(USteamCoreVoice* OBJ);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static USteamCoreVoice* ConstructSteamCoreVoice(int32 AudioSampleRate = 24000);
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAsyncActionListenForControllerChange
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreAsyncActionListenForControllerChange : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnControllerChangedCallback OnControllerChanged;
public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", BlueprintInternalUseOnly="true"), Category = "SteamCore|Utilities")
	static USteamCoreAsyncActionListenForControllerChange* ListenForControllerChange(UObject* WorldContextObject);
public:
	UFUNCTION()
	void HandleCallback(bool bIsConnected, int32 PlatformUserId, int32 UserId);

	virtual void Activate() override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam Utilities Class
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

static FORCEINLINE UTexture2D* GetSteamTexture(const int ImageData)
{
	UTexture2D* Texture = nullptr;

	uint32 Width = 0;
	uint32 Height = 0;

#if ENABLE_STEAMCORE
	SteamUtils()->GetImageSize(ImageData, &Width, &Height);

	if (Width > 0 && Height > 0)
	{
		Texture = UTexture2D::CreateTransient(Width, Height, PF_R8G8B8A8);

		uint8* RGBA = new uint8[Width * Height * 4];

		SteamUtils()->GetImageRGBA(ImageData, RGBA, 4 * Height * Width);

#if UE_VERSION_OLDER_THAN(5,0,0)
		uint8* MipData = static_cast<uint8*>(Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE));
#else
		uint8* MipData = static_cast<uint8*>(Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE));
#endif
		FMemory::Memcpy(MipData, RGBA, Height * Width * 4);

#if UE_VERSION_OLDER_THAN(5,0,0)
		Texture->PlatformData->Mips[0].BulkData.Unlock();
#else
		Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
#endif
		Texture->NeverStream = true;
		Texture->UpdateResource();

		delete[] RGBA;
	}
#endif

	return Texture;
}

UENUM(BlueprintType)
enum class ESteamCoreValid : uint8
{
	Valid,
	NotValid
};

UENUM(BlueprintType)
enum class ESteamCoreIdentical : uint8
{
	Identical,
	NotIdentical
};

UCLASS(abstract)
class STEAMCORE_API USteamUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Native Make Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamID MakeSteamID(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamGameID MakeSteamGameID(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FPublishedFileID MakePublishedFileID(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamUGCHandle MakeUGCHandle(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamTicketHandle MakeTicketHandle(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSetting MakeBool(const bool bValue)
	{
		return FSteamSessionSetting(bValue);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSetting MakeString(const FString Value)
	{
		return FSteamSessionSetting(Value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSetting MakeInteger(const int32 Value)
	{
		return FSteamSessionSetting(Value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSearchSetting MakeSearchBool(const bool bValue)
	{
		return FSteamSessionSearchSetting(bValue);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSearchSetting MakeSearchString(const FString Value)
	{
		return FSteamSessionSearchSetting(Value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSearchSetting MakeSearchInteger(const ESteamComparisonOp ComparisonOperator, const int32 Value)
	{
		return FSteamSessionSearchSetting(ComparisonOperator, Value);
	};

	/*
	* Function for getting a Bool attribute from session settings
	* the function will return false if the string was not found or is not a bool
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool GetBool(FSteamSessionSetting Settings, FString& Key, bool& OutValue)
	{
		Key.Empty();

		if (Settings.m_Data.IsType<bool>())
		{
			Key = Settings.m_Key;
			OutValue = Settings.m_Data.Get<bool>();

			return true;
		}

		return false;
	};

	/*
	* Function for getting a Integer attribute from session settings
	* the function will return false if the string was not found or is not a integer
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool GetInteger(FSteamSessionSetting Settings, FString& Key, int32& OutValue)
	{
		Key.Empty();

		if (Settings.m_Data.IsType<int32>())
		{
			Key = Settings.m_Key;
			OutValue = Settings.m_Data.Get<int32>();

			return true;
		}

		return false;
	};

	/*
	* Function for getting a String attribute from session settings
	* the function will return false if the string was not found or is not a string
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool GetString(FSteamSessionSetting Settings, FString& Key, FString& OutValue)
	{
		Key.Empty();

		if (Settings.m_Data.IsType<FString>())
		{
			Key = Settings.m_Key;
			OutValue = Settings.m_Data.Get<FString>();

			return true;
		}

		return false; 
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static ESteamAttributeType GetType(FSteamSessionSetting Settings)
	{
		ESteamAttributeType Result = ESteamAttributeType::NOT_SET;

		if (Settings.m_Data.IsType<int32>())
		{
			Result = ESteamAttributeType::INTEGER;
		}
		else if (Settings.m_Data.IsType<FString>())
		{
			Result = ESteamAttributeType::STRING;
		}
		else if (Settings.m_Data.IsType<bool>())
		{
			Result = ESteamAttributeType::BOOL;
		}

		return Result;
	};

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Native Break Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakSteamID(FSteamID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakSteamGameID(FSteamGameID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakPublishedFileID(FPublishedFileID FileID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakUGCHandle(FSteamUGCHandle Handle);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle Handle);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakTicketHandle(FSteamTicketHandle Handle);

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Is Valid
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool IsValid(FSteamID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Is Valid"))
	static bool IsPublishedFileIDValid(FPublishedFileID PublishedFileId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsPublishedFileIDValid_Exec(const FPublishedFileID Handle, ESteamCoreValid& Result) { Result = Handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsSteamIDValid_Exec(const FSteamID SteamID, ESteamCoreValid& Result) { Result = SteamID.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
	static bool IsGameIDValid(const FSteamGameID GameID) { return GameID.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsGameIDValid_Exec(const FSteamGameID GameID, ESteamCoreValid& Result) { Result = GameID.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
	static bool IsUGCHandleValid(const FSteamUGCHandle Handle) { return Handle.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsUGCHandleValid_Exec(const FSteamUGCHandle Handle, ESteamCoreValid& Result) { Result = Handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
	static bool IsSteamTicketHandleValid(const FSteamTicketHandle Handle) { return Handle.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsSteamTicketHandleValid_Exec(const FSteamTicketHandle Handle, ESteamCoreValid& Result) { Result = Handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
	static bool IsSteamInventoryUpdateHandleValid(const FSteamInventoryUpdateHandle Handle) { return Handle.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsSteamInventoryUpdateHandleValid_Exec(const FSteamInventoryUpdateHandle Handle, ESteamCoreValid& Result) { Result = Handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Equal
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
	static bool Equal(FSteamID A, FSteamID B);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "Result"))
	static void Equal_Exec(FSteamID A, const FSteamID b, ESteamCoreIdentical& Result) { Result = A == b ? ESteamCoreIdentical::Identical : ESteamCoreIdentical::NotIdentical; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "!=", Keywords = "not equal != not identical"))
	static bool NotEqual(FSteamID A, FSteamID B);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
	static bool PublishedFileID_Equals(FPublishedFileID A, FPublishedFileID B);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "Result"))
	static void PublishedFileID_Equals_Exec(FPublishedFileID A, FPublishedFileID B, ESteamCoreIdentical& Result) { Result = A == B ? ESteamCoreIdentical::Identical : ESteamCoreIdentical::NotIdentical; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "!=", Keywords = "not equal != not identical"))
	static bool PublishedFileID_NotEquals(FPublishedFileID A, FPublishedFileID B);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
	static bool SteamItemInstanceID_Equals(struct FSteamItemInstanceID A, struct FSteamItemInstanceID B);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "Result"))
	static void SteamItemInstanceID_Equals_Exec(struct FSteamItemInstanceID A, struct FSteamItemInstanceID B, ESteamCoreIdentical& Result);

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Utility Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool GetGameEngineInitialized();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static ESteamAccountType GetAccountType(FSteamID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool IsLobby(FSteamID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool IsSteamAvailable();

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (WorldContext="WorldContextObject"))
	static UServerFilter* ConstructServerFilter(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static FDateTime FromUnixTimestamp(const FString Timestamp)
	{
		return FDateTime::FromUnixTimestamp(FCString::Atoi64(*Timestamp));
	}

	// Returns a hashed/encrypted version of the string
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static FString EncryptString(FString String);

	// Try getting our public ip
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static void GetPublicIp(const FOnHTTPResponse& Callback);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static FSteamID GetSteamIdFromPlayerState(APlayerState* PlayerState);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "String to Bytes"))
	static TArray<uint8> BP_StringToBytes(FString String);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Bytes to String"))
	static FString BP_BytesToString(TArray<uint8> Array);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static bool IsSteamServerInitialized();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Hex to Bytes"))
	static TArray<uint8> K2_HexToBytes(FString String);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Hex to String"))
	static FString K2_HexToString(TArray<uint8> Array);
	
	/*
	 * Reads a binary file and returns an array of uint8
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static TArray<uint8> ReadFileToBytes(const FString& AbsoluteFilePath);

	/*
	 * Writes an array of uint8 to a binary file
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static bool WriteBytesToFile(bool bOverwriteIfExists, const FString& AbsoluteFilePath, const TArray<uint8>& DataBuffer);

	/**
	 * Determine if the player is registered in the specified session
	 *
	 * @return true if the player is registered in the session
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Is Player In Session"))
	static bool K2_IsPlayerInSession(int32 LocalUserNum);

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Ping Utilities
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	/**
	 * Returns if this application is set up to use the Steam P2P Relay Network
	 * for communication.
	 *
	 * Uses OnlineSubsystemSteam.bAllowP2PPacketRelay
	 *
	 * @return true if relays are enabled for P2P connections.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
	static bool IsUsingP2PRelays();

	/**
	 * Returns the P2P relay ping information for the current machine. This information can be
	 * serialized over the network and used to calculate the ping data between a client and a host.
	 *
	 * @return relay information blob stored as a string for relaying over the network.
	 *         If an error occurred, the return is an empty string.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
	static FHostPingData GetHostPingData();

	/**
	 * Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.
	 *
	 * @param HostPingStr The relay information blob we got from the host. This information
	 *                    should be directly serialized over the network and not tampered with.
	 *
	 * @return The ping value to the given host if it can be calculated, otherwise -1 on error.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
	static int32 GetPingFromHostData(const FHostPingData& Data);

	/**
	* An informative member that allows us to check if we are recalculating our ping
	* information over the Valve network. Data is additively modified during recalculation
	* such that we do not need to block on this function returning false before using
	* ping data.
	*
	* @return true if we're recalculating our ping within the Valve relay network.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities|Ping")
	static bool IsRecalculatingPing();

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static void ListenForSteamMessages(const FOnSteamMessage& Callback);

	static void InvokeSteamMessage(ESteamMessageType Type, const FString& Message);
public:
	static TArray<FOnSteamMessage> s_SteamMessageListeners;
};
