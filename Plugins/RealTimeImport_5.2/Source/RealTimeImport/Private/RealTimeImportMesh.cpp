// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportMesh.h"


UProceduralMeshComponent* ARTIActor::createNewProceduralMesh(FTransform transform, int64 id, int64 parentID,
	TArray<FVector>& vertices, TArray<int32>& triangles){

	if (pmcMap.Find(id) != nullptr) {
		return *pmcMap.Find(id);
	}
	
	UProceduralMeshComponent* pmc = createNewEmptyProceduralMesh(transform, id, parentID);
	pmc->CreateMeshSection(0, vertices, triangles, TArray<FVector>(), TArray<FVector2D>(), TArray<FColor>(), TArray<FProcMeshTangent>(), false);
	
	//originalVertices.Append(vertices);

	return pmc;
}

UProceduralMeshComponent* ARTIActor::createNewEmptyProceduralMesh(FTransform transform, int64 id, int64 parentID){

	if (pmcMap.Find(id) != nullptr) {
		return *pmcMap.Find(id);
	}

	FString BaseComponentName = FString::Printf(TEXT("rti_UProceduralMeshComponent_%lld"), id);
	FName ComponentName(*BaseComponentName);

	UProceduralMeshComponent* pmc = NewObject<UProceduralMeshComponent>(this, ComponentName);
	pmc->RegisterComponent();
	pmc->SetWorldTransform(transform);
	pmcMap.Add(id, pmc);

	if (parentID == -1 || pmcMap.Find(parentID) == nullptr){
		return pmc;
	}

	UProceduralMeshComponent* pmcParent = *pmcMap.Find(parentID);
	pmc->AttachToComponent(pmcParent,FAttachmentTransformRules::KeepRelativeTransform);

	return pmc;
}

void ARTIActor::connectProceduralMesh(FTransform transform, int64 id, int64 parentID){
	
	if (pmcMap.Find(id) == nullptr || parentID == -1 || pmcMap.Find(parentID) == nullptr) {
		return;
	}


	UProceduralMeshComponent* pmc = *pmcMap.Find(id);
	UProceduralMeshComponent* pmcParent = *pmcMap.Find(parentID);

	pmc->AttachToComponent(pmcParent,FAttachmentTransformRules::KeepRelativeTransform);
}

TArray<FVector> ARTIActor::getVerticesChangesInPercent(int64 id){
	TArray<FVector> changes;

	if (pmcMap.Find(id) == nullptr) {
		return changes;
	}

	UProceduralMeshComponent* pmc = *pmcMap.Find(id);

	if (pmc->GetNumSections() < 1) {
		return changes;
	}

	TArray<FVector> Vertices;
	const FProcMeshSection* Section = pmc->GetProcMeshSection(0);

	const int32 NumOutputVerts = Section->ProcVertexBuffer.Num();


	Vertices.SetNumUninitialized(NumOutputVerts);

	// copy data
	for (int32 VertIdx = 0; VertIdx < NumOutputVerts; VertIdx++)
	{
		const FProcMeshVertex& Vert = Section->ProcVertexBuffer[VertIdx];
		Vertices[VertIdx] = Vert.Position;
	}

	const FTransform ToWorld = pmc->GetComponentTransform();

	//for (FVector& EachVertex : Vertices) {
	//	UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin 1: x: %f y: %f z: %f"), EachVertex.X, EachVertex.Y, EachVertex.Z);
	//	EachVertex = ToWorld.TransformPosition(EachVertex);
	//	UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin 2: x: %f y: %f z: %f"), EachVertex.X, EachVertex.Y, EachVertex.Z);

	//}


	return changes;
}

URealTimeImportMesh* URealTimeImportMesh::realTimeImportMesh;
URealTimeImportMesh::URealTimeImportMesh(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
	realTimeImportMesh = this;

	
	STL = NewObject<URealTimeImportMeshSTL>(URealTimeImportMeshSTL::StaticClass());
	STL->AddToRoot();

	OBJ = NewObject<URealTimeImportMeshOBJ>(URealTimeImportMeshOBJ::StaticClass());
	OBJ->AddToRoot();

	FBX = NewObject<URealTimeImportMeshFBX>(URealTimeImportMeshFBX::StaticClass());
	FBX->AddToRoot();

	glTF = NewObject<URealTimeImportMeshglTF>(URealTimeImportMeshglTF::StaticClass());
	glTF->AddToRoot();
}


URealTimeImportMesh* URealTimeImportMesh::getRealTimeImportMesh() {
	return realTimeImportMesh;
}

