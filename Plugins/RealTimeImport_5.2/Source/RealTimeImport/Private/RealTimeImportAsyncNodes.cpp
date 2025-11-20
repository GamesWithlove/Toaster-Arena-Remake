// Copyright 2017 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportAsyncNodes.h"


/*--- Load Mesh -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadMesh* URealTimeImportAsyncNodeLoadMesh::LoadMeshFileAsyncNode(ERTIMeshType fileType, ERTIDirectoryType directoryType, FString filePath,
	ERTICoordinateSystem coordinateSystem,bool calculateTangents, bool cacheTexture, bool autoDetectionNormalMap, bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat, FString eventID){

	URealTimeImportAsyncNodeLoadMesh* instance = NewObject<URealTimeImportAsyncNodeLoadMesh>();

	instance->jobData = new FSRealtimeImportThreadJobData();
	instance->jobData->jobType = ERTIThreadJobType::E_LoadMesh;
	instance->jobData->eventID = eventID;
	instance->jobData->calculateTangents = calculateTangents;
	instance->jobData->cacheTexture = cacheTexture;
	instance->jobData->meshFileType = fileType;
	instance->jobData->directoryType = directoryType;
	instance->jobData->filePath = filePath;
	instance->jobData->coordinateSystem = coordinateSystem;
	instance->jobData->autoDetectionNormalMap = autoDetectionNormalMap;
	instance->jobData->SRGB = useSRGB;
	instance->jobData->createMipMaps = createMipMaps;
	instance->jobData->rgbFormat = rgbFormat;
	instance->jobData->asyncNodeLoadMesh = instance;

	instance->AddToRoot();

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadMesh::Activate(){
	URealTimeImportBPLibrary::addJobToThread(jobData);
}

void URealTimeImportAsyncNodeLoadMesh::jobComplete(TArray<FRTIModelStruct> modelStructs, FString errorMessage, bool successful, FString eventID) {
	

	if (successful) {
		OnSuccess.Broadcast(modelStructs,errorMessage,eventID,100);
	}
	else {
		OnFail.Broadcast(modelStructs,errorMessage,eventID,0);
	}

	RemoveFromRoot();
}

void URealTimeImportAsyncNodeLoadMesh::setProgress(float pecent){
	OnProgress.Broadcast(emptyArrayForProgressEvent,"",jobData->eventID,pecent);
}

void URealTimeImportAsyncNodeLoadMesh::setMaterialProgress(float pecent){
	OnMaterialProgress.Broadcast(emptyArrayForProgressEvent,"",jobData->eventID,pecent);
}




//URealTimeImportAsyncNodeSpawnMeshActor* URealTimeImportAsyncNodeSpawnMeshActor::spawnMeshFromFileAsyncNode(UObject* WorldContextObject, FTransform transform, FString filePath, ERTICoordinateSystem coordinateSystem, bool calculateTangents, bool cacheTexture, bool autoDetectionNormalMap, bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat, FString eventID, UMaterial* material, UMaterial* vertexColorMaterial)
//{
//	return nullptr;
//}
//
//void URealTimeImportAsyncNodeSpawnMeshActor::Activate()
//{
//}
//
//void URealTimeImportAsyncNodeSpawnMeshActor::jobComplete(TArray<FRTIModelStruct> modelStructs, FString errorMessage, bool successful, FString eventID)
//{
//}
//
//void URealTimeImportAsyncNodeSpawnMeshActor::setProgress(float pecent)
//{
//}
//
//void URealTimeImportAsyncNodeSpawnMeshActor::setMaterialProgress(float pecent)
//{
//}

/*--- Save Mesh -------------------------------------------------------------------------------------------------------------*/


URealTimeImportAsyncNodeSaveMesh* URealTimeImportAsyncNodeSaveMesh::saveModelsToFile(UObject* WorldContextObject,UMaterial* exportMaterial,
	ERTIMeshExportType fileType,ERTICoordinateSystem coordinateSystem, ERTIDirectoryType directoryType, 
	FString filePath, TArray<FRTIModelStruct> modelStructs, FString eventID){
	URealTimeImportAsyncNodeSaveMesh* instance = NewObject<URealTimeImportAsyncNodeSaveMesh>();

	instance->jobData = new FSRealtimeImportThreadJobData();
	instance->jobData->jobType = ERTIThreadJobType::E_SaveMesh;
	instance->jobData->WorldContextObject = WorldContextObject;
	instance->jobData->exportMaterial = exportMaterial;
	instance->jobData->coordinateSystem = coordinateSystem;
	instance->jobData->eventID = eventID;
	instance->jobData->modelStructs = modelStructs;
	instance->jobData->directoryType = directoryType;
	instance->jobData->filePath = filePath;
	instance->jobData->asyncNodeSaveMesh = instance;

	switch (fileType)
	{
	case ERTIMeshExportType::E_obj:
		instance->jobData->meshFileType = ERTIMeshType::E_obj;
		break;
	}

	instance->AddToRoot();

	return instance;
}

