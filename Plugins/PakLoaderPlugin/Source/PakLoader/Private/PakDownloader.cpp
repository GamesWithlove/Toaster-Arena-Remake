// Copyright (C) 2019-2024 Blue Mountains GmbH. All Rights Reserved.

#include "PakDownloader.h"
#include "HttpModule.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

UAsyncPakDownloader::UAsyncPakDownloader(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	if (HasAnyFlags(RF_ClassDefaultObject) == false)
	{
		AddToRoot();
	}
}

UAsyncPakDownloader* UAsyncPakDownloader::DownloadPak(const FString &URL, const FString &SavePath)
{
	checkf(IsHttpUrl(URL), TEXT("Url passed to DownloadPak does not start with http:// or https://. Since UE 5.3 this is required."));

	UAsyncPakDownloader* DownloadTask = NewObject<UAsyncPakDownloader>();
	DownloadTask->StartDownload(URL, SavePath);

	return DownloadTask;
}

void UAsyncPakDownloader::StartDownload(const FString &URL, const FString &SavePath)
{
	SaveFilePath = SavePath;
	
	// If the user did not specify a filename, try to extract it from the download URL.
	const FString SaveFilePathCleanFilename = FPaths::GetCleanFilename(SaveFilePath);
	if (SaveFilePath.Len() > 1 && (SaveFilePathCleanFilename.Len() == 0 || !SaveFilePathCleanFilename.Contains(".")))
	{
		const FString DownloadFileName = FPaths::GetCleanFilename(URL);

		if (DownloadFileName.Len() > 0)
		{
			SaveFilePath = FPaths::Combine(SaveFilePath, DownloadFileName);
		}
	}

	// Create the Http request and add to pending request list
#if ENGINE_MINOR_VERSION <= 25 && ENGINE_MAJOR_VERSION == 4
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
#else
	auto HttpRequest = FHttpModule::Get().CreateRequest();
#endif

	HttpRequest->OnHeaderReceived().BindUObject(this, &UAsyncPakDownloader::HandleHeaderReceived);
	HttpRequest->OnProcessRequestComplete().BindUObject(this, &UAsyncPakDownloader::HandleDownloadComplete);
#if ENGINE_MINOR_VERSION >= 4 && ENGINE_MAJOR_VERSION == 5
	HttpRequest->OnRequestProgress64().BindUObject(this, &UAsyncPakDownloader::HandleDownloadProgress);
#else
	HttpRequest->OnRequestProgress().BindUObject(this, &UAsyncPakDownloader::HandleDownloadProgress);
#endif
	HttpRequest->SetURL(URL);
	HttpRequest->SetVerb(TEXT("GET"));
	HttpRequest->ProcessRequest();
}

void UAsyncPakDownloader::HandleHeaderReceived(FHttpRequestPtr InSourceHttpRequest, const FString& InHeaderName, const FString& InHeaderValue)
{
	if (InHeaderName == "Content-Length")
	{
		HeaderContentLength = FCString::Atoi64(*InHeaderValue);
	}
}

void UAsyncPakDownloader::HandleDownloadComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded)
{
	RemoveFromRoot();

	int32 HttpResponseCode = 0;

	if (HttpResponse.IsValid())
	{
		HttpResponseCode = HttpResponse->GetResponseCode();
	}

	if (bSucceeded && HttpResponse.IsValid() && HttpResponse->GetContentLength() > 0)
	{
		if (FFileHelper::SaveArrayToFile(HttpResponse->GetContent(), *SaveFilePath))
		{
			OnSuccess.Broadcast(HttpResponseCode, HttpResponse->GetContentLength(), *SaveFilePath, 0);
			return;
		}
	}

	OnFail.Broadcast(HttpResponseCode, 0, TEXT(""), 0);
}

#if ENGINE_MINOR_VERSION >= 4 && ENGINE_MAJOR_VERSION == 5
void UAsyncPakDownloader::HandleDownloadProgress(FHttpRequestPtr InRequest, uint64 BytesSent, uint64 BytesReceived)
#else
void UAsyncPakDownloader::HandleDownloadProgress(FHttpRequestPtr InRequest, int32 BytesSent, int32 BytesReceived)
#endif
{
	if (InRequest.IsValid())
	{
#if ENGINE_MINOR_VERSION >= 4 && ENGINE_MAJOR_VERSION == 5
		OnProgress.Broadcast(0, HeaderContentLength, TEXT(""), static_cast<int64>(BytesReceived));
#else
		OnProgress.Broadcast(0, HeaderContentLength, TEXT(""), BytesReceived);
#endif
	}
}

bool UAsyncPakDownloader::IsHttpUrl(const FString& URL)
{
	const FString Lower = URL.ToLower();
	return Lower.StartsWith("http://") || Lower.StartsWith("https://");
}
