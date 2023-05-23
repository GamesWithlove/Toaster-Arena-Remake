// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Runtime/Launch/Resources/Version.h"
#include "PakDownloader.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDownloadPakDelegate, int32, HttpResponseCode, int32, ContentLength, const FString, SavePath, int32, BytesReceived);

UCLASS()
class PAKLOADER_API UAsyncPakDownloader : public UBlueprintAsyncActionBase
{
	GENERATED_UCLASS_BODY()

public:
	/*
		Downloads a file over HTTP, intended to be used to download .pak files.
		SavePath: Directory or path where to save the file. This is passed in OnSuccess callbacks too.
		HttpResponseCode: HTTP response code in OnSuccess and OnFail callbacks.
		ContentLength: Total bytes downloaded in OnSuccess callback.
		BytesReceived: Number of bytes received so far in OnProgress callback.
	*/
	UFUNCTION(BlueprintCallable, Category = "PakLoader|Download", meta = (BlueprintInternalUseOnly = "true"))
	static UAsyncPakDownloader *DownloadPak(const FString &URL, const FString &SavePath);

	UPROPERTY(BlueprintAssignable)
	FDownloadPakDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FDownloadPakDelegate OnFail;

	UPROPERTY(BlueprintAssignable)
	FDownloadPakDelegate OnProgress;

protected:
	void StartDownload(const FString &URL, const FString &SavePath);

private:
	void HandleDownloadComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
	void HandleDownloadProgress(FHttpRequestPtr InRequest, int32 bytesSent, int32 bytesReceived);

	FString SaveFilePath;
};