void URealTimeImportMesh::LoadMeshFile(ERTIMeshType fileType, ERTIDirectoryType directoryType, FString filePath, bool& success, FString& successMessage,
	TArray<FRTIModelStruct>& modelStructs,
	ERTICoordinateSystem coordinateSystem,
	bool calculateTangents,
	bool cacheTexture,
	bool autoDetectionNormalMap,
	bool useSRGB,
	bool createMipMaps,
	ERTIERGBFormat rgbFormat,
	URealTimeImportAsyncNodeLoadMesh* asyncNode) {

	//vertices.Empty();
	//normals.Empty();
	//UV0.Empty();
	modelStructs.Empty();

	FString dir;
	if (directoryType == ERTIDirectoryType::E_ad) {
		dir = FPaths::ConvertRelativePathToFull(filePath);
	}
	else {
		FString ProjectDir = FPaths::ProjectDir();
		dir = FPaths::ConvertRelativePathToFull(ProjectDir + filePath);
	}

	switch (fileType)
	{
	case ERTIMeshType::E_obj:

		OBJ->LoadOBJFile(
			dir,
			success,
			successMessage,
			modelStructs,
			coordinateSystem,
			calculateTangents,
			cacheTexture,
			autoDetectionNormalMap,
			useSRGB,
			createMipMaps,
			rgbFormat,
			asyncNode);

		break;
	case ERTIMeshType::E_fbx:
	case ERTIMeshType::E_fbxUV:

		FBX->LoadFBXFile(
			fileType,
			dir,
			success,
			successMessage,
			modelStructs,
			coordinateSystem,
			calculateTangents,
			cacheTexture,
			autoDetectionNormalMap,
			useSRGB,
			createMipMaps,
			rgbFormat,
			asyncNode);

		break;
	case ERTIMeshType::E_stl:
	{
		TArray<uint8> stlFileData;
		if (!FFileHelper::LoadFileToArray(stlFileData, *dir)) {
			UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file: %s"), *dir);
			success = false;
			successMessage = "Can't load file: " + dir;
			return;
		}

		if (stlFileData.Num() < 100) {
			UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file (File corrupted): %s"), *dir);
			success = false;
			successMessage = "Can't load file (File corrupted): " + dir;
			return;
		}

		FString stlFileType = byteArrayToFString(stlFileData, 0, 5);

		//is ASCII or Binary type?
		if (stlFileType.Equals("solid")) {
			STL->LoadSTL_ASCIIFile(dir,
				stlFileData,
				coordinateSystem,
				success,
				successMessage,
				modelStructs,
				asyncNode);
		}
		else {
			STL->LoadSTL_BinaryFile(dir,
				stlFileData,
				coordinateSystem,
				success,
				successMessage,
				modelStructs,
				asyncNode);
		}
	}
		break;
	case ERTIMeshType::E_gltf:
		glTF->LoadglTF_File(dir,
			success,
			successMessage,
			modelStructs,
			cacheTexture,
			useSRGB,
			createMipMaps,
			rgbFormat,
			asyncNode);
		break;
	case ERTIMeshType::E_glb:
		glTF->LoadGLB_File(dir,
			success,
			successMessage,
			modelStructs,
			cacheTexture,
			useSRGB,
			createMipMaps,
			rgbFormat,
			asyncNode);
		break;
	}
	
}

FRTIModelStruct URealTimeImportMesh::makeModelStruct(FString name){
	return  URealTimeImportMesh::realTimeImportMesh->makeModelStructNonStatic(name);
}

FRTIModelStruct URealTimeImportMesh::makeModelStructNonStatic(FString name){
	FRTIModelStruct* model = new FRTIModelStruct();
	model->structID = FGuid::NewGuid().ToString();

	if (name.IsEmpty() == false) {
		model->name = name;
	}
	else {
		model->name = FGuid::NewGuid().ToString();
	}

	modelStructCache.Add(model->structID, model);
	return *model;
}

FRTIMeshStruct URealTimeImportMesh::makeMeshStruct(FString meshName, TArray<FVector> vertices, TArray<int32> triangles, TArray<FVector> normals,
	TArray<FVector2D> UV0, UPrimitiveComponent* materialComponent){
	

	FRTIMeshStruct meshStruct = FRTIMeshStruct();
	
	if (triangles.Num() == 0) {
		return meshStruct;
	}

	if (materialComponent != nullptr) {
		UMaterialInterface* material = materialComponent->GetMaterial(0);
		if (material != nullptr){
			UMaterialInstanceDynamic* dynamicMaterial = materialComponent->CreateDynamicMaterialInstance(0, material);
			if (dynamicMaterial != nullptr && dynamicMaterial->TextureParameterValues.Num() > 0) {
				FRTIMaterialStruct materialStruct = FRTIMaterialStruct();
				FString materialName;// = FGuid::NewGuid().ToString();
				dynamicMaterial->GetName(materialName);
				materialStruct.materialName = materialName;
				for (int32 i = 0; i < dynamicMaterial->TextureParameterValues.Num(); i++) {
					FTextureParameterValue textureValue = dynamicMaterial->TextureParameterValues[i];
					if (textureValue.ParameterValue != nullptr) {
						if (UTexture2D* texture2d = Cast<UTexture2D>(textureValue.ParameterValue)) {
							FRTITextureStruct textureStruct = FRTITextureStruct();
							textureStruct.texture = texture2d;
							FString textureName;// = FGuid::NewGuid().ToString();
							texture2d->GetName(textureName);
							textureStruct.textureName = textureName;
							materialStruct.textures.Add(textureName, textureStruct);
						}
					}
				}
				meshStruct.hasMaterialData = true;
				meshStruct.materialData = materialStruct;
			}
		}
	}



	if (meshName.IsEmpty() == false) {
		meshStruct.geometryName = meshName;
	}
	else {
		meshStruct.geometryName = FGuid::NewGuid().ToString();
	}
	
	meshStruct.vertices = vertices;
	meshStruct.triangles = triangles;
	meshStruct.normals = normals;
	meshStruct.UV0 = UV0;
	

	return meshStruct;
}