void URealTimeImportAsyncNodeSaveMesh::Activate(){
	URealTimeImportBPLibrary::addJobToThread(jobData);
}

void URealTimeImportAsyncNodeSaveMesh::jobComplete(FString errorMessage, bool successful, FString eventID){
	if (successful) {
		OnSuccess.Broadcast(errorMessage,eventID);
	}
	else {
		OnFail.Broadcast(errorMessage,eventID);
	}

	RemoveFromRoot();
}


/*--- Load File -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadFile* URealTimeImportAsyncNodeLoadFile::LoadFileAsyncNode(ERTIDirectoryType directoryType, FString filePath) {

	URealTimeImportAsyncNodeLoadFile* instance = NewObject<URealTimeImportAsyncNodeLoadFile>();
	instance->jobData = new FSRealtimeImportThreadJobData();
	instance->jobData->jobType = ERTIThreadJobType::E_LoadFile;
	instance->jobData->directoryType = directoryType;
	instance->jobData->filePath = filePath;
	instance->jobData->asyncNodeLoadFile = instance;

	instance->AddToRoot();

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadFile::Activate() {
	URealTimeImportBPLibrary::addJobToThread(jobData);
}

void URealTimeImportAsyncNodeLoadFile::jobComplete(FString fileName, TArray<uint8> bytes, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(fileName, bytes, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(fileName, bytes, errorCode, errorMessage);
	}

	RemoveFromRoot();
}

/*---Save File -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeSaveFile* URealTimeImportAsyncNodeSaveFile::SaveFileAsyncNode(ERTIDirectoryType directoryType, FString filePath, TArray<uint8> bytes,
	bool createDirectories, bool overwriteFile) {

	URealTimeImportAsyncNodeSaveFile* instance = NewObject<URealTimeImportAsyncNodeSaveFile>();
	instance->jobData = new FSRealtimeImportThreadJobData();
	instance->jobData->jobType = ERTIThreadJobType::E_SaveFile;
	instance->jobData->directoryType = directoryType;
	instance->jobData->filePath = filePath;
	instance->jobData->createDirectories = createDirectories;
	instance->jobData->overwriteFile = overwriteFile;
	instance->jobData->bytes = bytes;
	instance->jobData->asyncNodeSaveFile = instance;

	instance->AddToRoot();

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeSaveFile::Activate() {
	URealTimeImportBPLibrary::addJobToThread(jobData);
}

void URealTimeImportAsyncNodeSaveFile::jobComplete(FString fileName, FString fullPath, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(fileName, fullPath, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(fileName, fullPath, errorCode, errorMessage);
	}

	RemoveFromRoot();
}


/*---Load All Files From Directory -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadAllFilesFromDirectory* URealTimeImportAsyncNodeLoadAllFilesFromDirectory::LoadAllFilesFromDirectoryAsyncNode(
	ERTIDirectoryType directoryType, ERTIFileType fileType, FString dirPath, bool recursiveSearch) {

	URealTimeImportAsyncNodeLoadAllFilesFromDirectory* instance = NewObject<URealTimeImportAsyncNodeLoadAllFilesFromDirectory>();
	instance->jobData = new FSRealtimeImportThreadJobData();
	instance->jobData->jobType = ERTIThreadJobType::E_LoadAllFiles;
	instance->jobData->directoryType = directoryType;
	instance->jobData->fileType = fileType;
	instance->jobData->filePath = dirPath;
	instance->jobData->recursiveSearch = recursiveSearch;
	instance->jobData->asyncNodeLoadAllFilesFromDirectory = instance;

	instance->AddToRoot();

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadAllFilesFromDirectory::Activate() {
	URealTimeImportBPLibrary::addJobToThread(jobData);
}

void URealTimeImportAsyncNodeLoadAllFilesFromDirectory::jobComplete(int32 count, TArray<FString> files, TArray<FString> filePaths, bool successful) {

	if (successful) {
		OnSuccess.Broadcast(count, files, filePaths);
	}
	else {
		OnFail.Broadcast(count, files, filePaths);
	}

	RemoveFromRoot();

}

/*---Create Sound Wave From File -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeCreateSoundWaveFromFile* URealTimeImportAsyncNodeCreateSoundWaveFromFile::CreateSoundWaveFromFileAsyncNode(ERTIDirectoryType directoryType, FString filePath,
	float maxFileSize, ERTISoundFileType soundFileType) {

	URealTimeImportAsyncNodeCreateSoundWaveFromFile* instance = NewObject<URealTimeImportAsyncNodeCreateSoundWaveFromFile>();
	instance->jobData = new FSRealtimeImportThreadJobData();
	instance->jobData->jobType = ERTIThreadJobType::E_CreateWaveFromFile;
	instance->jobData->directoryType = directoryType;
	instance->jobData->filePath = filePath;
	instance->jobData->maxFileSize = maxFileSize;
	instance->jobData->soundFileType = soundFileType;
	instance->jobData->asyncNodeCreateSoundWaveFromFile = instance;

	instance->AddToRoot();

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeCreateSoundWaveFromFile::Activate() {
	URealTimeImportBPLibrary::addJobToThread(jobData);
}

void URealTimeImportAsyncNodeCreateSoundWaveFromFile::jobComplete(FString fileID, USoundWaveProcedural* soundWave, FString fileName, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(fileID, soundWave, fileName, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(fileID, soundWave, fileName, errorCode, errorMessage);
	}

	RemoveFromRoot();
}

/*---Create Sound Wave From Bytes -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeCreateSoundWaveFromBytes* URealTimeImportAsyncNodeCreateSoundWaveFromBytes::CreateSoundWaveFromBytesAsyncNode(FString name, TArray<uint8> bytes, 
	float maxFileSize, ERTISoundFileType soundFileType) {

	URealTimeImportAsyncNodeCreateSoundWaveFromBytes* instance = NewObject<URealTimeImportAsyncNodeCreateSoundWaveFromBytes>();
	instance->jobData = new FSRealtimeImportThreadJobData();
	instance->jobData->jobType = ERTIThreadJobType::E_CreateWaveFromBytes;
	instance->jobData->name = name;
	instance->jobData->bytes = bytes;
	instance->jobData->maxFileSize = maxFileSize;
	instance->jobData->soundFileType = soundFileType;
	instance->jobData->asyncNodeCreateSoundWaveFromBytes = instance;

	instance->AddToRoot();

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeCreateSoundWaveFromBytes::Activate() {
	URealTimeImportBPLibrary::addJobToThread(jobData);
}

void URealTimeImportAsyncNodeCreateSoundWaveFromBytes::jobComplete(USoundWaveProcedural* soundWave, int32 errorCode, FString errorMessage) {

	if (errorCode == 0) {
		OnSuccess.Broadcast( soundWave, errorCode, errorMessage);
	}
	else {
		OnFail.Broadcast(soundWave, errorCode, errorMessage);
	}

	RemoveFromRoot();

}


/*---Load Image From File -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadImageFile* URealTimeImportAsyncNodeLoadImageFile::LoadImageFileAsyncNode(ERTIDirectoryType directoryType, FString filePath,
	TextureCompressionSettings compressionSettings, bool cacheTexture, bool SRGB, bool createMipMaps, ERTIERGBFormat rgbFormat, FString eventID) {

	URealTimeImportAsyncNodeLoadImageFile* instance = NewObject<URealTimeImportAsyncNodeLoadImageFile>();

	instance->jobData = new FSRealtimeImportThreadJobData();
	instance->jobData->jobType = ERTIThreadJobType::E_LoadImageFile;
	instance->jobData->eventID = eventID;
	instance->jobData->cacheTexture = cacheTexture;
	instance->jobData->directoryType = directoryType;
	instance->jobData->filePath = filePath;
	instance->jobData->compressionSettings = compressionSettings;
	instance->jobData->SRGB = SRGB;
	instance->jobData->createMipMaps = createMipMaps;
	instance->jobData->rgbFormat = rgbFormat;
	instance->jobData->asyncNodeLoadImageFile = instance;

	instance->AddToRoot();

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadImageFile::Activate() {

	//skip if texture is in cache to avoid race condition
	IFileManager& FileManager = IFileManager::Get();

	FString dir;
	if (jobData->directoryType == ERTIDirectoryType::E_ad) {
		dir = FPaths::ConvertRelativePathToFull(jobData->filePath);
	}
	else {
		FString ProjectDir = FPaths::ProjectDir();
		dir = FPaths::ConvertRelativePathToFull(ProjectDir + jobData->filePath);
	}
	FString cacheID = dir + "_" + FileManager.GetTimeStamp(*dir).ToString();
	FString fileName = FPaths::GetCleanFilename(jobData->filePath);

	if (URealTimeImportImage::getRealTimeImportImage()->textureCache.Find(cacheID) != nullptr) {
		UTexture2D* texture = *(URealTimeImportImage::getRealTimeImportImage()->textureCache.Find(cacheID));
		texture->SRGB = jobData->SRGB;

		jobComplete(texture, fileName, 0, "", jobData->eventID);
		return;
	}

	URealTimeImportBPLibrary::addJobToThread(jobData);
}

void URealTimeImportAsyncNodeLoadImageFile::jobComplete(UTexture2D* texture, FString fileName, int32 errorCode, FString errorMessage, FString eventID) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(texture, fileName, errorCode, errorMessage, eventID);
	}
	else {
		OnFail.Broadcast(texture, fileName, errorCode, errorMessage, eventID);
	}

	RemoveFromRoot();
}


/*---Load Image From Bytes -------------------------------------------------------------------------------------------------------------*/

