/**
* Copyright (C) 2017-2022 eelDev AB
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once 

#include "CoreMinimal.h"
#include "SteamCore/Steam.h"
#include "OnlineSubsystemNames.h"
#include "OnlineSubsystemTypes.h"
#include <Misc/TVariant.h>
#include <FindSessionsCallbackProxy.h>
#include "SteamTypes.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSteamCore, Log, All);

#define LogDebug(format, ...) UE_LOG(LogSteamCore, Log, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVerbose(format, ...) UE_LOG(LogSteamCore, Verbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVeryVerbose(format, ...) UE_LOG(LogSteamCore, VeryVerbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogError(format, ...) UE_LOG(LogSteamCore, Error, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogFatal(format, ...) UE_LOG(LogSteamCore, Fatal, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogWarning(format, ...) UE_LOG(LogSteamCore, Warning, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Global enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamAttributeType : uint8
{
	NOT_SET,
	INTEGER,
	BOOL,
	STRING
};

UENUM(BlueprintType)
enum class ESteamComparisonOp : uint8
{
	Equals,
	NotEquals,
	GreaterThan,
	GreaterThanEquals,
	LessThan,
	LessThanEquals,
	Near,
	In,
	NotIn
};

UENUM(BlueprintType)
enum class ESteamMessageType : uint8
{
	ENotification = 0,
	EMessage,
	EWarning
};

UENUM(BlueprintType)
enum class EOnlineComparison : uint8
{
	Equals = 0,
	NotEquals,
	GreaterThan,
	GreaterThanEquals,
	LessThan,
	LessThanEquals
};

UENUM(BlueprintType)
enum class ESteamDenyReason : uint8
{
	Invalid = 0,
	InvalidVersion = 1,
	Generic = 2,
	NotLoggedOn = 3,
	NoLicense = 4,
	Cheater = 5,
	LoggedInElseWhere = 6,
	UnknownText = 7,
	IncompatibleAnticheat = 8,
	MemoryCorruption = 9,
	IncompatibleSoftware = 10,
	SteamConnectionLost = 11,
	SteamConnectionError = 12,
	SteamResponseTimedOut = 13,
	SteamValidationStalled = 14,
	SteamOwnerLeftGuestUser = 15
};

UENUM(BlueprintType)
enum class ESteamAuthSessionResponse : uint8
{
	OK = 0,
	UserNotConnectedToSteam = 1,
	NoLicenseOrExpired = 2,
	VACBanned = 3,
	LoggedInElseWhere = 4,
	VACCheckTimedOut = 5,
	AuthTicketCanceled = 6,
	AuthTicketInvalidAlreadyUsed = 7,
	AuthTicketInvalid = 8,
	PublisherIssuedBan = 9
};

UENUM(BlueprintType)
enum class ESteamUserHasLicenseForAppResult : uint8
{
	HasLicense = 0,
	DoesNotHaveLicense = 1,
	NoAuth = 2
};

UENUM(BlueprintType)
enum class ESteamBeginAuthSessionResult : uint8
{
	OK = 0,
	InvalidTicket = 1,
	DuplicateRequest = 2,
	InvalidVersion = 3,
	GameMismatch = 4,
	ExpiredTicket = 5
};

UENUM(BlueprintType)
enum class ESteamResult : uint8
{
	None = 0,
	OK = 1,
	// success
	Fail = 2,
	// generic failure 
	NoConnection = 3,
	// no/failed network connection
	sultNoConnectionRetry = 4,
	// OBSOLETE - removed
	InvalidPassword = 5,
	// password/ticket is invalid
	LoggedInElsewhere = 6,
	// same user logged in elsewhere
	InvalidProtocolVer = 7,
	// protocol version is incorrect
	InvalidParam = 8,
	// a parameter is incorrect
	FileNotFound = 9,
	// file was not found
	Busy = 10,
	// called method busy - action not taken
	InvalidState = 11,
	// called object was in an invalid state
	InvalidName = 12,
	// name is invalid
	InvalidEmail = 13,
	// email is invalid
	DuplicateName = 14,
	// name is not unique
	AccessDenied = 15,
	// access is denied
	Timeout = 16,
	// operation timed out
	Banned = 17,
	// VAC2 banned
	AccountNotFound = 18,
	// account not found
	InvalidSteamID = 19,
	// steamID is invalid
	ServiceUnavailable = 20,
	// The requested service is currently unavailable
	NotLoggedOn = 21,
	// The user is not logged on
	Pending = 22,
	// Request is pending (may be in process, or waiting on third party)
	EncryptionFailure = 23,
	// Encryption or Decryption failed
	InsufficientPrivilege = 24,
	// Insufficient privilege
	LimitExceeded = 25,
	// Too much of a good thing
	Revoked = 26,
	// Access has been revoked (used for revoked guest passes)
	Expired = 27,
	// License/Guest pass the user is trying to access is expired
	AlreadyRedeemed = 28,
	// Guest pass has already been redeemed by account, cannot be acked again
	DuplicateRequest = 29,
	// The request is a duplicate and the action has already occurred in the past, ignored this time
	AlreadyOwned = 30,
	// All the games in this guest pass redemption request are already owned by the user
	IPNotFound = 31,
	// IP address not found
	PersistFailed = 32,
	// failed to write change to the data store
	LockingFailed = 33,
	// failed to acquire access lock for this operation
	LogonSessionReplaced = 34,
	ConnectFailed = 35,
	HandshakeFailed = 36,
	IOFailure = 37,
	RemoteDisconnect = 38,
	ShoppingCartNotFound = 39,
	// failed to find the shopping cart requested
	Blocked = 40,
	// a user didn't allow it
	Ignored = 41,
	// target is ignoring sender
	NoMatch = 42,
	// nothing matching the request found
	AccountDisabled = 43,
	ServiceReadOnly = 44,
	// this service is not accepting content changes right now
	AccountNotFeatured = 45,
	// account doesn't have value, so this feature isn't available
	AdministratorOK = 46,
	// allowed to take this action, but only because requester is admin
	ContentVersion = 47,
	// A Version mismatch in content transmitted within the Steam protocol.
	TryAnotherCM = 48,
	// The current CM can't service the user making a request, user should try another.
	PasswordRequiredToKickSession = 49,
	// You are already logged in elsewhere, this cached credential login has failed.
	AlreadyLoggedInElsewhere = 50,
	// You are already logged in elsewhere, you must wait
	Suspended = 51,
	// Long running operation (content download) suspended/paused
	Cancelled = 52,
	// Operation canceled (typically by user: content download)
	DataCorruption = 53,
	// Operation canceled because data is ill formed or unrecoverable
	DiskFull = 54,
	// Operation canceled - not enough disk space.
	RemoteCallFailed = 55,
	// an remote call or IPC call failed
	PasswordUnset = 56,
	// Password could not be verified as it's unset server side
	ExternalAccountUnlinked = 57,
	// External account (PSN, Facebook...) is not linked to a Steam account
	PSNTicketInvalid = 58,
	// PSN ticket was invalid
	ExternalAccountAlreadyLinked = 59,
	// External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first
	RemoteFileConflict = 60,
	// The sync cannot resume due to a conflict between the local and remote files
	IllegalPassword = 61,
	// The requested new password is not legal
	SameAsPreviousValue = 62,
	// new value is the same as the old one ( secret question and answer )
	AccountLogonDenied = 63,
	// account login denied due to 2nd factor authentication failure
	CannotUseOldPassword = 64,
	// The requested new password is not legal
	InvalidLoginAuthCode = 65,
	// account login denied due to auth code invalid
	AccountLogonDeniedNoMail = 66,
	// account login denied due to 2nd factor auth failure - and no mail has been sent
	HardwareNotCapableOfIPT = 67,
	// 
	IPTInitError = 68,
	// 
	ParentalControlRestricted = 69,
	// operation failed due to parental control restrictions for current user
	FacebookQueryError = 70,
	// Facebook query returned an error
	ExpiredLoginAuthCode = 71,
	// account login denied due to auth code expired
	IPLoginRestrictionFailed = 72,
	AccountLockedDown = 73,
	AccountLogonDeniedVerifiedEmailRequired = 74,
	NoMatchingURL = 75,
	BadResponse = 76,
	// parse failure, missing field, etc.
	RequirePasswordReEntry = 77,
	// The user cannot complete the action until they re-enter their password
	ValueOutOfRange = 78,
	// the value entered is outside the acceptable range
	UnexpectedError = 79,
	// something happened that we didn't expect to ever happen
	Disabled = 80,
	// The requested service has been configured to be unavailable
	InvalidCEGSubmission = 81,
	// The set of files submitted to the CEG server are not valid !
	RestrictedDevice = 82,
	// The device being used is not allowed to perform this action
	RegionLocked = 83,
	// The action could not be complete because it is region restricted
	RateLimitExceeded = 84,
	// Temporary rate limit exceeded, try again later, different from k_EResultLimitExceeded which may be permanent
	AccountLoginDeniedNeedTwoFactor = 85,
	// Need two-factor code to login
	ItemDeleted = 86,
	// The thing we're trying to access has been deleted
	AccountLoginDeniedThrottle = 87,
	// login attempt failed, try to throttle response to possible attacker
	TwoFactorCodeMismatch = 88,
	// two factor code mismatch
	TwoFactorActivationCodeMismatch = 89,
	// activation code for two-factor didn't match
	AccountAssociatedToMultiplePartners = 90,
	// account has been associated with multiple partners
	NotModified = 91,
	// data not modified
	NoMobileDevice = 92,
	// the account does not have a mobile device associated with it
	TimeNotSynced = 93,
	// the time presented is out of range or tolerance
	SmsCodeFailed = 94,
	// SMS code failure (no match, none pending, etc.)
	AccountLimitExceeded = 95,
	// Too many accounts access this resource
	AccountActivityLimitExceeded = 96,
	// Too many changes to this account
	PhoneActivityLimitExceeded = 97,
	// Too many changes to this phone
	RefundToWallet = 98,
	// Cannot refund to payment method, must use wallet
	EmailSendFailure = 99,
	// Cannot send an email
	NotSettled = 100,
	// Can't perform operation till payment has settled
	NeedCaptcha = 101,
	// Needs to provide a valid captcha
	GSLTDenied = 102,
	// a game server login token owned by this token's owner has been banned
	GSOwnerDenied = 103,
	// game server owner is denied for other reason (account lock, community ban, vac ban, missing phone)
	InvalidItemType = 104,
	// the type of thing we were requested to act on is invalid
	IPBanned = 105,
	// the ip address has been banned from taking this action
	GSLTExpired = 106,
	// this token has expired from disuse; can be reset for use
	InsufficientFunds = 107,
	// user doesn't have enough wallet funds to complete the action
	TooManyPending = 108,
	// There are too many of this thing pending already
	NoSiteLicensesFound = 109,
	// No site licenses found
	WGNetworkSendExceeded = 110,
	// the WG couldn't send a response because we exceeded max network send size
	AccountNotFriends = 111,
	// the user is not mutually friends
	LimitedUserAccount = 112,
	// the user is limited
	CantRemoveItem = 113,
	// item can't be removed
};

#if ENABLE_STEAMCORE
static ESteamResult _SteamResult(EResult result)
{
	switch (result)
	{
#if STEAM_VERSION > 146
	case k_EResultNone:
		return ESteamResult::None;
		break;
#endif
	case k_EResultOK:
		return ESteamResult::OK;
		break;
	case k_EResultFail:
		return ESteamResult::Fail;
		break;
	case k_EResultNoConnection:
		return ESteamResult::NoConnection;
		break;
	case k_EResultInvalidPassword:
		return ESteamResult::InvalidPassword;
		break;
	case k_EResultLoggedInElsewhere:
		return ESteamResult::LoggedInElsewhere;
		break;
	case k_EResultInvalidProtocolVer:
		return ESteamResult::InvalidProtocolVer;
		break;
	case k_EResultInvalidParam:
		return ESteamResult::InvalidParam;
		break;
	case k_EResultFileNotFound:
		return ESteamResult::FileNotFound;
		break;
	case k_EResultBusy:
		return ESteamResult::Busy;
		break;
	case k_EResultInvalidState:
		return ESteamResult::InvalidState;
		break;
	case k_EResultInvalidName:
		return ESteamResult::InvalidName;
		break;
	case k_EResultInvalidEmail:
		return ESteamResult::InvalidEmail;
		break;
	case k_EResultDuplicateName:
		return ESteamResult::DuplicateName;
		break;
	case k_EResultAccessDenied:
		return ESteamResult::AccessDenied;
		break;
	case k_EResultTimeout:
		return ESteamResult::Timeout;
		break;
	case k_EResultBanned:
		return ESteamResult::Banned;
		break;
	case k_EResultAccountNotFound:
		return ESteamResult::AccountNotFound;
		break;
	case k_EResultInvalidSteamID:
		return ESteamResult::InvalidSteamID;
		break;
	case k_EResultServiceUnavailable:
		return ESteamResult::ServiceUnavailable;
		break;
	case k_EResultNotLoggedOn:
		return ESteamResult::NotLoggedOn;
		break;
	case k_EResultPending:
		return ESteamResult::Pending;
		break;
	case k_EResultEncryptionFailure:
		return ESteamResult::EncryptionFailure;
		break;
	case k_EResultInsufficientPrivilege:
		return ESteamResult::InsufficientPrivilege;
		break;
	case k_EResultLimitExceeded:
		return ESteamResult::LimitExceeded;
		break;
	case k_EResultRevoked:
		return ESteamResult::Revoked;
		break;
	case k_EResultExpired:
		return ESteamResult::Expired;
		break;
	case k_EResultAlreadyRedeemed:
		return ESteamResult::AlreadyRedeemed;
		break;
	case k_EResultDuplicateRequest:
		return ESteamResult::DuplicateRequest;
		break;
	case k_EResultAlreadyOwned:
		return ESteamResult::AlreadyOwned;
		break;
	case k_EResultIPNotFound:
		return ESteamResult::IPNotFound;
		break;
	case k_EResultPersistFailed:
		return ESteamResult::PersistFailed;
		break;
	case k_EResultLockingFailed:
		return ESteamResult::LockingFailed;
		break;
	case k_EResultLogonSessionReplaced:
		return ESteamResult::LogonSessionReplaced;
		break;
	case k_EResultConnectFailed:
		return ESteamResult::ConnectFailed;
		break;
	case k_EResultHandshakeFailed:
		return ESteamResult::HandshakeFailed;
		break;
	case k_EResultIOFailure:
		return ESteamResult::IOFailure;
		break;
	case k_EResultRemoteDisconnect:
		return ESteamResult::RemoteDisconnect;
		break;
	case k_EResultShoppingCartNotFound:
		return ESteamResult::ShoppingCartNotFound;
		break;
	case k_EResultBlocked:
		return ESteamResult::Blocked;
		break;
	case k_EResultIgnored:
		return ESteamResult::Ignored;
		break;
	case k_EResultNoMatch:
		return ESteamResult::NoMatch;
		break;
	case k_EResultAccountDisabled:
		return ESteamResult::AccountDisabled;
		break;
	case k_EResultServiceReadOnly:
		return ESteamResult::ServiceReadOnly;
		break;
	case k_EResultAccountNotFeatured:
		return ESteamResult::AccountNotFeatured;
		break;
	case k_EResultAdministratorOK:
		return ESteamResult::AdministratorOK;
		break;
	case k_EResultContentVersion:
		return ESteamResult::ContentVersion;
		break;
	case k_EResultTryAnotherCM:
		return ESteamResult::TryAnotherCM;
		break;
	case k_EResultPasswordRequiredToKickSession:
		return ESteamResult::PasswordRequiredToKickSession;
		break;
	case k_EResultAlreadyLoggedInElsewhere:
		return ESteamResult::AlreadyLoggedInElsewhere;
		break;
	case k_EResultSuspended:
		return ESteamResult::Suspended;
		break;
	case k_EResultCancelled:
		return ESteamResult::Cancelled;
		break;
	case k_EResultDataCorruption:
		return ESteamResult::DataCorruption;
		break;
	case k_EResultDiskFull:
		return ESteamResult::DiskFull;
		break;
	case k_EResultRemoteCallFailed:
		return ESteamResult::RemoteCallFailed;
		break;
	case k_EResultPasswordUnset:
		return ESteamResult::PasswordUnset;
		break;
	case k_EResultExternalAccountUnlinked:
		return ESteamResult::ExternalAccountUnlinked;
		break;
	case k_EResultPSNTicketInvalid:
		return ESteamResult::PSNTicketInvalid;
		break;
	case k_EResultExternalAccountAlreadyLinked:
		return ESteamResult::ExternalAccountAlreadyLinked;
		break;
	case k_EResultRemoteFileConflict:
		return ESteamResult::RemoteFileConflict;
		break;
	case k_EResultIllegalPassword:
		return ESteamResult::IllegalPassword;
		break;
	case k_EResultSameAsPreviousValue:
		return ESteamResult::SameAsPreviousValue;
		break;
	case k_EResultAccountLogonDenied:
		return ESteamResult::AccountLogonDenied;
		break;
	case k_EResultCannotUseOldPassword:
		return ESteamResult::CannotUseOldPassword;
		break;
	case k_EResultInvalidLoginAuthCode:
		return ESteamResult::InvalidLoginAuthCode;
		break;
	case k_EResultAccountLogonDeniedNoMail:
		return ESteamResult::AccountLogonDeniedNoMail;
		break;
	case k_EResultHardwareNotCapableOfIPT:
		return ESteamResult::HardwareNotCapableOfIPT;
		break;
	case k_EResultIPTInitError:
		return ESteamResult::IPTInitError;
		break;
	case k_EResultParentalControlRestricted:
		return ESteamResult::ParentalControlRestricted;
		break;
	case k_EResultFacebookQueryError:
		return ESteamResult::FacebookQueryError;
		break;
	case k_EResultExpiredLoginAuthCode:
		return ESteamResult::ExpiredLoginAuthCode;
		break;
	case k_EResultIPLoginRestrictionFailed:
		return ESteamResult::IPLoginRestrictionFailed;
		break;
	case k_EResultAccountLockedDown:
		return ESteamResult::AccountLockedDown;
		break;
	case k_EResultAccountLogonDeniedVerifiedEmailRequired:
		return ESteamResult::AccountLogonDeniedVerifiedEmailRequired;
		break;
	case k_EResultNoMatchingURL:
		return ESteamResult::NoMatchingURL;
		break;
	case k_EResultBadResponse:
		return ESteamResult::BadResponse;
		break;
	case k_EResultRequirePasswordReEntry:
		return ESteamResult::RequirePasswordReEntry;
		break;
	case k_EResultValueOutOfRange:
		return ESteamResult::ValueOutOfRange;
		break;
	case k_EResultUnexpectedError:
		return ESteamResult::UnexpectedError;
		break;
	case k_EResultDisabled:
		return ESteamResult::Disabled;
		break;
	case k_EResultInvalidCEGSubmission:
		return ESteamResult::InvalidCEGSubmission;
		break;
	case k_EResultRestrictedDevice:
		return ESteamResult::RestrictedDevice;
		break;
	case k_EResultRegionLocked:
		return ESteamResult::RegionLocked;
		break;
	case k_EResultRateLimitExceeded:
		return ESteamResult::RateLimitExceeded;
		break;
	case k_EResultAccountLoginDeniedNeedTwoFactor:
		return ESteamResult::AccountLoginDeniedNeedTwoFactor;
		break;
	case k_EResultItemDeleted:
		return ESteamResult::ItemDeleted;
		break;
	case k_EResultAccountLoginDeniedThrottle:
		return ESteamResult::AccountLoginDeniedThrottle;
		break;
	case k_EResultTwoFactorCodeMismatch:
		return ESteamResult::TwoFactorCodeMismatch;
		break;
	case k_EResultTwoFactorActivationCodeMismatch:
		return ESteamResult::TwoFactorActivationCodeMismatch;
		break;
	case k_EResultAccountAssociatedToMultiplePartners:
		return ESteamResult::AccountAssociatedToMultiplePartners;
		break;
	case k_EResultNotModified:
		return ESteamResult::NotModified;
		break;
	case k_EResultNoMobileDevice:
		return ESteamResult::NoMobileDevice;
		break;
	case k_EResultTimeNotSynced:
		return ESteamResult::TimeNotSynced;
		break;
	case k_EResultSmsCodeFailed:
		return ESteamResult::SmsCodeFailed;
		break;
	case k_EResultAccountLimitExceeded:
		return ESteamResult::AccountLimitExceeded;
		break;
	case k_EResultAccountActivityLimitExceeded:
		return ESteamResult::AccountActivityLimitExceeded;
		break;
	case k_EResultPhoneActivityLimitExceeded:
		return ESteamResult::PhoneActivityLimitExceeded;
		break;
	case k_EResultRefundToWallet:
		return ESteamResult::RefundToWallet;
		break;
	case k_EResultEmailSendFailure:
		return ESteamResult::EmailSendFailure;
		break;
	case k_EResultNotSettled:
		return ESteamResult::NotSettled;
		break;
	case k_EResultNeedCaptcha:
		return ESteamResult::NeedCaptcha;
		break;
	case k_EResultGSLTDenied:
		return ESteamResult::GSLTDenied;
		break;
	case k_EResultGSOwnerDenied:
		return ESteamResult::GSOwnerDenied;
		break;
	case k_EResultInvalidItemType:
		return ESteamResult::InvalidItemType;
		break;
	case k_EResultIPBanned:
		return ESteamResult::IPBanned;
		break;
	case k_EResultGSLTExpired:
		return ESteamResult::GSLTExpired;
		break;
	case k_EResultInsufficientFunds:
		return ESteamResult::InsufficientFunds;
		break;
	case k_EResultTooManyPending:
		return ESteamResult::TooManyPending;
		break;
	case k_EResultNoSiteLicensesFound:
		return ESteamResult::NoSiteLicensesFound;
		break;
	case k_EResultWGNetworkSendExceeded:
		return ESteamResult::WGNetworkSendExceeded;
		break;
	case k_EResultAccountNotFriends:
		return ESteamResult::AccountNotFriends;
		break;
	case k_EResultLimitedUserAccount:
		return ESteamResult::LimitedUserAccount;
		break;
	case k_EResultCantRemoveItem:
		return ESteamResult::CantRemoveItem;
		break;
	default:
		return ESteamResult::None;
		break;
	}
	return ESteamResult::None;
}
#endif

UENUM(BlueprintType)
enum class ESteamChatRoomEnterResponse : uint8
{
	None = 0,
	Success = 1,
	DoesntExist = 2,
	NotAllowed = 3,
	Full = 4,
	Error = 5,
	Banned = 6,
	Limited = 7,
	ClanDisabled = 8,
	CommunityBan = 9,
	MemberBlockedYou = 10,
	YouBlockedMember = 11,
	RatelimitExceeded = 15,
};

UENUM(BlueprintType)
enum class ESteamChatEntryType : uint8
{
	Invalid = 0,
	ChatMsg = 1,
	Typing = 2,
	InviteGame = 3,
	Emote = 4,
	LeftConversation = 6,
	Entered = 7,
	WasKicked = 8,
	WasBanned = 9,
	Disconnected = 10,
	HistoricalChat = 11,
	LinkBlocked = 14,
};

UENUM(BlueprintType)
enum class ESteamAccountType : uint8
{
	Invalid = 0,
	Individual = 1,
	Multiseat = 2,
	GameServer = 3,
	AnonGameServer = 4,
	Pending = 5,
	ContentServer = 6,
	Clan = 7,
	Chat = 8,
	ConsoleUser = 9,
	AnonUser = 10,
	Max
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs 
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType, meta = (HasNativeMake = "/Script/SteamCore.SteamUtilities:MakeSteamID", HasNativeBreak = "/Script/SteamCore.SteamUtilities:BreakSteamID"))
struct STEAMCORE_API FSteamID
{
	GENERATED_BODY()
public:
	FSteamID()
		: m_Value(0)
	{
	}

	FSteamID(uint64 InValue)
		: m_Value(InValue)
	{
	}

#if ENABLE_STEAMCORE
	FSteamID(const CSteamID* Data)
		: m_Value(Data->ConvertToUint64())
	{
	}
#endif

#if ENABLE_STEAMCORE
	FSteamID(const CSteamID& Data)
		: m_Value(Data.ConvertToUint64())
	{
	}
#endif

public:
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
#if ENABLE_STEAMCORE
	operator CSteamID() const
	{
		return CSteamID(m_Value);
	}
	void operator=(const CSteamID& Data) { m_Value = Data.ConvertToUint64(); }
#endif
	bool operator==(const FSteamID& Data) { return Data == m_Value; }
	bool operator!=(const FSteamID& Data) { return Data != m_Value; }
public:
	uint64 GetValue() const { return m_Value; }
	bool IsValid() const
	{
#if ENABLE_STEAMCORE
		return CSteamID(m_Value).IsValid();
#else
		return false;
#endif
	}
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "/Script/SteamCore.SteamUtilities:MakeSteamGameID", HasNativeBreak = "/Script/SteamCore.SteamUtilities:BreakSteamGameID"))
struct STEAMCORE_API FSteamGameID
{
	GENERATED_BODY()
public:
	FSteamGameID()
		: m_Value(0)
	{
	}

	FSteamGameID(uint64 InValue)
		: m_Value(InValue)
	{
	}

#if ENABLE_STEAMCORE
	FSteamGameID(const CGameID& Data)
		: m_Value(Data.ToUint64())
	{
	}
#endif

public:
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
#if ENABLE_STEAMCORE
	operator CGameID() const { return CGameID(m_Value); }
	void operator=(const CGameID& Data) { m_Value = Data.ToUint64(); }
	bool operator==(const CGameID& Data) { return Data.ToUint64() == m_Value; }
#endif
public:
	uint64 GetValue() const { return m_Value; }
	bool IsValid() const
	{
#if ENABLE_STEAMCORE
	return CGameID(m_Value).IsValid();
#else
	return false;
#endif
	}
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "/Script/SteamCore.SteamUtilities:MakeUGCHandle", HasNativeBreak = "/Script/SteamCore.SteamUtilities:BreakUGCHandle"))
struct STEAMCORE_API FSteamUGCHandle
{
	GENERATED_BODY()
public:
	FSteamUGCHandle()
		: m_Value(0)
	{
	}

	FSteamUGCHandle(uint64 value)
		: m_Value(value)
	{
	}

public:
	operator uint64() const { return m_Value; }
public:
	bool IsValid() const
	{
#if ENABLE_STEAMCORE
		return m_Value != k_UGCHandleInvalid;
#else
		return false;
#endif
	}
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "/Script/SteamCore.SteamUtilities:MakeInventoryUpdateHandle", HasNativeBreak = "/Script/SteamCore.SteamUtilities:BreakInventoryUpdateHandle"))
struct STEAMCORE_API FSteamInventoryUpdateHandle
{
	GENERATED_BODY()
public:
	FSteamInventoryUpdateHandle()
#if ENABLE_STEAMCORE
		: m_Value(k_SteamInventoryUpdateHandleInvalid)
#else
		: m_Value(0)
#endif
	{
	}

#if ENABLE_STEAMCORE
	FSteamInventoryUpdateHandle(const SteamInventoryUpdateHandle_t& Data)
		: m_Value(Data)
	{
	}
#endif

public:
	operator uint64() const { return m_Value; }
	operator uint64() { return m_Value; }
public:
	bool IsValid() const
	{
#if ENABLE_STEAMCORE
		return m_Value != k_SteamInventoryUpdateHandleInvalid;
#else
	return false;
#endif
	}
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct STEAMCORE_API FSteamTicketHandle
{
	GENERATED_BODY()

public:
	FSteamTicketHandle()
		: m_Value(0)
	{
	}

	FSteamTicketHandle(uint32 value)
		: m_Value(value)
	{
	}

public:
	operator uint32() const { return m_Value; }
public:
	bool IsValid() const
	{
#if ENABLE_STEAMCORE
		return m_Value != k_HAuthTicketInvalid;
#else
	return false;
#endif
	}
	
private:
	uint32 m_Value;
};

USTRUCT(BlueprintType)
struct FValidateAuthTicketResponse
{
	GENERATED_BODY()
public:
	FValidateAuthTicketResponse()
		: AuthSessionResponse(ESteamAuthSessionResponse::AuthTicketInvalid)
	{
	}

#if ENABLE_STEAMCORE
	FValidateAuthTicketResponse(const ValidateAuthTicketResponse_t& Data)
		: SteamID(Data.m_SteamID)
		  , AuthSessionResponse(static_cast<ESteamAuthSessionResponse>(Data.m_eAuthSessionResponse))
		  , OwnerSteamID(Data.m_OwnerSteamID)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	ESteamAuthSessionResponse AuthSessionResponse;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
	FSteamID OwnerSteamID;
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "/Script/SteamCore.SteamUtilities:MakePublishedFileID", HasNativeBreak = "/Script/SteamCore.SteamUtilities:BreakPublishedFileID"))
struct FPublishedFileID
{
	GENERATED_BODY()
public:
	FPublishedFileID()
		: m_Value(0)
	{
	}

	FPublishedFileID(uint64 val)
		: m_Value(val)
	{
	}

public:
	operator uint64() const { return m_Value; }
	uint64 GetValue() const { return m_Value; }
	bool operator==(const FPublishedFileID& data) { return data.GetValue() == m_Value; }
	bool operator!=(const FPublishedFileID& data) { return data.GetValue() != m_Value; }
	bool IsValid() const { return m_Value != 0; }
private:
	uint64 m_Value;
};

USTRUCT(BlueprintType)
struct FRemoteStorageSubscribePublishedFileResult
{
	GENERATED_BODY()
public:
	FRemoteStorageSubscribePublishedFileResult()
		: Result(ESteamResult::None)
	{
	}

#if ENABLE_STEAMCORE
	FRemoteStorageSubscribePublishedFileResult(const RemoteStorageSubscribePublishedFileResult_t& Data)
		: Result(_SteamResult(Data.m_eResult))
		  , PublishedFileID(Data.m_nPublishedFileId)
	{
	}
#endif

public:
	UPROPERTY(BlueprintReadWrite, Category = "UGC")
	ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "UGC")
	FPublishedFileID PublishedFileID;
};

USTRUCT(BlueprintType)
struct FHostPingData
{
	GENERATED_BODY()
public:
	FHostPingData()
	{
	}

	FHostPingData(FString String)
		: HostString(String)
	{
	}

public:
	UPROPERTY(BlueprintReadWrite, Category = "Steam")
	FString HostString;

public:
	operator FString() const { return HostString; }
};

USTRUCT(BlueprintType)
struct FSteamSessionSetting
{
	GENERATED_BODY()
public:
	FSteamSessionSetting()
	{
	};

	FSteamSessionSetting(bool bValue)
	{
		m_Data.Set<bool>(bValue);
	}

	FSteamSessionSetting(int32 Value)
	{
		m_Data.Set<int32>(Value);
	}

	FSteamSessionSetting(FString Value)
	{
		m_Data.Set<FString>(Value);
	}

public:
	FString m_Key; 
	TVariant<int32, bool, FString> m_Data;
};

USTRUCT(BlueprintType)
struct FSteamSessionSearchSetting
{
	GENERATED_BODY()
public:
	FSteamSessionSearchSetting()
		: m_ComparisonOp(ESteamComparisonOp::Equals)
	{
	}

	FSteamSessionSearchSetting(bool bValue)
		: m_ComparisonOp(ESteamComparisonOp::Equals)
	{
		m_Data.Set<bool>(bValue);
	}

	FSteamSessionSearchSetting(ESteamComparisonOp Op, int32 Value)
		: m_ComparisonOp(Op)
	{
		m_Data.Set<int32>(Value);
	}

	FSteamSessionSearchSetting(FString Value)
		: m_ComparisonOp(ESteamComparisonOp::Equals)
	{
		m_Data.Set<FString>(Value);
	}

public:
	ESteamComparisonOp m_ComparisonOp;
	TVariant<int32, bool, FString> m_Data;
};

USTRUCT(BlueprintType)
struct FSteamSessionResult
{
	GENERATED_BODY()
public:
	FSteamSessionResult() = default;

	FSteamSessionResult(const FBlueprintSessionResult& InResult, const TArray<FSteamSessionSetting>& InSessionSettings)
		: Result(InResult)
		  , SessionSettings(InSessionSettings)
	{
	}

public:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Data")
	FBlueprintSessionResult Result;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Data")
	TArray<FSteamSessionSetting> SessionSettings;
};

USTRUCT(BlueprintType)
struct FPartyBeaconID
{
	GENERATED_BODY()
public:
	FPartyBeaconID()
		: m_Value(0)
	{
	}

	FPartyBeaconID(uint64 InValue)
		: m_Value(InValue)
	{
	}

public:
	operator uint64() const { return m_Value; }
	uint64 GetValue() const { return m_Value; }
	bool operator==(const FPartyBeaconID& Data) { return Data.GetValue() == m_Value; }
	bool operator!=(const FPartyBeaconID& Data) { return Data.GetValue() != m_Value; }
	bool IsValid() const { return m_Value != 0; }
private:
	uint64 m_Value;
};