void URealTimeImportMesh::addMeshStructToModelStruct(FRTIModelStruct modelStruct, FRTIMeshStruct meshStruct){
	modelStruct.meshStructs.Add(meshStruct);

	if (URealTimeImportMesh::realTimeImportMesh->modelStructCache.Find(modelStruct.structID) != nullptr) {
		FRTIModelStruct* m = *URealTimeImportMesh::realTimeImportMesh->modelStructCache.Find(modelStruct.structID);
		m->meshStructs.Add(meshStruct);
	}
}

void URealTimeImportMesh::getGlTF_ExtraJsonData(const FRTIModelStruct& modelStruct, FString& json){
	json.Empty();
	json = modelStruct.gltfExtrasJsonString;
}

void URealTimeImportMesh::saveModelsToFile(UObject* WorldContextObject,UMaterial* exportMaterial,ERTICoordinateSystem coordinateSystem,
	ERTIMeshType fileType, ERTIDirectoryType directoryType, FString filePath,
	bool& success, FString& errorMessage, const TArray<FRTIModelStruct>& modelStructs){

	if (fileType == ERTIMeshType::E_obj) {
		URealTimeImportMesh::realTimeImportMesh->OBJ->saveModelsToFile(WorldContextObject,exportMaterial, coordinateSystem, directoryType, filePath, success, errorMessage, modelStructs);
	}
}



bool URealTimeImportMesh::calculateModelAnimationFrameByTime(TArray<FRTIModelStruct>& modelStructs,URealTimeImportAnimationsFrames*& animationsFrames, float timePosition){
	
	/*if (scale.X + scale.Y + scale.Z == 0) {
		scale.X = scale.Y = scale.Z = 1;
	}*/
	
	

	float timelineEnd = 0;
	for (int32 k = 0; k < modelStructs.Num(); k++){

		//FRTIModelStruct modelStructs[k] = modelStructs[k];

		if (modelStructs[k].animationMaxTimeKey > timelineEnd) {
			timelineEnd = modelStructs[k].animationMaxTimeKey;
		}

		if (modelStructs[k].animationMaxTimeKey == 0) {
			continue;
		}

		

		

		/*if (timePosition == 0) {
			modelStructs[k].animationsTransform = modelStructs[k].relativeTransform;
		}*/

		//bool hasData = false;

		for (int32 i = 0; i < modelStructs[k].animationFrames.Num(); i++){

			//float interpolatedTime = -1;



			FRTIAnimationFrame* frame = modelStructs[k].animationFrames[i];
			frame->id = modelStructs[k].modelID;

			FRTIAnimationFrame* interpolatedFrame = interpolateAnimationsTransform(frame, timePosition,modelStructs[k].modelID, modelStructs[k].animationsTransform);
			if (interpolatedFrame != nullptr) {
				uint64 key = timePosition * 1000;
				if (animationsFrames->interpolatedAnimationFrames.Find(key) == nullptr) {
					TArray<FRTIAnimationFrame> iFrames;
					iFrames.Add(*interpolatedFrame);
					animationsFrames->interpolatedAnimationFrames.Add(key, iFrames);
				}
				else {
					(*animationsFrames->interpolatedAnimationFrames.Find(key)).Add(*interpolatedFrame);
				}

				
				delete interpolatedFrame;
			}
		}

	}


	if (timePosition >= timelineEnd) {
			
		for (int32 k = 0; k < modelStructs.Num(); k++){
			modelStructs[k].animationsTransform = modelStructs[k].relativeTransform;
		}

		return true;
	}
	return false;	
}