URealTimeImportAsyncNodeLoadImageBytes* URealTimeImportAsyncNodeLoadImageBytes::LoadImageBytesAsyncNode(FString name, TArray<uint8> bytes,
	TextureCompressionSettings compressionSettings, bool cacheTexture, bool SRGB, bool createMipMaps, ERTIERGBFormat rgbFormat, FString eventID) {


	URealTimeImportAsyncNodeLoadImageBytes* instance = NewObject<URealTimeImportAsyncNodeLoadImageBytes>();

	//skip if texture is in cache to avoid race condition
	FString cacheID = name + "_" + FString::FromInt(bytes.Num());
	if (URealTimeImportImage::getRealTimeImportImage()->textureCache.Find(cacheID) != nullptr) {
		UTexture2D* texture = *(URealTimeImportImage::getRealTimeImportImage()->textureCache.Find(cacheID));
		texture->SRGB = SRGB;
		instance->jobComplete(texture, 0, "", eventID);
		return instance;
	}


	instance->jobData = new FSRealtimeImportThreadJobData();
	instance->jobData->jobType = ERTIThreadJobType::E_LoadImageBytes;
	instance->jobData->eventID = eventID;
	instance->jobData->cacheTexture = cacheTexture;
	instance->jobData->name = name;
	instance->jobData->bytes = bytes;
	instance->jobData->compressionSettings = compressionSettings;
	instance->jobData->SRGB = SRGB;
	instance->jobData->createMipMaps = createMipMaps;
	instance->jobData->rgbFormat = rgbFormat;
	instance->jobData->asyncNodeLoadImageBytes = instance;

	instance->AddToRoot();

	//The node is only visible in Blueprints if the function is declared in a UBlueprintAsyncActionBase class. 
	//Therefore an instance of itself is created here.
	return instance;
}

