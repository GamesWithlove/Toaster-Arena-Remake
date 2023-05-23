// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

#include "PakDownloader.h"
#include "Runtime/Online/HTTP/Public/HttpModule.h"
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
	UAsyncPakDownloader* DownloadTask = NewObject<UAsyncPakDownloader>();
	DownloadTask->StartDownload(URL, SavePath);

	return DownloadTask;
}

void UAsyncPakDownloader::StartDownload(const FString &URL, const FString &SavePath)
{
	SaveFilePath = SavePath;

	// If the user did not specify a filename, try to extract it from the download URL.
	if (SaveFilePath.Len() > 1 && FPaths::GetCleanFilename(SaveFilePath).Len() == 0)
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

	HttpRequest->OnProcessRequestComplete().BindUObject(this, &UAsyncPakDownloader::HandleDownloadComplete);
	HttpRequest->OnRequestProgress().BindUObject(this, &UAsyncPakDownloader::HandleDownloadProgress);
	HttpRequest->SetURL(URL);
	HttpRequest->SetVerb(TEXT("GET"));
	HttpRequest->ProcessRequest();
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

void UAsyncPakDownloader::HandleDownloadProgress(FHttpRequestPtr InRequest, int32 bytesSent, int32 bytesReceived)
{
	if (InRequest.IsValid())
	{
		OnProgress.Broadcast(0, 0, TEXT(""), bytesReceived);
	}
}