bool URealTimeImportMesh::calculateSkeletonAnimationFrameByTime(TArray<FRTIModelStruct>& modelStructs,
	URealTimeImportAnimationsFrames*& animationsFrames, float timePosition){

	if (animationsFrames == nullptr) {
		return false;
	}

	FVector BoxRadius = FVector(1,1,1);
	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FVector2D> UVs;
	TArray<FProcMeshTangent> Tangents;
	UKismetProceduralMeshLibrary::GenerateBoxMesh(BoxRadius, Vertices, Triangles, Normals, UVs, Tangents);
		
	float timelineEnd = 0;
	for (int32 k = 0; k < modelStructs.Num(); k++) {
		if (modelStructs[k].skeleton == nullptr) {
			continue;
		}
		FRTISkeleton* skeleton = modelStructs[k].skeleton;
		
		


		for (int32 i = 0; i < skeleton->bones.Num(); i++) {
			FRTIBone* bone = skeleton->bones[i];

			
			
			//animationsFrames->skeletonPMCActor->createNewProceduralMesh(bone->relativeTransform, bone->id, bone->parent,Vertices, Triangles);
			animationsFrames->skeletonPMCActor->createNewProceduralMesh(bone->relativeTransform, bone->id, bone->parent,bone->vertices, bone->triangles);
						

			if (bone->animationMaxTimeKey > timelineEnd) {
				timelineEnd = bone->animationMaxTimeKey;
			}

			if (bone->animationMaxTimeKey == 0) {
				continue;
			}
//			modelStructs[k].animationMaxTimeKey = timelineEnd;

			/*if (timePosition == 0) {
				bone->animationsTransform = bone->relativeTransform;
			}*/

			for (int32 j = 0; j < bone->animationFrames.Num(); j++) {
				FRTIAnimationFrame* interpolatedFrame = interpolateAnimationsTransform(bone->animationFrames[j], timePosition, bone->id, bone->animationsTransform);
				if (interpolatedFrame != nullptr) {
					uint64 key = timePosition * 1000;
					if (animationsFrames->interpolatedAnimationFrames.Find(key) == nullptr) {
						TArray<FRTIAnimationFrame> iFrames;
						iFrames.Add(*interpolatedFrame);
						animationsFrames->interpolatedAnimationFrames.Add(key, iFrames);
					}
					else {
						(*animationsFrames->interpolatedAnimationFrames.Find(key)).Add(*interpolatedFrame);
					}
					delete interpolatedFrame;
				}
			}
		}

		if (timePosition >= timelineEnd) {
			for (int32 i = 0; i < skeleton->bones.Num(); i++){
				skeleton->bones[i]->animationsTransform = skeleton->bones[i]->relativeTransform;
			}
		}
	}
	if (timePosition >= timelineEnd) {
		return true;
	}

	return false;	
}

FRTIAnimationFrame* URealTimeImportMesh::interpolateAnimationsTransform(FRTIAnimationFrame* frame, float timePosition,int64 id, FTransform& transform){

	bool hasData = false;

	switch (frame->type)
	{
	case ERTIAnimationsFrameType::E_Rotate:
	{
		if (frame->timeKeys.Num() != frame->rotations.Num()) {
			return nullptr;
		}

		/*FRotator rotation;
		FVector location;
		FVector scale = FVector(1,1,1);*/

		int32 j = frame->timeKeys.Num()-2;
		while (j >= 0) {

			if (timePosition >= frame->timeKeys[j]) {
				float percentKey = 0;
				if (timePosition > 0) {
					percentKey = (timePosition - frame->timeKeys[j]) / (frame->timeKeys[j + 1] - frame->timeKeys[j]);
					if (percentKey > 1) {
						percentKey = 1;
					}
				}

				hasData = true;
				//interpolatedTime = frame->timeKeys[j] * percentKey;

				FRotator rotation;
				rotation.Roll = interpolateValuesByPercent(frame->rotations[j].Roll, frame->rotations[j + 1].Roll, percentKey);
				rotation.Pitch = interpolateValuesByPercent(frame->rotations[j].Pitch, frame->rotations[j + 1].Pitch, percentKey);
				rotation.Yaw = interpolateValuesByPercent(frame->rotations[j].Yaw, frame->rotations[j + 1].Yaw, percentKey);

				transform.SetRotation(rotation.Quaternion());

				//frame->transformOnTimeLine.SetRotation(rotation.Quaternion());
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin Animation Rotation(2): x: %f y: %f z: %f"), rotation.Roll, rotation.Pitch, rotation.Yaw);
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin Animation Rotation: timePosition: key: %i  value: %f  value+1: %f timePosition: %f percentKey: %f"), j, frame->timeKeys[j], frame->timeKeys[j + 1], timePosition, percentKey);
				break;
			}
			j--;
		}

	}
	break;
	case ERTIAnimationsFrameType::E_Location:
	{
		if (frame->timeKeys.Num() != frame->locations.Num()) {
			return nullptr;
		}

		/*			FRotator rotation;
		FVector location;
		FVector scale = FVector(1,1,1);*/

		int32 j = frame->timeKeys.Num()-2;
		while (j >= 0) {
			if (timePosition >= frame->timeKeys[j]) {
				float percentKey = 0;
				if (timePosition > 0) {
					percentKey = (timePosition - frame->timeKeys[j]) / (frame->timeKeys[j + 1] - frame->timeKeys[j]);
					if (percentKey > 1) {
						percentKey = 1;
					}
				}

				hasData = true;
				//interpolatedTime = frame->timeKeys[j] * percentKey;

				FVector location;
				location.X = interpolateValuesByPercent(frame->locations[j].X, frame->locations[j + 1].X, percentKey);
				location.Y = interpolateValuesByPercent(frame->locations[j].Y, frame->locations[j + 1].Y, percentKey);
				location.Z = interpolateValuesByPercent(frame->locations[j].Z, frame->locations[j + 1].Z, percentKey);


				transform.SetLocation(location);
				//frame->transformOnTimeLine.SetLocation(location);

				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin Animation Location: timePosition: key: %i  timePosition: %f percentKey: %f value: %f  value+1: %f z: %f"), j, timePosition,percentKey,frame->locations[j].Z, frame->locations[j + 1].Z, location.Z);
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin Animation Location: lastframe: %i time: %f x: %f y: %f z: %f"),interpolatedAnimationFrames.Num(), timePosition, location.X, location.Y, location.Z);
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin Animation Location: timePosition: key: %i  value: %f  value+1: %f timePosition: %f percentKey: %f"), j, frame->timeKeys[j], frame->timeKeys[j + 1], timePosition, percentKey);
				break;
			}
			j--;
		}
	}
	break;

	case ERTIAnimationsFrameType::E_Scale:
	{
		if (frame->timeKeys.Num() != frame->scales.Num()) {
			return nullptr;
		}

		/*FRotator rotation;
		FVector location;
		FVector scale;*/

		int32 j = frame->timeKeys.Num()-2;
		while (j >= 0) {
			if (timePosition >= frame->timeKeys[j]) {
				float percentKey = 0;
				if (timePosition > 0) {
					percentKey = (timePosition - frame->timeKeys[j]) / (frame->timeKeys[j + 1] - frame->timeKeys[j]);
					if (percentKey > 1) {
						percentKey = 1;
					}
				}

				hasData = true;
				//interpolatedTime = frame->timeKeys[j] * percentKey;

				FVector scale;
				scale.X = interpolateValuesByPercent(frame->scales[j].X, frame->scales[j + 1].X, percentKey);
				scale.Y = interpolateValuesByPercent(frame->scales[j].Y, frame->scales[j + 1].Y, percentKey);
				scale.Z = interpolateValuesByPercent(frame->scales[j].Z, frame->scales[j + 1].Z, percentKey);

				transform.SetScale3D(scale);
				//frame->transformOnTimeLine.SetScale3D(scale);
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin Animation Location: x: %f y: %f z: %f"), location.X, location.Y, location.Z);
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin Animation Location: timePosition: key: %i  value: %f  value+1: %f timePosition: %f percentKey: %f"), j, frame->timeKeys[j], frame->timeKeys[j + 1], timePosition, percentKey);
				break;
			}
			j--;
		}
	}

	break;
	}


	if (hasData) {
		FRTIAnimationFrame* newFrame = new FRTIAnimationFrame();
		//newFrame.type = frame->type;
		newFrame->id = id;
		newFrame->interpolatedTime = timePosition;
		newFrame->interpolatedTransform = transform;
		return newFrame;
	}
	return nullptr;
}