void URealTimeImportAsyncNodeLoadImageBytes::Activate() {
	URealTimeImportBPLibrary::addJobToThread(jobData);
}

void URealTimeImportAsyncNodeLoadImageBytes::jobComplete(UTexture2D* texture, int32 errorCode, FString errorMessage, FString eventID) {

	if (errorCode == 0) {
		OnSuccess.Broadcast(texture, errorCode, errorMessage, eventID);
	}
	else {
		OnFail.Broadcast(texture, errorCode, errorMessage, eventID);
	}

	RemoveFromRoot();
}


/*---File Dialog-------------------------------------------------------------------------------------------------------------*/

URTIFileDialogAsyncEvent* URTIFileDialogAsyncEvent::openFileDialogAsyncEvent(ERTIFilaDialogType type, 
	ERTIFilaDialogInitDirType initialDirectoryType, FString initialDirectory,
	FString filter, FString title, bool multiSelect)
{
	URTIFileDialogAsyncEvent* instance = NewObject<URTIFileDialogAsyncEvent>();
	instance->AddToRoot();
	instance->type = type;
	instance->initialDirectoryType = initialDirectoryType;
	instance->initialDirectory = initialDirectory;
	instance->filter = filter;
	instance->title = title;
	instance->multiSelect = multiSelect;
	return instance;
}




