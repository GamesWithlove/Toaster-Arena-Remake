// Fill out your copyright notice in the Description page of Project Settings.


#include "TT_EncodeImage.h"
#include "ImageUtils.h"

FString UTT_EncodeImage::ConvertImageToBase64(const FString ImageFilePath)
{
	//Create a local variable to store the image data
	TArray<uint8> ImageData;
	// Read image from the input path
	FFileHelper::LoadFileToArray(ImageData, *ImageFilePath);
	// Encode image to base 64
	FString Base64String = FBase64::Encode(ImageData);
	// Create a store file path for encoded string
	const FString FilePath = FPaths::ProjectDir() / "String.txt";
	// Store String into that file
	FFileHelper::SaveStringToFile(Base64String, *FilePath);
	// Return the base64 string
	return Base64String;
}


UTexture2D* UTT_EncodeImage::ConvertBase64ToImage(const FString Source)
{
	// Local variable to store image data
	TArray<uint8> ImageData;
	// Decode the Base 64 string to image data
	FBase64::Decode(Source, ImageData);
	// Create Image saving path
	const FString FilePath = FPaths::ProjectDir() / "Image.png";
	// Save data to that iamge file
	FFileHelper::SaveArrayToFile(ImageData, *FilePath);
	// Use this function to convert data to texture 2D
	return FImageUtils::ImportBufferAsTexture2D(ImageData);
}