void URealTimeImportMesh::getModelAnimationsData(FRTIModelStruct& modelStruct,float timePosition, int64& modelID, FTransform& transform,int32& arrayIndex){
	
	//for (int32 i = modelStruct.interpolatedAnimationFrames.Num()-1; i >=0 ; i--){
	//	if (timePosition >= modelStruct.interpolatedAnimationFrames[i].interpolatedTime) {
	//		modelID = modelStruct.interpolatedAnimationFrames[i].id;
	//		transform = modelStruct.interpolatedAnimationFrames[i].interpolatedTransform;
	//		arrayIndex = i;
	//		return;
	//	}
	//}
}

//void URealTimeImportMesh::getSkeletonAnimationsData(FRTISkeleton& skeleton,float timePosition,float deltaTime, TArray<int64>& modelIDs, TArray<FTransform>& transforms,int32& arrayIndex){
//	modelIDs.Empty();
//	transforms.Empty();
//	float endTime = timePosition + deltaTime;
//	for (int32 i = skeleton.interpolatedAnimationFrames.Num()-1; i >=0 ; i--){
//
//		if (timePosition >= skeleton.interpolatedAnimationFrames[i].interpolatedTime) {
//			//UE_LOG(LogTemp, Warning, TEXT("true: i: %f i+2: %f time: %f"), skeleton.interpolatedAnimationFrames[i].interpolatedTime, skeleton.interpolatedAnimationFrames[i+1].interpolatedTime, timePosition);
//			modelIDs.Add(skeleton.interpolatedAnimationFrames[i].id);
//			transforms.Add(skeleton.interpolatedAnimationFrames[i].interpolatedTransform);
//			arrayIndex = i;
//			if (i < skeleton.interpolatedAnimationFrames.Num() && skeleton.interpolatedAnimationFrames[i+1].interpolatedTime >= endTime) {
//				return;
//			}
//		}
//		else {
//			//UE_LOG(LogTemp, Warning, TEXT("false: i: %f i+2: %f time: %f"), skeleton.interpolatedAnimationFrames[i].interpolatedTime, skeleton.interpolatedAnimationFrames[i+1].interpolatedTime, timePosition);
//		}
//	}
//	
//}


void URealTimeImportMesh::resetAnimationTime(UProceduralMeshComponent* InProcMesh){
	//animationTimePosition = 0;

	//InProcMesh->detach

	TArray<FVector> Vertices;
	const FProcMeshSection* Section = InProcMesh->GetProcMeshSection(0);

	const int32 NumOutputVerts = Section->ProcVertexBuffer.Num();


	Vertices.SetNumUninitialized(NumOutputVerts);

	// copy data
	for (int32 VertIdx = 0; VertIdx < NumOutputVerts; VertIdx++)
	{
		const FProcMeshVertex& Vert = Section->ProcVertexBuffer[VertIdx];
		Vertices[VertIdx] = Vert.Position;
	}

	const FTransform ToWorld = InProcMesh->GetComponentTransform();

	for (FVector& EachVertex : Vertices) {
		UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin 1: x: %f y: %f z: %f"), EachVertex.X, EachVertex.Y, EachVertex.Z);
		EachVertex = ToWorld.TransformPosition(EachVertex);
		UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin 2: x: %f y: %f z: %f"), EachVertex.X, EachVertex.Y, EachVertex.Z);

	}
}