void URTIFileDialogAsyncEvent::Activate() {
	
#if PLATFORM_WINDOWS
	fileDialogResultData.Empty();

	if (powershellProcessFileDialog != nullptr) {
		powershellProcessFileDialog->Cancel(true);
		powershellProcessFileDialog->Stop();
		powershellProcessFileDialog->Exit();
		delete powershellProcessFileDialog;
		powershellProcessFileDialog = nullptr;
	}

	FString multiSelectCommand = "";
	if (multiSelect) {
		multiSelectCommand = "Multiselect = $true;";
	}
	FString titleCommand = "Title = '"+title+"';";

	FString powerShellCommandFileDialog = "Add-Type -AssemblyName System.Windows.Forms;";

	if (type == ERTIFilaDialogType::E_file){
		powerShellCommandFileDialog +="$FileBrowser = New-Object System.Windows.Forms.OpenFileDialog -Property @{ InitialDirectory = ";
		if (initialDirectoryType == ERTIFilaDialogInitDirType::E_folder_name) {
			powerShellCommandFileDialog += "[Environment]::GetFolderPath('" + initialDirectory + "') ;";
		}
		else {
			powerShellCommandFileDialog += "'" + initialDirectory + "' ;";
		}
		powerShellCommandFileDialog += multiSelectCommand+titleCommand+"Filter = '" + filter + "'};$null = $FileBrowser.ShowDialog();$FileBrowser.FileNames;";
	}
	else {
		powerShellCommandFileDialog += "$FileBrowser = New-Object System.Windows.Forms.FolderBrowserDialog;";
		if (initialDirectoryType == ERTIFilaDialogInitDirType::E_folder_name) {
			powerShellCommandFileDialog += "$FileBrowser.RootFolder = '" + initialDirectory + "' ;";
		}
		else {
			powerShellCommandFileDialog += "$FileBrowser.SelectedPath = '" + initialDirectory + "' ;";
		}
		powerShellCommandFileDialog += "$null = $FileBrowser.ShowDialog();$FileBrowser.SelectedPath;";
	}

	powershellProcessFileDialog = new FInteractiveProcess("powershell", powerShellCommandFileDialog, true);
	powershellProcessFileDialog->OnOutput().BindUFunction(this, "powershellProcessEventFileDialogOutput");
	powershellProcessFileDialog->OnCompleted().BindUFunction(this, "powershellProcessEventFileDialogCompleted");

	powershellProcessFileDialog->Launch();
	if (!powershellProcessFileDialog->IsRunning()) {
		UE_LOG(LogTemp, Error, TEXT("Can't start FileDilaog Powershell process."));
		fireEvent();
	}
#else
	UE_LOG(LogTemp, Error, TEXT("RealtimeImport Plugin: The file dialog is only available on Windows."));
	fireEvent();
#endif
}

void URTIFileDialogAsyncEvent::powershellProcessEventFileDialogOutput(FString data){
	data = data.TrimStartAndEnd();
	if (data.IsEmpty())
		return;
	fileDialogResultData.Add(data);
}

void URTIFileDialogAsyncEvent::powershellProcessEventFileDialogCompleted(int32 a, bool b)
{
	URTIFileDialogAsyncEvent* self = this;
	AsyncTask(ENamedThreads::GameThread, [self]() {
		self->fireEvent();
		self->cleanProcess();
	});
}

void URTIFileDialogAsyncEvent::cleanProcess(){
	if (powershellProcessFileDialog != nullptr) {
		powershellProcessFileDialog->Cancel(true);
		powershellProcessFileDialog->Stop();
		powershellProcessFileDialog->Exit();
		delete powershellProcessFileDialog;
		powershellProcessFileDialog = nullptr;	
	}
}

void URTIFileDialogAsyncEvent::BeginDestroy(){
	RemoveFromRoot();
	Super::BeginDestroy();
}
void URTIFileDialogAsyncEvent::fireEvent() {
	if (fileDialogResultData.Num() == 0) {
		onCancel.Broadcast(fileDialogResultData);
		return;
	}
	onFinish.Broadcast(fileDialogResultData);
}


/*---Model Animation -------------------------------------------------------------------------------------------------------------*/
//
//URealTimeImportAsyncNodeAnimationModel* URealTimeImportAsyncNodeAnimationModel::getModelAnimationFrameByTime(const TArray<FRTIModelStruct>& modelStructs, float timePosition) {
//
//
//	URealTimeImportAsyncNodeAnimationModel* instance = NewObject<URealTimeImportAsyncNodeAnimationModel>();
//	instance->modelStructs = &modelStructs;
//	instance->timePosition = timePosition;
//
//	//instance->AddToRoot();
//
//
//	return instance;
//}
//
//void URealTimeImportAsyncNodeAnimationModel::Activate() {
//	URealTimeImportMesh::getRealTimeImportMesh()->getModelAnimationFrameByTime(*modelStructs, timePosition, this);
//}