//Copy from the procedural mesh plugin. See UKismetProceduralMeshLibrary::CalculateTangentsForMesh.
void URealTimeImportMesh::calculateTangents(TMap<FVector, TArray<int32>>& overlappingVertices, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector2D>& UVs, 
	TArray<FProcMeshTangent>& TangentsFull)
{
	// Number of triangles
	const int32 NumTris = Triangles.Num() / 3;
	// Number of verts
	const int32 NumVerts = Vertices.Num();

	// Map of vertex to triangles in Triangles array
	TMultiMap<int32, int32> VertToTriMap;
	// Map of vertex to triangles to consider for normal calculation
	TMultiMap<int32, int32> VertToTriSmoothMap;

	// Normal/tangents for each face
	TArray<FVector> FaceTangentX, FaceTangentY, FaceTangentZ;
	FaceTangentX.AddUninitialized(NumTris);
	FaceTangentY.AddUninitialized(NumTris);
	FaceTangentZ.AddUninitialized(NumTris);

	// Iterate over triangles
	for (int TriIdx = 0; TriIdx < NumTris; TriIdx++)
	{
		int32 CornerIndex[3];
		FVector P[3];

		for (int32 CornerIdx = 0; CornerIdx < 3; CornerIdx++)
		{
			// Find vert index (clamped within range)
			int32 VertIndex = FMath::Min(Triangles[(TriIdx * 3) + CornerIdx], NumVerts - 1);

			CornerIndex[CornerIdx] = VertIndex;
			P[CornerIdx] = Vertices[VertIndex];

			// Find/add this vert to index buffer
			//RealtimePlugin This part replaced with a map. Is much faster
			TArray<int32> VertOverlaps = overlappingVertices.FindRef(Vertices[VertIndex]);
				

			// Remember which triangles map to this vert
			VertToTriMap.AddUnique(VertIndex, TriIdx);
			VertToTriSmoothMap.AddUnique(VertIndex, TriIdx);

			// Also update map of triangles that 'overlap' this vert (ie don't match UV, but do match smoothing) and should be considered when calculating normal
			for (int32 OverlapIdx = 0; OverlapIdx < VertOverlaps.Num(); OverlapIdx++)
			{
				// For each vert we overlap..
				int32 OverlapVertIdx = VertOverlaps[OverlapIdx];

				// Add this triangle to that vert
				VertToTriSmoothMap.AddUnique(OverlapVertIdx, TriIdx);

				// And add all of its triangles to us
				TArray<int32> OverlapTris;
				VertToTriMap.MultiFind(OverlapVertIdx, OverlapTris);
				for (int32 OverlapTriIdx = 0; OverlapTriIdx < OverlapTris.Num(); OverlapTriIdx++)
				{
					VertToTriSmoothMap.AddUnique(VertIndex, OverlapTris[OverlapTriIdx]);
				}
			}
		}

		// Calculate triangle edge vectors and normal
		const FVector Edge21 = P[1] - P[2];
		const FVector Edge20 = P[0] - P[2];
		const FVector TriNormal = (Edge21 ^ Edge20).GetSafeNormal();

		// If we have UVs, use those to calc 
		if (UVs.Num() == Vertices.Num())
		{
			const FVector2D T1 = UVs[CornerIndex[0]];
			const FVector2D T2 = UVs[CornerIndex[1]];
			const FVector2D T3 = UVs[CornerIndex[2]];

			FMatrix	ParameterToLocal(
				FPlane(P[1].X - P[0].X, P[1].Y - P[0].Y, P[1].Z - P[0].Z, 0),
				FPlane(P[2].X - P[0].X, P[2].Y - P[0].Y, P[2].Z - P[0].Z, 0),
				FPlane(P[0].X, P[0].Y, P[0].Z, 0),
				FPlane(0, 0, 0, 1)
			);

			FMatrix ParameterToTexture(
				FPlane(T2.X - T1.X, T2.Y - T1.Y, 0, 0),
				FPlane(T3.X - T1.X, T3.Y - T1.Y, 0, 0),
				FPlane(T1.X, T1.Y, 1, 0),
				FPlane(0, 0, 0, 1)
			);

			// Use InverseSlow to catch singular matrices.  Inverse can miss this sometimes.
			const FMatrix TextureToLocal = ParameterToTexture.Inverse() * ParameterToLocal;

			FaceTangentX[TriIdx] = FVector(TextureToLocal.TransformVector(FVector(1, 0, 0)).GetSafeNormal());
			FaceTangentY[TriIdx] = FVector(TextureToLocal.TransformVector(FVector(0, 1, 0)).GetSafeNormal());
		}
		else
		{
			FaceTangentX[TriIdx] = Edge20.GetSafeNormal();
			FaceTangentY[TriIdx] = (FaceTangentX[TriIdx] ^ TriNormal).GetSafeNormal();
		}

		FaceTangentZ[TriIdx] = TriNormal;
	}


	// Arrays to accumulate tangents into
	TArray<FVector> VertexTangentXSum, VertexTangentYSum, VertexTangentZSum;
	VertexTangentXSum.AddZeroed(NumVerts);
	VertexTangentYSum.AddZeroed(NumVerts);
	VertexTangentZSum.AddZeroed(NumVerts);

	// For each vertex..
	for (int VertxIdx = 0; VertxIdx < Vertices.Num(); VertxIdx++)
	{
		// Find relevant triangles for normal
		TArray<int32> SmoothTris;
		VertToTriSmoothMap.MultiFind(VertxIdx, SmoothTris);

		for (int i = 0; i < SmoothTris.Num(); i++)
		{
			int32 TriIdx = SmoothTris[i];
			VertexTangentZSum[VertxIdx] += FaceTangentZ[TriIdx];
		}

		// Find relevant triangles for tangents
		TArray<int32> TangentTris;
		VertToTriMap.MultiFind(VertxIdx, TangentTris);

		for (int i = 0; i < TangentTris.Num(); i++)
		{
			int32 TriIdx = TangentTris[i];
			VertexTangentXSum[VertxIdx] += FaceTangentX[TriIdx];
			VertexTangentYSum[VertxIdx] += FaceTangentY[TriIdx];
		}
	}

	// Finally, normalize tangents and build output arrays
	TArray<FProcMeshTangent> Tangents;
	Tangents.AddUninitialized(NumVerts);

	for (int VertxIdx = 0; VertxIdx < NumVerts; VertxIdx++)
	{
		FVector& TangentX = VertexTangentXSum[VertxIdx];
		FVector& TangentY = VertexTangentYSum[VertxIdx];
		FVector& TangentZ = VertexTangentZSum[VertxIdx];

		TangentX.Normalize();
		TangentZ.Normalize();

		// Use Gram-Schmidt orthogonalization to make sure X is orth with Z
		TangentX -= TangentZ * (TangentZ | TangentX);
		TangentX.Normalize();

		// See if we need to flip TangentY when generating from cross product
		const bool bFlipBitangent = ((TangentZ ^ TangentX) | TangentY) < 0.f;

		Tangents[VertxIdx] = FProcMeshTangent((FVector)TangentX, bFlipBitangent);
	}

	TangentsFull.Append(Tangents);
	Tangents.Empty();
}


uint32 URealTimeImportMesh::byteArrayToInt32(TArray<uint8>& data, uint32 start){
	uint32 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, sizeof(val));

	return val;
}

int64 URealTimeImportMesh::byteArrayToInt64(TArray<uint8>& data, uint32 start) {
	int64 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, sizeof(val));

	return val;
}

TArray<int32> URealTimeImportMesh::byteArrayToInt32Tarray(TArray<uint8>& data, uint32 start, uint32 size){
	TArray<int32> a;
	a.AddUninitialized(size);
	FMemory::Memcpy(a.GetData(), data.GetData() + start, size);
	return a;
}


FString URealTimeImportMesh::byteArrayToFString(TArray<uint8>& data, uint32 start, uint32 size){

	TArray<uint8> fbxCheck;
	fbxCheck.AddUninitialized(size);
	FMemory::Memcpy(fbxCheck.GetData(), data.GetData()+start, size);
	fbxCheck.Add(0x00);// null-terminator

	return FString(UTF8_TO_TCHAR(fbxCheck.GetData()));
}

TArray<uint8> URealTimeImportMesh::cutByteArray(TArray<uint8>& original, uint32 start, uint32 size){
	TArray<uint8> copy;
	copy.AddUninitialized(size);
	FMemory::Memcpy(copy.GetData(), original.GetData() + start, size);
	return copy;
}

double URealTimeImportMesh::parseBytesToDouble(TArray<uint8>& data, uint32 start){

	double val = 0.0;
	FMemory::Memcpy(&val, data.GetData()+start, 8);

	return val;
}

float URealTimeImportMesh::parseBytesToFloat(TArray<uint8>& data, uint32 start){
	float val = 0.0;
	FMemory::Memcpy(&val, data.GetData() + start, 4);

	return val;
}

int32 URealTimeImportMesh::parseBytesToInt32(TArray<uint8>& data, uint32 start){
	int32 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, 4);

	return val;
}

int16 URealTimeImportMesh::parseBytesToInt16(TArray<uint8>& data, uint32 start){
	int16 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, 2);

	return val;
}

int8 URealTimeImportMesh::parseBytesToInt8(TArray<uint8>& data, uint32 start){
	int8 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, 1);

	return val;
}

uint32 URealTimeImportMesh::parseBytesToInt32Unsigned(TArray<uint8>& data, uint32 start){
	uint32 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, 4);

	return val;
}

uint16 URealTimeImportMesh::parseBytesToInt16Unsigned(TArray<uint8>& data, uint32 start){
	uint16 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, 2);

	return val;
}

uint8 URealTimeImportMesh::parseBytesToInt8Unsigned(TArray<uint8>& data, uint32 start){
	uint8 val = 0;
	FMemory::Memcpy(&val, data.GetData() + start, 1);

	return val;
}

float URealTimeImportMesh::interpolateValuesByPercent(float a, float b, float percent){
	
	if (a < b) {
		return ((b - a) * percent) + a;
	}
	
	return((a - b) * (1.f - percent)) + b;
}


//void URealTimeImportMesh::cacheModelStruct(FRTIModelStruct* modelStruct){
//	if (modelStruct == nullptr) {
//		return;
//	}
//
//	if (IsInGameThread()) {
//		modelStructsMap.Add(modelStruct->modelID, modelStruct);
//	}
//	else {
//		AsyncTask(ENamedThreads::GameThread, [modelStruct]() {
//			URealTimeImportMesh::getRealTimeImportMesh()->modelStructsMap.Add(modelStruct->modelID, modelStruct);
//		});
//	}
//	
//}



void URealTimeImportMesh::breakMeshStruct(const FRTIMeshStruct& meshStruct,
	FString& geometryName,
	TArray<int32>& triangles,
	TArray<FVector>& vertices,
	TArray<FVector>& normals,
	TArray<FVector2D>& UV0,
	TArray<FLinearColor>& vertexColors,
	TArray<FProcMeshTangent>& tangents,
	FRTIMaterialStruct& materialStruct) {

	geometryName = meshStruct.geometryName;
	triangles = meshStruct.triangles;
	vertices = meshStruct.vertices;
	normals = meshStruct.normals;
	UV0 = meshStruct.UV0;
	vertexColors = meshStruct.vertexColors;
	tangents = meshStruct.tangents;
	materialStruct = meshStruct.materialData;
}


void URealTimeImportMesh::breakMaterialStruct(const FRTIMaterialStruct& materialData,
	bool& hasTexture,
	FString& materialName,
	FString& textureName,
	TArray<FRTITextureStruct>& textures,
	FColor& ambient,
	FColor& diffuse,
	FColor& specular,
	FColor& emissive,
	FColor& transparent,
	FColor& reflection,
	float& specularExponent,
	float& dissolved,
	float& dissolvedInverted,
	float& emissiveFactor,
	float& ambientFactor,
	float& diffuseFactor,
	float& bumpFactor,
	float& transparencyFactor,
	float& displacementFactor,
	float& vectorDisplacementFactor,
	float& specularFactor,
	float& shininessExponent,
	float& reflectionFactor,
	float& metallicFactor,
	float& roughnessFactor,
	float& indexofRefraction,
	int32& illuminationModelNumber) {

	textures.Empty();

	hasTexture = !materialData.isEmpty;
	materialName = materialData.materialName;
	textureName = materialData.textureName;
	materialData.textures.GenerateValueArray(textures);

	ambient = materialData.ambient;
	diffuse = materialData.diffuse;
	specular = materialData.specular;
	emissive = materialData.emissive;
	transparent = materialData.transparent;
	reflection = materialData.reflection;
	specularExponent = materialData.specularExponent;
	dissolved = materialData.dissolved;
	dissolvedInverted = materialData.dissolvedInverted;
	emissiveFactor = materialData.emissiveFactor;
	ambientFactor = materialData.ambientFactor;
	diffuseFactor = materialData.diffuseFactor;
	bumpFactor = materialData.bumpFactor;
	transparencyFactor = materialData.transparencyFactor;
	displacementFactor = materialData.displacementFactor;
	vectorDisplacementFactor = materialData.vectorDisplacementFactor;
	specularFactor = materialData.specularFactor;
	shininessExponent = materialData.shininessExponent;
	reflectionFactor = materialData.reflectionFactor;

}


void URealTimeImportMesh::breakTextureStruct(const FRTITextureStruct& textureData, FString& textureName, UTexture2D*& texture, ERTITextureType& textureType,
	FString& textureTypeString,
	float& scalingU,
	float& scalingV) {

	textureName = textureData.textureName;
	texture = textureData.texture;
	textureType = textureData.textureType;
	textureTypeString = textureData.textureTypeString;
	scalingU = textureData.scalingU;
	scalingV = textureData.scalingV;
}



void URealTimeImportMesh::breakModelStruct(const FRTIModelStruct& modelStruct,
	int64& modelID,FString& name, FTransform& relativeTransform, TArray<FRTIMeshStruct>& meshStructs, 
	bool& hasParent, int64& parentModelID, TArray<int64>& childrenModelIDs,ERTIModelType& modelType,	
	bool& hasSkeleton,	FRTISkeleton& skeleton,
	TArray<FRTIAnimationFrame*>& animationFrames) {

	meshStructs.Empty();
	childrenModelIDs.Empty();

	modelID = modelStruct.modelID;
	meshStructs = modelStruct.meshStructs;
	name = modelStruct.name;
	relativeTransform = modelStruct.relativeTransform;
	parentModelID = modelStruct.parent;
	childrenModelIDs = modelStruct.children;
	modelType = modelStruct.modelType;
	animationFrames = modelStruct.animationFrames;

	if (parentModelID == -1) {
		hasParent = false;
	}
	else {
		hasParent = true;
	}

	if (modelStruct.skeleton == nullptr) {
		skeleton = FRTISkeleton();
	}
	else {
		skeleton = *modelStruct.skeleton;
		hasSkeleton = true;
	}

}

