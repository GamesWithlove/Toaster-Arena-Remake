// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportMeshFBX.h"


URealTimeImportMeshFBX::URealTimeImportMeshFBX(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
}


void URealTimeImportMeshFBX::LoadFBXFile(ERTIMeshType fileType, FString dir, bool& success, FString& successMessage,
	TArray<FRTIModelStruct>& modelStructs, ERTICoordinateSystem coordinateSystem,
	bool calculateTangents, bool cacheTexture,bool autoDetectionNormalMap, bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat,
	URealTimeImportAsyncNodeLoadMesh* asyncNode) {

	//one second = 10000000 ticks
	uint64 duration =FDateTime::Now().GetTicks();

	TArray<uint8> fbxFileData;
	if (!FFileHelper::LoadFileToArray(fbxFileData, *dir)) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file: %s"), *dir);
		success = false;
		successMessage = "Can't load file: " + dir;
		return;
	}

	if (fbxFileData.Num() < 1024) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: FBX file corrupted (0). %s"), *dir);
		success = false;
		successMessage = "FBX file corrupted (0): " + dir;
		return;
	}




	//https://code.blender.org/2013/08/fbx-binary-file-format-specification/
	//https://banexdevblog.wordpress.com/2014/06/23/a-quick-tutorial-about-the-fbx-ascii-format/
	//https://gist.github.com/AndreaCatania/da81840f5aa3b2feedf189e26c5a87e6

	//fbx type 
	FString fbxType = URealTimeImportMesh::byteArrayToFString(fbxFileData, 0, 20);

	if (fbxType.Equals("Kaydara FBX Binary  ") == false) {
		UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: Only FBX files in binary format are supported. %s"), *dir);
		success = false;
		successMessage = "Only FBX files in binary format are supported: " + dir;
		return;
	}



	//fbx version
	int32 fbxVersion = URealTimeImportMesh::byteArrayToInt32(fbxFileData, 23);

	if (fbxVersion != 7700 && fbxVersion != 7600 && fbxVersion != 7500 && fbxVersion != 7400 /*&& fbxVersion != 7300 && fbxVersion != 7200 && fbxVersion != 7100*/) {
		UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: Only FBX files with version 7400, 7500, 7600, 7700 (7.4, 7.5, 7.6, 7.7) are supported. Your FBX version: %i %s"), fbxVersion, *dir);
		success = false;
		successMessage = "Only FBX files with version 7400, 7500, 7600, 7700 (7.4, 7.5, 7.6, 7.7) are supported. Your FBX version: " + FString::FromInt(fbxVersion);
		return;
	}


	UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: FBX (binary) Version: %i"), fbxVersion);

	bool flipUV_Y = false;
	if (fileType == ERTIMeshType::E_fbxUV) {
		flipUV_Y = true;
	}

	FRTIFBXConnections fbxConnections;
	uint32 dataPosition = 27;

	uint32 endData = fbxFileData.Num() - 4;
	do {
		dataPosition = parseFbxBinaryData(success, successMessage, fbxFileData, dataPosition, fbxConnections, fbxVersion, coordinateSystem, dir, flipUV_Y);
		
	} while (dataPosition && success && dataPosition < endData);

	if (!success) {
		return;
	}

	int32 triangleCount = 0;
	int32 verticesCount = 0;
	int32 normalsCount = 0;
	int32 UV0Count = 0;
	int32 vertexColorsCount = 0;
	int32 tangentsCount = 0;
	int32 triangulatedFacesCount = 0;

	TMap<FLoadImageBytesThread*, FRTIFBXVideoStruct*> textureThreads;
	TMap<FString, bool> textureCache;
	TArray<FRTIModelStruct> unsorted;
	TArray<FVector> vertices;
	TArray<FVector> normals;
	TArray<FVector2D> UV0;
	TArray<FLinearColor> vertexColors;
	TArray<FProcMeshTangent> tangents;


	//reorder fbx structs into structs for users and merge textures,materials,meshes and models. 
	float modelIterator = 0;
	float modelCount = fbxConnections.model.Num();
	int32 textureIterator = 0;
	int32 textureCount = fbxConnections.texture.Num();

	for (auto& element : fbxConnections.model) {

		
		if (URealTimeImportBPLibrary::getRealTimeImportTarget()->cancelMeshLoad == true) {
			success = false;
			successMessage = "Mesh import canceled by the user.";
			break;
		}	


		FRTIFBXModelStruct* FBXmodelStruct = element.Value;
		FRTIFBXGeometryStruct* geometryStruct = FBXmodelStruct->geometryStruct;
		
		
		vertices.Empty();
		normals.Empty();
		UV0.Empty();
		vertexColors.Empty();
		tangents.Empty();
		

		FRTIModelStruct modelStruct =  FRTIModelStruct();
		modelStruct.name = FBXmodelStruct->name;
		modelStruct.modelID = FBXmodelStruct->fbxID;
		modelStruct.parent = FBXmodelStruct->parent;
		modelStruct.children.Append(FBXmodelStruct->children);

		modelStruct.relativeTransform = FBXmodelStruct->relativeTransform;


		//roll = x cord
		//pitch = y front
		// yaw = z up

		//set rotation
		FRotator rotation;
		switch (fbxConnections.UpAxis)
		{
		case ERTIAxisType::E_Y:
			rotation.Roll = FBXmodelStruct->modelRotationXisValue;
			rotation.Pitch = FBXmodelStruct->modelRotationZisValue;
			rotation.Yaw = -FBXmodelStruct->modelRotationYisValue;
			break;
		default:
		{
			rotation.Roll = FBXmodelStruct->modelRotationXisValue;
			rotation.Pitch = FBXmodelStruct->modelRotationZisValue;
			rotation.Yaw = FBXmodelStruct->modelRotationYisValue;
			//FVector location = FBXmodelStruct->relativeTransform.GetLocation();
			//modelStruct.relativeTransform.SetLocation(FVector(location.X, -location.Z, location.Y));
		}
			break;
		}
	
		

		if (FBXmodelStruct->rotationActive) {

			FRotator preRotation;
			preRotation.Roll = FBXmodelStruct->modelPreRotationXisValue;
			preRotation.Pitch = FBXmodelStruct->modelPreRotationZisValue;
			preRotation.Yaw = FBXmodelStruct->modelPreRotationYisValue;
			

			FQuat q1 = preRotation.Quaternion();
			FQuat q2 = rotation.Quaternion();
			FQuat q3 = q1 * q2;


			//UE_LOG(LogTemp, Warning, TEXT("%s %f %f"),*modelStruct.name, q1.X, (q1.Euler().X));

			modelStruct.relativeTransform.SetRotation(q3);

		}
		else {
			modelStruct.relativeTransform.SetRotation(rotation.Quaternion());
		}



		//The GeometryLocation probably has to be added to the world position of an object at the end. But I don't know the world position. 
		if (FBXmodelStruct->modelGeometryLocationXisSet) {
			//modelStruct.relativeTransform.SetLocation(modelStruct.relativeTransform.GetLocation() + FBXmodelStruct->geometricTransformRTI.GetLocation());
			modelStruct.geometryLocation = FBXmodelStruct->geometricTransformRTI.GetLocation();
			UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: The Model %s has an additional GeometryLocation. I do not know how this can be applied during import. You can read the location with the getGeometryLocation function."),*modelStruct.name);
		}
		
		//Determines whether a mehs has been mirrored.
		//UE_LOG(LogTemp, Warning, TEXT("%s %f"),*modelStruct.name,modelStruct.relativeTransform.GetDeterminant());

		//only in the async function
		if (IsInGameThread() == false) {
			textureThreads.Empty();
			//for (auto& materialElement : FBXmodelStruct->materialStructs) {
			for (int32 m = 0; m < FBXmodelStruct->materialStructs.Num(); m++){

		

				if (URealTimeImportBPLibrary::getRealTimeImportTarget()->cancelMeshLoad == true) {
					success = false;
					successMessage = "Mesh import canceled by the user.";
					break;
				}

				if (FBXmodelStruct->geometryStruct == nullptr) {
					continue;
				}

				FRTIFBXMaterialStruct* materialStruct = FBXmodelStruct->materialStructs[m];

				// create a new Thread for each texture
				for (auto& textureElement : materialStruct->textureStructs) {
					FRTIFBXTextureStruct* textureStruct = textureElement.Value;

					for (auto& videoElement : textureStruct->videoStructs) {
						FRTIFBXVideoStruct* videoStruct = videoElement.Value;
						if (videoStruct->fbxTextureData.Num() == 0) {
							UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin FBX: Empty Texturestruct: %s"), *videoStruct->filePath);
							continue;
						}

						FString cacheID = FPaths::GetCleanFilename(videoStruct->filePath) + "_" + FString::FromInt(videoStruct->fbxTextureData.Num());


						if (textureCache.Find(cacheID) != nullptr) {
							continue;
						}

						//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin FBX: Cache: %s"), *cacheID);

						textureCache.Add(cacheID, true);

						TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default;
						if (textureStruct->textureType == ERTITextureType::E_bump) {
							compressionSettings = TextureCompressionSettings::TC_Normalmap;
						}

						FLoadImageBytesThread* textureThread = new FLoadImageBytesThread(URealTimeImportImage::getRealTimeImportImage(), cacheID,
							videoStruct->fbxTextureData, FGuid::NewGuid().ToString(), compressionSettings, useSRGB, createMipMaps, rgbFormat,
							false);
						textureThreads.Add(textureThread, videoStruct);
					}
				}

			}
		}


		if (geometryStruct != nullptr) {

			modelStruct.modelType = ERTIModelType::E_mesh;

			//normals
			switch (geometryStruct->normalReferenceInformationType)
			{
			case ERTIReferenceInformationType::E_Direct:
			{
				switch (geometryStruct->normalInformationType)
				{
				case ERTIInformationType::E_ByPolygonVertex:
					normals.Append(geometryStruct->normals);
					break;
				case ERTIInformationType::E_ByVertex:
					for (int32 j = 0; j < geometryStruct->polygonVertexIndexes.Num(); j++) {
						if (geometryStruct->polygonVertexIndexes[j] < 0) {
							normals.Add(geometryStruct->normals[~geometryStruct->polygonVertexIndexes[j]]);
						}
						else {
							normals.Add(geometryStruct->normals[geometryStruct->polygonVertexIndexes[j]]);
						}
					}
					break;
				case ERTIInformationType::E_AllSame:
					UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin (Normals): The FBX information type 'AllSame' is not implemented. Normals are probably incorrect."));
					normals.Append(geometryStruct->normals);
					break;
				case ERTIInformationType::E_ByEdge:
					UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin (Normals): The FBX information type 'ByEdge' is not implemented. Normals are probably incorrect."));
					normals.Append(geometryStruct->normals);
					break;
				case ERTIInformationType::E_ByPolygon:
					UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin (Normals): The FBX information type 'ByPolygon' is not implemented. Normals are probably incorrect."));
					normals.Append(geometryStruct->normals);
					break;
				}
			}
			break;
			case ERTIReferenceInformationType::E_IndexToDirect:
				for (int32 j = 0; j < geometryStruct->normalsIndexes.Num(); j++) {
					if (geometryStruct->normals.Num() > geometryStruct->normalsIndexes[j] && geometryStruct->normalsIndexes[j] >= 0) {
						normals.Add(geometryStruct->normals[geometryStruct->normalsIndexes[j]]);
					}
				}
				break;
			}

			//UVs
			switch (geometryStruct->UVReferenceInformationType)
			{
				case ERTIReferenceInformationType::E_Direct:
				{
					switch (geometryStruct->UVInformationType)
					{
					case ERTIInformationType::E_ByPolygonVertex:
						UV0.Append(geometryStruct->UV0);
						break;
					case ERTIInformationType::E_ByVertex:
						for (int32 j = 0; j < geometryStruct->polygonVertexIndexes.Num(); j++) {
							if (geometryStruct->polygonVertexIndexes[j] < 0) {
								UV0.Add(geometryStruct->UV0[~geometryStruct->polygonVertexIndexes[j]]);
							}
							else {
								UV0.Add(geometryStruct->UV0[geometryStruct->polygonVertexIndexes[j]]);
							}
						}
						break;
					case ERTIInformationType::E_AllSame:
						UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin (UV0): The FBX information type 'AllSame' is not implemented. Normals are probably incorrect."));
						UV0.Append(geometryStruct->UV0);
						break;
					case ERTIInformationType::E_ByEdge:
						UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin (UV0): The FBX information type 'ByEdge' is not implemented. Normals are probably incorrect."));
						UV0.Append(geometryStruct->UV0);
						break;
					case ERTIInformationType::E_ByPolygon:
						UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin (UV0): The FBX information type 'ByPolygon' is not implemented. Normals are probably incorrect."));
						UV0.Append(geometryStruct->UV0);
						break;
					}
				}
				break;
			case ERTIReferenceInformationType::E_IndexToDirect:
				for (int32 j = 0; j < geometryStruct->UV0Indexes.Num(); j++) {
					if (geometryStruct->UV0.Num() > geometryStruct->UV0Indexes[j] && geometryStruct->UV0Indexes[j] >= 0) {
						UV0.Add(geometryStruct->UV0[geometryStruct->UV0Indexes[j]]);
					}
				}
				break;
			}


			//vertex colors
			switch (geometryStruct->VertexColorReferenceInformationType)
			{
			case ERTIReferenceInformationType::E_Direct:
			{
				switch (geometryStruct->VertexColorInformationType)
				{
				case ERTIInformationType::E_ByPolygonVertex:
					vertexColors.Append(geometryStruct->vertexColors);
					break;
				case ERTIInformationType::E_ByVertex:
					for (int32 j = 0; j < geometryStruct->polygonVertexIndexes.Num(); j++) {
						if (geometryStruct->polygonVertexIndexes[j] < 0) {
							vertexColors.Add(geometryStruct->vertexColors[~geometryStruct->polygonVertexIndexes[j]]);
						}
						else {
							vertexColors.Add(geometryStruct->vertexColors[geometryStruct->polygonVertexIndexes[j]]);
						}
					}
					break;
				case ERTIInformationType::E_AllSame:
					UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin (vertexColors): The FBX information type 'AllSame' is not implemented. Normals are probably incorrect."));
					vertexColors.Append(geometryStruct->vertexColors);
					break;
				case ERTIInformationType::E_ByEdge:
					UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin (vertexColors): The FBX information type 'ByEdge' is not implemented. Normals are probably incorrect."));
					vertexColors.Append(geometryStruct->vertexColors);
					break;
				case ERTIInformationType::E_ByPolygon:
					UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin (vertexColors): The FBX information type 'ByPolygon' is not implemented. Normals are probably incorrect."));
					vertexColors.Append(geometryStruct->vertexColors);
					break;
				}
			}
				break;
			case ERTIReferenceInformationType::E_IndexToDirect:
				for (int32 j = 0; j < geometryStruct->vertexColorsIndexes.Num(); j++) {
					vertexColors.Add(geometryStruct->vertexColors[geometryStruct->vertexColorsIndexes[j]]);
				}
				break;
			}


			//materials
			{

				//only in the async function
				if (IsInGameThread() == false) {
					//wait for all texture threads;
					while (textureThreads.Num() > 0) {
						int finishedThreads = 0;
						for (auto& textureThreadElement : textureThreads) {
							if (textureThreadElement.Key->hasFinished) {
								textureThreadElement.Value->texture = textureThreadElement.Key->texture;

								finishedThreads++;

								if (asyncNode != nullptr && textureThreadElement.Key->isCached == false) {

									textureIterator++;
									float percent = (float)textureIterator / (float)textureCount * 100;
									AsyncTask(ENamedThreads::GameThread, [asyncNode, percent]() {
										if (asyncNode != nullptr) {
											asyncNode->setMaterialProgress(percent);
										}
										});
								}
							}
						}

						if (finishedThreads == textureThreads.Num()) {
							for (auto& textureThreadElement : textureThreads) {
								delete textureThreadElement.Key;
								textureThreadElement.Key = nullptr;
							}
							textureThreads.Empty();
							break;
						}
						else {
							FPlatformProcess::Sleep(0.001);
						}
					}
				}


				int32 materialStructsIterator = 0;
				//for (auto& materialElement : FBXmodelStruct->materialStructs) {
				for (int32 m = 0; m < FBXmodelStruct->materialStructs.Num(); m++){

					if (URealTimeImportBPLibrary::getRealTimeImportTarget()->cancelMeshLoad == true) {
						success = false;
						successMessage = "Mesh import canceled by the user.";
						break;
					}

					//The procedural component in UE allows only one material. 
					//Therefore we have to split the mesh.

					FRTIMeshStruct meshStruct = FRTIMeshStruct();

					if (FBXmodelStruct->geometryStruct == nullptr) {
						continue;
					}


					FRTIFBXMaterialStruct* materialStruct = FBXmodelStruct->materialStructs[m];
					FRTIMaterialStruct meshMaterialStruct;

					meshMaterialStruct.materialName = materialStruct->name;

					//fbx default values
					meshMaterialStruct.ambient = FColor(51, 51, 51, 1);
					meshMaterialStruct.diffuse = FColor(204, 204, 204, 1);
					meshMaterialStruct.specular = FColor(51, 51, 51, 1);

					if (materialStruct->diffuse.Num() == 3) {
						meshMaterialStruct.diffuse = FColor(materialStruct->diffuse[0], materialStruct->diffuse[1], materialStruct->diffuse[2]);
						meshStruct.materialData = meshMaterialStruct;
					}
					if (materialStruct->ambient.Num() == 3) {
						meshMaterialStruct.ambient = FColor(materialStruct->ambient[0], materialStruct->ambient[1], materialStruct->ambient[2]);
						meshStruct.materialData = meshMaterialStruct;
					}
					if (materialStruct->specular.Num() == 3) {
						meshMaterialStruct.specular = FColor(materialStruct->specular[0], materialStruct->specular[1], materialStruct->specular[2]);
						meshStruct.materialData = meshMaterialStruct;
					}
					if (materialStruct->emissive.Num() == 3) {
						meshMaterialStruct.emissive = FColor(materialStruct->emissive[0], materialStruct->emissive[1], materialStruct->emissive[2]);
						meshStruct.materialData = meshMaterialStruct;
					}
					if (materialStruct->transparent.Num() == 3) {
						meshMaterialStruct.transparent = FColor(materialStruct->transparent[0], materialStruct->transparent[1], materialStruct->transparent[2]);
						meshStruct.materialData = meshMaterialStruct;
					}
					if (materialStruct->reflection.Num() == 3) {
						meshMaterialStruct.reflection = FColor(materialStruct->reflection[0], materialStruct->reflection[1], materialStruct->reflection[2]);
						meshStruct.materialData = meshMaterialStruct;
					}


					meshMaterialStruct.emissiveFactor = materialStruct->emissiveFactor;
					meshMaterialStruct.ambientFactor = materialStruct->ambientFactor;
					meshMaterialStruct.diffuseFactor = materialStruct->diffuseFactor;
					meshMaterialStruct.bumpFactor = materialStruct->bumpFactor;
					meshMaterialStruct.transparencyFactor = materialStruct->transparencyFactor;
					meshMaterialStruct.displacementFactor = materialStruct->displacementFactor;
					meshMaterialStruct.vectorDisplacementFactor = materialStruct->vectorDisplacementFactor;
					meshMaterialStruct.specularFactor = materialStruct->specularFactor;
					meshMaterialStruct.shininessExponent = materialStruct->shininessExponent;
					meshMaterialStruct.reflectionFactor = materialStruct->reflectionFactor;


					for (auto& textureElement : materialStruct->textureStructs) {
						FRTIFBXTextureStruct* textureStruct = textureElement.Value;

						for (auto& videoElement : textureStruct->videoStructs) {
							FRTIFBXVideoStruct* videoStruct = videoElement.Value;
							if (videoStruct->fbxTextureData.Num() == 0) {
								UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin FBX: Empty Texturestruct: %s"), *videoStruct->filePath);
								continue;
							}
							
							//only in the gamethread function
							if (IsInGameThread() == true) {

								FRTITextureStruct meshTextureStruct;

								meshTextureStruct.textureName = FPaths::GetCleanFilename(videoStruct->filePath);
								meshTextureStruct.textureType = textureStruct->textureType;
								meshTextureStruct.textureTypeString = textureStruct->textureTypeString;
								meshTextureStruct.scalingU = textureStruct->scalingU;
								meshTextureStruct.scalingV = textureStruct->scalingV;

								TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default;
								if (textureStruct->textureType == ERTITextureType::E_bump) {
									compressionSettings = TextureCompressionSettings::TC_Normalmap;
								}


								int32 errorCode = 0;
								FString errorMessage = FString();
								bool isCached = URealTimeImportImage::getRealTimeImportImage()->LoadImageBytes(meshTextureStruct.textureName, videoStruct->fbxTextureData, meshTextureStruct.texture, errorCode, errorMessage, cacheTexture, compressionSettings, useSRGB, createMipMaps, rgbFormat);


								if (errorCode != 0) {
									UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin FBX: Error %i on loading the texture: %s"), errorCode, *errorMessage);
								}
								else {
									if (meshStruct.hasMaterialData == false) {
										meshMaterialStruct.isEmpty = false;
										meshStruct.materialData = meshMaterialStruct;
										meshStruct.hasMaterialData = true;
									}

									meshStruct.materialData.textures.Add(meshTextureStruct.textureName + "_" + FString::FromInt(textureStruct->fbxID), meshTextureStruct);
								}
							}
							else {
								FRTITextureStruct meshTextureStruct;

								meshTextureStruct.texture = videoStruct->texture;
								meshTextureStruct.textureName = FPaths::GetCleanFilename(videoStruct->filePath);
								meshTextureStruct.textureType = textureStruct->textureType;
								meshTextureStruct.textureTypeString = textureStruct->textureTypeString;
								meshTextureStruct.scalingU = textureStruct->scalingU;
								meshTextureStruct.scalingV = textureStruct->scalingV;

								if (meshStruct.hasMaterialData == false) {
									meshMaterialStruct.isEmpty = false;
									meshStruct.materialData = meshMaterialStruct;
									meshStruct.hasMaterialData = true;
								}

								meshStruct.materialData.textures.Add(meshTextureStruct.textureName + "_" + FString::FromInt(textureStruct->fbxID), meshTextureStruct);
							}
						}
					}
					modelStruct.meshStructs.Add(meshStruct);
					materialStructsIterator++;
				}
			}

			//Mesh without materials?
			if (modelStruct.meshStructs.Num() == 0) {
				FRTIMeshStruct meshStruct = FRTIMeshStruct();
				modelStruct.meshStructs.Add(meshStruct);
			}

			//vertices (triangles)
			{

				int32 faceIterator = 0;
				TMap<int32, TArray<int32>> faceMap;//mesh split. we need the faces
				TMap<FVector, TArray<int32>> overlappingVertices;
				TArray<int32> maintriangles;
				TArray<int32> tempVerticesArrayPosition;

				float percentStart = modelIterator / modelCount * 100;
				float percentEnd = (modelIterator+1) / modelCount * 100;
				float progressStepMax = 100;
				float progressPercentStepSize = (percentEnd - percentStart) / progressStepMax;
				int32 progressStepIndexSize = geometryStruct->polygonVertexIndexes.Num() / progressStepMax;
				int32 progressStepPosition = -1;
				float progressPercentStepPosition = 0;
				
				maintriangles.Reserve(geometryStruct->polygonVertexIndexes.Num());

				for (int32 j = 0; j < geometryStruct->polygonVertexIndexes.Num(); j++) {

					if (progressStepPosition <= j && asyncNode != nullptr) {
						
						progressStepPosition += progressStepIndexSize;
						progressPercentStepPosition += progressPercentStepSize;

						float percent = percentStart += progressPercentStepSize;
						
						AsyncTask(ENamedThreads::GameThread, [asyncNode,percent]() {
							if (asyncNode != nullptr) {
								asyncNode->setProgress(percent);
								//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: subpercent: %f"),percent);
							}
						});
						
					}

					if (geometryStruct->polygonVertexIndexes[j] < 0) {

						TArray<int32> triangles;

						vertices.Add(geometryStruct->vertices[~geometryStruct->polygonVertexIndexes[j]]);
						tempVerticesArrayPosition.Add(vertices.Num() - 1);

						if (tempVerticesArrayPosition.Num() >= 3) {
							if (tempVerticesArrayPosition.Num() == 3) {
								if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
									triangles.Add(tempVerticesArrayPosition[1]);
									triangles.Add(tempVerticesArrayPosition[2]);
									triangles.Add(tempVerticesArrayPosition[0]);
								}
								else {
									triangles.Add(tempVerticesArrayPosition[2]);
									triangles.Add(tempVerticesArrayPosition[1]);
									triangles.Add(tempVerticesArrayPosition[0]);
								}
							}
							else {
								TriangualteStruct::triangulateFace(triangulatedFacesCount, triangles,tempVerticesArrayPosition,vertices,coordinateSystem);
							}
						}

						tempVerticesArrayPosition.Empty();

						//mesh split
						faceMap.Add(faceIterator, triangles);
						maintriangles.Append(triangles);
						faceIterator++;
					}
					else {

						vertices.Add(geometryStruct->vertices[geometryStruct->polygonVertexIndexes[j]]);
						tempVerticesArrayPosition.Add(vertices.Num() - 1);
					}

					if (calculateTangents) {
						if (overlappingVertices.Find(vertices.Last()) == nullptr) {
							TArray<int32> overlap;
							overlap.Add(vertices.Num() - 1);
							overlappingVertices.Add(vertices.Last(), overlap);
						}
						else {
							(*overlappingVertices.Find(vertices.Last())).Add(vertices.Num() - 1);
						}
					}
				}

				//mesh split
				if (geometryStruct->materialPolygons.Num() > 0 && modelStruct.meshStructs.Num() > 1) {

					for (int32 i = 0; i < geometryStruct->materialPolygons.Num(); i++) {
						//FRTIMeshStruct* meshStruct = meshStructMap.Find(geometryStruct->materialPolygons[i]);
						int32 materialIndex = geometryStruct->materialPolygons[i];
						if (modelStruct.meshStructs.Num() >= materialIndex) {
							while (modelStruct.meshStructs.Num() <= materialIndex) {
								FRTIMeshStruct meshStruct = FRTIMeshStruct();
								modelStruct.meshStructs.Add(meshStruct);
							}
							if (faceMap.Find(i) != nullptr) {
								modelStruct.meshStructs[materialIndex].triangles.Append(*faceMap.Find(i));
							}
						}
					}
				}
				//just one mesh. no split
				else {

					if (modelStruct.meshStructs.Num() > 0) {
						modelStruct.meshStructs.Last().triangles = maintriangles;
					}
					else {
						UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: Something went wrong. There are triangles but no mesh struct."));
					}
				}

				//tangents
				if (calculateTangents) {
					URealTimeImportMesh::calculateTangents(overlappingVertices, vertices, maintriangles, UV0, tangents);
				}



				overlappingVertices.Empty();
				faceMap.Empty();
				maintriangles.Empty();
			}
		}
		else {
			modelStruct.modelType = ERTIModelType::E_group;
		}





		/*
		FBX files have their own vertices, normals and UVs for each mesh.
		Splitting triangles per mesh leads to much faster creation of meshes in Unreal. However, all other data must be the same.
		Thanks for the hint Anilarion
		*/
		for (int32 i = 0; i < modelStruct.meshStructs.Num(); i++)
		{
			modelStruct.meshStructs[i].vertices = vertices;
			modelStruct.meshStructs[i].normals = normals;
			modelStruct.meshStructs[i].UV0 = UV0;
			modelStruct.meshStructs[i].vertexColors = vertexColors;
			modelStruct.meshStructs[i].tangents = tangents;

			triangleCount += modelStruct.meshStructs[i].triangles.Num() / 3;
		}
		
		
		unsorted.Add(modelStruct);

		//modelStructsMap.Add(modelStruct.modelID, modelStruct);

		verticesCount += vertices.Num();
		normalsCount += normals.Num();
		UV0Count += UV0.Num();
		vertexColorsCount += vertexColors.Num();
		tangentsCount += tangents.Num();

		modelIterator++;
		if (asyncNode != nullptr) {
			float percent = modelIterator / modelCount * 100;
			AsyncTask(ENamedThreads::GameThread, [asyncNode,percent]() {
				if (asyncNode != nullptr) {
					asyncNode->setProgress(percent);
				}
				});
			//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: percent: %f"), percent);
		}

	}

	//It is important that the root models are added to the array first.
	for (int32 i = 0; i < unsorted.Num(); i++){
		if (unsorted[i].parent == -1) {
			modelStructs.Add(unsorted[i]);
		}
	}
	for (int32 i = 0; i < unsorted.Num(); i++){
		if (unsorted[i].parent != -1) {
			modelStructs.Add(unsorted[i]);
		}
	}

	if (asyncNode != nullptr && textureIterator < textureCount) {
		AsyncTask(ENamedThreads::GameThread, [asyncNode]() {
			if (asyncNode != nullptr) {
				asyncNode->setMaterialProgress(100);
			}
		});
	}


	//clean
	textureCache.Empty();
	unsorted.Empty();
	fbxFileData.Empty();

	vertices.Empty();
	normals.Empty();
	UV0.Empty();
	vertexColors.Empty();
	tangents.Empty();

	//meshStructMap.Empty();

	for (auto& element : fbxConnections.model) {
		if (element.Value == nullptr) {
			continue;
		}
		delete element.Value;
		//element.Value = nullptr;
	}
	fbxConnections.model.Empty();

	for (auto& element : fbxConnections.geometry) {
		if (element.Value == nullptr) {
			continue;
		}
		delete element.Value;
		//element.Value = nullptr;
	}
	fbxConnections.geometry.Empty();

	for (auto& element : fbxConnections.material) {
		if (element.Value == nullptr) {
			continue;
		}

		delete element.Value;
		//element.Value = nullptr;
	}
	fbxConnections.material.Empty();


	for (auto& element : fbxConnections.texture) {
		if (element.Value == nullptr) {
			continue;
		}

		delete element.Value;
		//element.Value = nullptr;

	}
	fbxConnections.texture.Empty();

	for (auto& element : fbxConnections.video) {
		if (element.Value == nullptr) {
			continue;
		}

		delete element.Value;
		//element.Value = nullptr;
	}
	fbxConnections.video.Empty();


	if (URealTimeImportBPLibrary::getRealTimeImportTarget()->cancelMeshLoad == true) {
		success = false;
		successMessage = "Mesh import canceled by the user.";
		return;
	}


	if (verticesCount < 3) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Less than 3 vertices found in file. Cancel: %s"), *dir);
		success = false;
		successMessage = "Less than 3 vertices found in file. Cancel: " + dir;
		return;
	}


	if (normalsCount == 0) {
		UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: No normals found in this file. Normals will be automatically created. This can lead to problems with the lighting.: %s"), *dir);
	}

	

	success = true;
	successMessage = "Vertices:" + FString::FromInt(verticesCount) +" Triangles:" + FString::FromInt(triangleCount) 
		+ " UV0:" + FString::FromInt(UV0Count) + " Normals:" +
		FString::FromInt(normalsCount) + " VertexColors:" +
		FString::FromInt(vertexColorsCount)+ " Tangents:" + FString::FromInt(tangentsCount) + " Triangulated Faces:"+ FString::FromInt(triangulatedFacesCount);

	UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: %s"), *successMessage);

	duration = FDateTime::Now().GetTicks() - duration;
	UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: Duration in Milliseconds: %i"), (duration/10000));
}


int32 URealTimeImportMeshFBX::parseFbxBinaryData(bool& success, FString& successMessage, TArray<uint8>& fbxFileData, uint32 dataPosition,
	FRTIFBXConnections& fbxConnections, int32 fbxVersion, ERTICoordinateSystem coordinateSystem, FString dir, bool flipUV_Y) {

	uint32 endOffset = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition);
	//UE_LOG(LogTemp, Error, TEXT("endOffset %i "), endOffset);

	FString name = FString();
	FString nameLast = FString();
	FString subName = FString();
	FString subNameLast = FString();
	TArray<FString> lastStringProperty;


	FRTIFBXGeometryStruct* geometryStruct = nullptr;
	FRTIFBXModelStruct* modelStruct = nullptr;
	FRTIFBXMaterialStruct* materialStruct = nullptr;
	FRTIFBXTextureStruct* textureStruct = nullptr;
	FRTIFBXVideoStruct* videoStruct = nullptr;

	//0 = normals
	//1 = uvs
	//2 = material
	//3 = connections
	//4 = vertex colors
	int32 mode = -1;

	int64 lastFbxID = 0;

	int64 fbxIDKey = -1;
	int64 fbxIDVal = -1;

	int32 aditionalPosition_A = 4;
	int32 aditionalPosition_B = 12;
	int32 aditionalPosition_C = 13;

	if (fbxVersion == 7700 || fbxVersion == 7600 || fbxVersion == 7500) {
		aditionalPosition_A = 8;
		aditionalPosition_B = 24;
		aditionalPosition_C = 25;
	}



	//UE_LOG(LogTemp, Warning, TEXT("endOffset: %i"), endOffset);
	while ((dataPosition + aditionalPosition_C) < endOffset) {
		//UE_LOG(LogTemp, Warning, TEXT("%i < %i"), dataPosition, endOffset);

		if (URealTimeImportBPLibrary::getRealTimeImportTarget()->cancelMeshLoad == true) {
			success = false;
			successMessage = "Mesh import canceled by the user.";
			return 0;
		}

		//ERTIFbxParseMode mode = ERTIFbxParseMode::E_None;

		uint32 numProperties = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + aditionalPosition_A);
		//uint32 PropertyListLength = *(uint32 *)(s+8);
		uint8 nameLength = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + aditionalPosition_B);




		//UE_LOG(LogTemp, Warning, TEXT("numProperties: %i"), numProperties);
		//UE_LOG(LogTemp, Warning, TEXT("nameLength: %i"), nameLength);

		//if (!numProperties && !nameLength) {
		//	dataPosition = endOffset;
		//	break;
		//}

		if (nameLength) {
			nameLast = name;
			name = URealTimeImportMesh::byteArrayToFString(fbxFileData, dataPosition + aditionalPosition_C, nameLength);
			//UE_LOG(LogTemp, Warning, TEXT("name: %s"), *name);

			//if (name.Equals("Geometry")) {
			//	FRTIMeshStruct meshstruct;
			//	meshStructs.Add(meshstruct);
			//}
			if (name.Equals("LayerElementNormal")) {
				mode = 0;
			}
			if (name.Equals("LayerElementUV")) {
				mode = 1;
			}
			if (name.Equals("LayerElementMaterial")) {
				mode = 2;
			}
			if (name.Equals("Connections")) {
				mode = 3;
			}
			if (name.Equals("LayerElementColor")) {
				mode = 4;
			}
			if (name.Equals("GlobalSettings")) {
				mode = 5;
			}
		}
		else {
			name = "";
		}


		dataPosition += aditionalPosition_C + nameLength;


		for (uint32 i = 0; i < numProperties; ++i) {
			uint8 type = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition++);
			//UE_LOG(LogTemp, Warning, TEXT("type: %i %c"), type, TCHAR(type));

			switch (type) {
			case 'c': {
				//unknown				
				uint32 ArrayLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition);
				uint32 Encoding = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 4);
				uint32 CompressedLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 8);
				if (Encoding) {
					dataPosition += 12 + CompressedLen;
				}
				else {
					dataPosition += 12 + (ArrayLen * 1);
				}
				break;
			}
			case 'Y': {
				/*p->Type = FBX_PROPERTY_S16;
				p->Size = 2;
				p->Data = s;*/
				dataPosition += 2;
				break;
			}
			case 'C': {
				/*p->Type = FBX_PROPERTY_BOOL;
				p->Size = 1;
				p->Data = s;*/
				
				++dataPosition;
				break;
			}
			case 'I': {
				/*p->Type = FBX_PROPERTY_S32;
				p->Size = 4;
				p->Data = s;*/

				if (subNameLast.Equals("RotationActive") && modelStruct != nullptr) {
					modelStruct->rotationActive = (bool)URealTimeImportMesh::parseBytesToInt32(fbxFileData, dataPosition);
				}

				if (mode == 5 && lastStringProperty.Num() == 3) {
					//0 = x
					//1 = y
					//2 = z
					if (lastStringProperty[0].Equals("UpAxis")) {
						fbxConnections.UpAxis = (ERTIAxisType)URealTimeImportMesh::parseBytesToInt32(fbxFileData, dataPosition);
					}
					if (lastStringProperty[0].Equals("FrontAxis")) {
						fbxConnections.FrontAxis = (ERTIAxisType)URealTimeImportMesh::parseBytesToInt32(fbxFileData, dataPosition);
					}
					if (lastStringProperty[0].Equals("CoordAxis")) {
						fbxConnections.CoordAxis = (ERTIAxisType)URealTimeImportMesh::parseBytesToInt32(fbxFileData, dataPosition);
					}

					if (lastStringProperty[0].Equals("UpAxisSign")) {
						fbxConnections.UpAxisSign = URealTimeImportMesh::parseBytesToInt32(fbxFileData, dataPosition) == 1 ? true : false;
					}
					if (lastStringProperty[0].Equals("FrontAxisSign")) {
						fbxConnections.FrontAxisSign = URealTimeImportMesh::parseBytesToInt32(fbxFileData, dataPosition) == 1 ? true : false;
					}
					if (lastStringProperty[0].Equals("CoordAxisSign")) {
						fbxConnections.CoordAxisSign = URealTimeImportMesh::parseBytesToInt32(fbxFileData, dataPosition) == 1 ? true : false;
					}

				}

				dataPosition += 4;
				break;
			}
			case 'F': {
				/*p->Type = FBX_PROPERTY_F32;
				p->Size = 4;
				p->Data = s;*/
				dataPosition += 4;
				break;
			}
			case 'D': {
				/*p->Type = FBX_PROPERTY_F64;
				p->Size = 8;
				p->Data = s;*/


				if (lastStringProperty.Num() > 3) {

					int32 lastP = lastStringProperty.Num() - 1;
					/*if ( materialStruct != nullptr) {
						UE_LOG(LogTemp, Warning, TEXT("%s: lastStringProperty[lastP - 1]: %s"),*materialStruct->name, *lastStringProperty[lastP - 1]);
					}*/
					
					//if (lastStringProperty[lastP].StartsWith("A")) {
						
						
						if ((lastStringProperty[lastP - 1].Equals("Color") || lastStringProperty[lastP - 1].Equals("ColorRGB")) && materialStruct != nullptr) {
							if (lastStringProperty[lastP - 2].Equals("DiffuseColor")) {
								materialStruct->diffuse.Add((uint8)((float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition) * 255));
							}
							if (lastStringProperty[lastP - 2].Equals("AmbientColor")) {
								materialStruct->ambient.Add((uint8)((float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition) * 255));
							}
							if (lastStringProperty[lastP - 2].Equals("SpecularColor")) {
								materialStruct->specular.Add((uint8)((float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition) * 255));
							}
							if (lastStringProperty[lastP - 2].Equals("EmissiveColor")) {
								materialStruct->emissive.Add((uint8)((float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition) * 255));
							}
							if (lastStringProperty[lastP - 2].Equals("TransparentColor")) {
								materialStruct->transparent.Add((uint8)((float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition) * 255));
							}
						/*	if (lastStringProperty[lastP - 2].Equals("DisplacementColor")) {
								materialStruct->displacement.Add((uint8)((float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition) * 255));
							}
							if (lastStringProperty[lastP - 2].Equals("VectorDisplacementColor")) {
								materialStruct->vectordisplacement.Add((uint8)((float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition) * 255));
							}*/
							if (lastStringProperty[lastP - 2].Equals("ReflectionColor")) {
								materialStruct->reflection.Add((uint8)((float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition) * 255));
							}
						}

						if (lastStringProperty[lastP - 1].Equals("Number") && materialStruct != nullptr) {
							//UE_LOG(LogTemp, Warning, TEXT("lastStringProperty[lastP - 2] Number: %s %f"), *lastStringProperty[lastP - 2], URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition));
							if (lastStringProperty[lastP - 2].Equals("EmissiveFactor")) {
								materialStruct->emissiveFactor = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
							if (lastStringProperty[lastP - 2].Equals("AmbientFactor")) {
								materialStruct->ambientFactor = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
							if (lastStringProperty[lastP - 2].Equals("DiffuseFactor")) {
								materialStruct->diffuseFactor = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
							if (lastStringProperty[lastP - 2].Equals("BumpFactor")) {
								materialStruct->bumpFactor = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
							if (lastStringProperty[lastP - 2].Equals("TransparencyFactor")) {
								materialStruct->transparencyFactor = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
							if (lastStringProperty[lastP - 2].Equals("DisplacementFactor")) {
								materialStruct->displacementFactor = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
							if (lastStringProperty[lastP - 2].Equals("VectorDisplacementFactor")) {
								materialStruct->vectorDisplacementFactor = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
							if (lastStringProperty[lastP - 2].Equals("SpecularFactor")) {
								materialStruct->specularFactor = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
							if (lastStringProperty[lastP - 2].Equals("ShininessExponent")) {
								materialStruct->shininessExponent = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
							if (lastStringProperty[lastP - 2].Equals("ReflectionFactor")) {
								materialStruct->reflectionFactor = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
							}
						}

						if (lastStringProperty[lastP - 1].Equals("Lcl Translation") && modelStruct != nullptr) {
							if (!modelStruct->modelLocationXisSet) {
								modelStruct->modelLocationXisSet = true;
								modelStruct->relativeTransform.SetLocation(FVector(URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 0, 0));
							}
							else {
								if (!modelStruct->modelLocationYisSet) {
									modelStruct->modelLocationYisSet = true;
									modelStruct->relativeTransform.SetLocation(FVector(modelStruct->relativeTransform.GetLocation().X, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 0));
								}
								else {
									if (!modelStruct->modelLocationZisSet) {
										modelStruct->modelLocationZisSet = true;
										if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
											modelStruct->relativeTransform.SetLocation(FVector(modelStruct->relativeTransform.GetLocation().X, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), modelStruct->relativeTransform.GetLocation().Y));
										}
										else {
											modelStruct->relativeTransform.SetLocation(FVector(modelStruct->relativeTransform.GetLocation().X, modelStruct->relativeTransform.GetLocation().Y, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition)));
										}
									}
								}
							}
						}
						if (lastStringProperty[lastP - 1].Equals("Lcl Scaling") && modelStruct != nullptr) {
							if (!modelStruct->modelScaleXisSet) {
								modelStruct->modelScaleXisSet = true;
								modelStruct->relativeTransform.SetScale3D(FVector(URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 1, 1));
							}
							else {
								if (!modelStruct->modelScaleYisSet) {
									modelStruct->modelScaleYisSet = true;
									modelStruct->relativeTransform.SetScale3D(FVector(modelStruct->relativeTransform.GetScale3D().X, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 1));
								}
								else {
									if (!modelStruct->modelScaleZisSet) {
										modelStruct->modelScaleZisSet = true;
										if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
											modelStruct->relativeTransform.SetScale3D(FVector(modelStruct->relativeTransform.GetScale3D().X, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), modelStruct->relativeTransform.GetScale3D().Y));
										}
										else {
											modelStruct->relativeTransform.SetScale3D(FVector(modelStruct->relativeTransform.GetScale3D().X, modelStruct->relativeTransform.GetScale3D().Y, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition)));
										}
									}
								}
							}
						}
						if (lastStringProperty[lastP - 1].Equals("Lcl Rotation") && modelStruct != nullptr) {
							//UE_LOG(LogTemp, Warning, TEXT("Lcl Rotation"));
							if (!modelStruct->modelRotationXisSet) {
								modelStruct->modelRotationXisSet = true;
								modelStruct->modelRotationXisValue = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
								//modelStruct->relativeTransform.SetRotation(UKismetMathLibrary::Conv_VectorToQuaternion(FVector(URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 0, 0)));
							}
							else {
								if (!modelStruct->modelRotationYisSet) {
									modelStruct->modelRotationYisSet = true;
									modelStruct->modelRotationYisValue = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
																		
									//modelStruct->relativeTransform.SetRotation(UKismetMathLibrary::Conv_VectorToQuaternion(FVector(modelStruct->relativeTransform.GetRotation().X, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 0)));
								}
								else {
									if (!modelStruct->modelRotationZisSet) {
										modelStruct->modelRotationZisSet = true;
										modelStruct->modelRotationZisValue = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
									}
								}
							}
						}
					//}

					//pre rotation
					if (lastStringProperty.Num() > 4) {
						if (lastStringProperty[lastP - 2].StartsWith("PreRotation") && modelStruct != nullptr) {
							//UE_LOG(LogTemp, Warning, TEXT("lastStringProperty[lastP]: %s %f"), *modelStruct->name,URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition));
							if (!modelStruct->modelPreRotationXisSet) {
								modelStruct->modelPreRotationXisSet = true;
								modelStruct->modelPreRotationXisValue = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
								//modelStruct->relativeTransform.SetRotation(UKismetMathLibrary::Conv_VectorToQuaternion(FVector(URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 0, 0)));
							}
							else {
								if (!modelStruct->modelPreRotationYisSet) {
									modelStruct->modelPreRotationYisSet = true;
									modelStruct->modelPreRotationYisValue = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
									
									//modelStruct->relativeTransform.SetRotation(UKismetMathLibrary::Conv_VectorToQuaternion(FVector(modelStruct->relativeTransform.GetRotation().X, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 0)));
								}
								else {
									if (!modelStruct->modelPreRotationZisSet) {
										modelStruct->modelPreRotationZisSet = true;
										modelStruct->modelPreRotationZisValue = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
									}
								}
							}
						}
						//GeometricTranslation
						if (lastStringProperty[lastP - 2].StartsWith("GeometricTranslation") && modelStruct != nullptr) {
							if (!modelStruct->modelGeometryLocationXisSet) {
								modelStruct->modelGeometryLocationXisSet = true;
								modelStruct->geometricTransformRTI.SetLocation(FVector(URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 0, 0));
							}
							else {
								if (!modelStruct->modelGeometryLocationYisSet) {
									modelStruct->modelGeometryLocationYisSet = true;
									modelStruct->geometricTransformRTI.SetLocation(FVector(modelStruct->geometricTransformRTI.GetLocation().X, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), 0));
								}
								else {
									if (!modelStruct->modelGeometryLocationZisSet) {
										modelStruct->modelGeometryLocationZisSet = true;
										if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
											modelStruct->geometricTransformRTI.SetLocation(FVector(modelStruct->geometricTransformRTI.GetLocation().X, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition), modelStruct->geometricTransformRTI.GetLocation().Y));
										}
										else {
											modelStruct->geometricTransformRTI.SetLocation(FVector(modelStruct->geometricTransformRTI.GetLocation().X, modelStruct->geometricTransformRTI.GetLocation().Y, URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition)));
										}
									}
								}
							}
						}
					}

					//texture scaling
					if (lastStringProperty[lastP - 2].Equals("Scaling") && textureStruct != nullptr) {
						float scaling = URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition);
						switch (textureStruct->scalingCounter)
						{
						case 0:
							textureStruct->scalingU = scaling;
							break;
						case 1:
							textureStruct->scalingV = scaling;
							break;
						case 2:
							textureStruct->scalingUnknown = scaling;
							break;
						}
						textureStruct->scalingCounter++;
					}
				}


				dataPosition += 8;
				break;
			}
			case 'L': {
				/*p->Type = FBX_PROPERTY_S64;
				p->Size = 8;
				p->Data = s;*/




				//connections
				if (mode == 3) {
					if (fbxIDKey == -1) {
						fbxIDKey = URealTimeImportMesh::byteArrayToInt64(fbxFileData, dataPosition);
					}
					else {
						if (fbxIDVal == -1) {
							fbxIDVal = URealTimeImportMesh::byteArrayToInt64(fbxFileData, dataPosition);

							if (fbxConnections.video.Find(fbxIDKey) != nullptr) {
								videoStruct = *fbxConnections.video.Find(fbxIDKey);
								if (fbxConnections.texture.Find(fbxIDVal) != nullptr) {
									textureStruct = *fbxConnections.texture.Find(fbxIDVal);
									textureStruct->videoStructs.Add(videoStruct->fbxID, videoStruct);
								}
							}
							else {
								if (fbxConnections.texture.Find(fbxIDKey) != nullptr) {
									textureStruct = *fbxConnections.texture.Find(fbxIDKey);
									if (fbxConnections.material.Find(fbxIDVal) != nullptr) {
										materialStruct = *fbxConnections.material.Find(fbxIDVal);
										materialStruct->textureStructs.Add(textureStruct->fbxID, textureStruct);
									}
								}
								else {
									if (fbxConnections.material.Find(fbxIDKey) != nullptr) {
										materialStruct = *fbxConnections.material.Find(fbxIDKey);
										if (fbxConnections.model.Find(fbxIDVal) != nullptr) {
											modelStruct = *fbxConnections.model.Find(fbxIDVal);
											modelStruct->materialStructs.Add(materialStruct);
										}
									}
									else {
										if (fbxConnections.geometry.Find(fbxIDKey) != nullptr) {
											geometryStruct = *fbxConnections.geometry.Find(fbxIDKey);
											if (fbxConnections.model.Find(fbxIDVal) != nullptr) {
												modelStruct = *fbxConnections.model.Find(fbxIDVal);
												modelStruct->geometryStruct = geometryStruct;
											}
										}
										else {
											//model to model
											if (fbxConnections.model.Find(fbxIDKey) != nullptr && fbxConnections.model.Find(fbxIDVal) != nullptr) {
												//UE_LOG(LogTemp, Warning, TEXT(" Connection Model to Model: Key:%lld Val:%lld"), fbxIDKey, fbxIDVal);
												FRTIFBXModelStruct* child = *fbxConnections.model.Find(fbxIDKey);
												FRTIFBXModelStruct* parent = *fbxConnections.model.Find(fbxIDVal);
												parent->children.Add(fbxIDKey);
												child->parent = fbxIDVal;
											}
										}
									}
								}
							}

							

							//fbxConnections.connectionMap.Add(fbxIDKey, fbxIDVal);
							//
							//if (fbxConnections.connectionMapRevers.Find(fbxIDVal) != nullptr) {
							//	(*fbxConnections.connectionMapRevers.Find(fbxIDVal)).Add(fbxIDKey);
							//}
							//else {
							//	TArray<int64> a;
							//	a.Add(fbxIDKey);
							//	fbxConnections.connectionMapRevers.Add(fbxIDVal, a);
							//}
							//UE_LOG(LogTemp, Error, TEXT(" Connection: Key:%lld Val:%lld"), fbxIDKey, fbxIDVal);
							fbxIDKey = -1;
							fbxIDVal = -1;
						}
					}
				}
				else {
					lastFbxID = URealTimeImportMesh::byteArrayToInt64(fbxFileData, dataPosition);
					//UE_LOG(LogTemp, Error, TEXT("%s :%lld "),*name, lastFbxID);

					if (name.Equals("Geometry")) {
						geometryStruct = new FRTIFBXGeometryStruct();
						geometryStruct->fbxID = lastFbxID;
						//meshStructs.Add(meshStruct);
						fbxConnections.geometry.Add(lastFbxID, geometryStruct);
						//UE_LOG(LogTemp, Error, TEXT("FBX_PROPERTY_S64 Geometry :%lld "), lastFbxID);
					}
					if (name.Equals("Model")) {
						modelStruct = new FRTIFBXModelStruct();
						modelStruct->fbxID = lastFbxID;
						fbxConnections.model.Add(lastFbxID, modelStruct);
						//UE_LOG(LogTemp, Error, TEXT("FBX_PROPERTY_S64 Model :%lld "), lastFbxID);
					}
					if (name.Equals("Material")) {
						materialStruct = new FRTIFBXMaterialStruct();
						materialStruct->fbxID = lastFbxID;
						fbxConnections.material.Add(lastFbxID, materialStruct);
						//UE_LOG(LogTemp, Error, TEXT("FBX_PROPERTY_S64 Material :%lld "), lastFbxID);
					}
					if (name.Equals("Texture")) {
						textureStruct = new FRTIFBXTextureStruct();
						textureStruct->fbxID = lastFbxID;
						fbxConnections.texture.Add(lastFbxID, textureStruct);
						//UE_LOG(LogTemp, Error, TEXT("FBX_PROPERTY_S64 Texture :%lld "), lastFbxID);
					}
					if (name.Equals("Video")) {
						videoStruct = new FRTIFBXVideoStruct();
						videoStruct->fbxID = lastFbxID;
						fbxConnections.video.Add(lastFbxID, videoStruct);
						//UE_LOG(LogTemp, Error, TEXT("FBX_PROPERTY_S64 Video :%lld "), lastFbxID);
					}
				}





				dataPosition += 8;
				break;
			}
			case 'f': {
				/*uint32 ArrayLen = *(uint32*)s;
				uint32 Encoding = *(uint32*)(s + 4);
				uint32 CompressedLen = *(uint32*)(s + 8);*/

				uint32 ArrayLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition);
				uint32 Encoding = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 4);
				uint32 CompressedLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 8);

				if (Encoding) {
					/*				p->Type = FBX_PROPERTY_F32_ARRAY;
									p->Size = ArrayLen * 4;
									p->CompressedSize = CompressedLen;
									p->Compressed = true;
									p->Data = s + 12;*/
					dataPosition += 12 + CompressedLen;
				}
				else {
					//p->Type = FBX_PROPERTY_F32_ARRAY;
					//p->Size = ArrayLen * 4;
					//p->Data = s + 12;
					dataPosition += 12 + (ArrayLen * 4);
				}
				break;
			}
			case 'd': {
				/*uint32 ArrayLen = *(uint32*)s;
				uint32 Encoding = *(uint32*)(s + 4);
				uint32 CompressedLen = *(uint32*)(s + 8);*/

				uint32 arrayLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition);
				uint32 encoding = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 4);
				uint32 compressedLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 8);

				if (encoding && geometryStruct != nullptr) {
					if (geometryStruct != nullptr) {
						if (name.Equals("Vertices")) {
							//UE_LOG(LogTemp, Error, TEXT(" vertices (encoded): %i %i"), arrayLen * 8, compressedLen);
							//p->Type = FBX_PROPERTY_F64_ARRAY;
							//p->Size = arrayLen * 8;
							//p->CompressedSize = CompressedLen;
							//p->Compressed = true;
							//p->Data = s + 12;				


							TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 8, compressedLen);

							uint32 j = 0;
							while (j < arrayLen) {
								FVector vec = FVector();
								vec.X = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
								j++;
								if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
									vec.Z = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
									j++;
									vec.Y = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
									j++;
								}
								else {
									vec.Y = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
									j++;
									vec.Z = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
									j++;
								}
								geometryStruct->vertices.Add(vec);
							}
						}
						if (name.Equals("Normals")) {
							//UE_LOG(LogTemp, Error, TEXT(" normals (encoded): %i %i"), arrayLen * 8, compressedLen);

							TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 8, compressedLen);

							uint32 j = 0;
							while (j < arrayLen) {
								FVector vec = FVector();
								vec.X = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
								j++;
								if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
									vec.Z = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
									j++;
									vec.Y = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
									j++;
								}
								else {
									vec.Y = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
									j++;
									vec.Z = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
									j++;
								}
								geometryStruct->normals.Add(vec);
							}
						}

						if (name.Equals("UV") && geometryStruct->UV0.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT(" UV (encoded): %i"), arrayLen );
							TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 8, compressedLen);

							uint32 j = 0;
							while (j < arrayLen) {

								FVector2D vec = FVector2D();
								vec.X = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
								j++;
								if (flipUV_Y) {
									vec.Y = (float)(URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8)));
									if (vec.Y > 0) {
										vec.Y = 1 - vec.Y;
									}
									else {
										vec.Y = -1 - vec.Y;
									}
								}
								else {
									vec.Y = (float)(URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8)) * (-1));
								}
								
								
								j++;
								geometryStruct->UV0.Add(vec);
							}
						}
						if (name.Equals("Colors") && geometryStruct->vertexColors.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT("Vertex Colors (encoded): %i"), arrayLen);
							TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 8, compressedLen);

							uint32 j = 0;
							while (j < arrayLen) {

								FLinearColor color = FLinearColor();
								color.R = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
								j++;
								color.G = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
								j++;
								color.B = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
								j++;
								color.A = (float)URealTimeImportMesh::parseBytesToDouble(uncompressedContent, (j * 8));
								j++;
								geometryStruct->vertexColors.Add(color);
							}
						}
					}

					dataPosition += 12 + compressedLen;
				}
				else {
					if (geometryStruct != nullptr) {
						if (name.Equals("Vertices")) {
							//UE_LOG(LogTemp, Error, TEXT(" vertices (plain): %i"), arrayLen * 8);

							uint32 j = 0;
							while (j < arrayLen) {
								FVector vec = FVector();
								vec.X = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
								j++;
								if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
									vec.Z = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
									j++;
									vec.Y = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
									j++;
								}
								else {
									vec.Y = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
									j++;
									vec.Z = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
									j++;
								}
								geometryStruct->vertices.Add(vec);
							}
						}
						if (name.Equals("Normals")) {
							//UE_LOG(LogTemp, Error, TEXT(" normals (plain): %i"), arrayLen * 8);

							uint32 j = 0;
							while (j < arrayLen) {
								FVector vec = FVector();
								vec.X = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
								j++;
								if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
									vec.Z = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
									j++;
									vec.Y = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
									j++;
								}
								else {
									vec.Y = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
									j++;
									vec.Z = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
									j++;
								}
								geometryStruct->normals.Add(vec);
							}
						}

						if (name.Equals("UV") && geometryStruct->UV0.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT(" UV (plain): %i"), arrayLen);
							uint32 j = 0;
							while (j < arrayLen) {
								FVector2D vec = FVector2D();
								vec.X = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
								j++;

								if (flipUV_Y) {
									vec.Y = (float)(URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8)));
									if (vec.Y > 0) {
										vec.Y = 1 - vec.Y;
									}
									else {
										vec.Y = -1 - vec.Y;
									}
								}
								else {
									vec.Y = (float)(URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8)) * (-1));
								}
								
							
								j++;
								geometryStruct->UV0.Add(vec);
							}
						}
						if (name.Equals("Colors") && geometryStruct->vertexColors.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT("Vertex Colors (plain): %i"), arrayLen * 8);
							uint32 j = 0;
							while (j < arrayLen) {
								FLinearColor color = FLinearColor();
								color.R = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
								j++;
								color.G = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
								j++;
								color.B = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
								j++;
								color.A = (float)URealTimeImportMesh::parseBytesToDouble(fbxFileData, dataPosition + 12 + (j * 8));
								j++;

								//UE_LOG(LogTemp, Error, TEXT("Vertex Colors (plain): R=%f, G=%f, B=%f, A=%f"), color.R, color.G, color.B, color.A);
								geometryStruct->vertexColors.Add(color);
							}
						}
					}
					//p->Type = FBX_PROPERTY_F64_ARRAY;
					//p->Size = arrayLen * 8;
					//p->Data = s + 12;
					dataPosition += 12 + (arrayLen * 8);
				}

				break;
			}
			case 'i': {

				uint32 arrayLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition);
				uint32 encoding = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 4);
				uint32 compressedLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 8);

				if (encoding) {
					if (geometryStruct != nullptr) {
						if (name.Equals("PolygonVertexIndex")) {
							//UE_LOG(LogTemp, Error, TEXT(" PolygonVertexIndex (encoded): %i %i"), arrayLen * 4, compressedLen);

							TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 4, compressedLen);

							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->polygonVertexIndexes.Add(URealTimeImportMesh::byteArrayToInt32(uncompressedContent, (j * 4)));
							}
						}

						if (name.Equals("NormalsIndex") && geometryStruct->normalsIndexes.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT(" UVIndex (encoded): %i"), arrayLen);

							TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 4, compressedLen);

							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->normalsIndexes.Add(URealTimeImportMesh::byteArrayToInt32(uncompressedContent, (j * 4)));
							}
						}

						if (name.Equals("UVIndex") && geometryStruct->UV0Indexes.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT(" UVIndex (encoded): %i"), arrayLen);

							TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 4, compressedLen);

							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->UV0Indexes.Add(URealTimeImportMesh::byteArrayToInt32(uncompressedContent, (j * 4)));
							}
						}

						if (name.Equals("ColorIndex") && geometryStruct->vertexColorsIndexes.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT(" Vertex Color Index (encoded): %i"), arrayLen);
							TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 4, compressedLen);

							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->vertexColorsIndexes.Add(URealTimeImportMesh::byteArrayToInt32(uncompressedContent, (j * 4)));
							}
						}

						//if (name.Equals("Edges") && geometryStruct->UV0Indexes.Num() == 0) {
						//	//UE_LOG(LogTemp, Error, TEXT(" Edges (encoded): %i %i"), arrayLen * 4, compressedLen);

						//	TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 4, compressedLen);

						//	for (uint32 j = 0; j < arrayLen; j++) {
						//		geometryStruct->edges.Add(URealTimeImportMesh::byteArrayToInt32(uncompressedContent, (j * 4)));
						//	}
						//}

						if (name.Equals("Materials")) {
							//UE_LOG(LogTemp, Error, TEXT(" Materials (encoded): %i %i"), arrayLen * 4, compressedLen);

							TArray<uint8> uncompressedContent = uncompressFbxData(fbxFileData, dataPosition + 12, arrayLen * 4, compressedLen);

							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->materialPolygons.Add(URealTimeImportMesh::byteArrayToInt32(uncompressedContent, (j * 4)));
								//	UE_LOG(LogTemp, Warning, TEXT("%i"), URealTimeImportMesh::byteArrayToInt32(uncompressedContent, (j * 4)));
							}
						}
					}

					dataPosition += 12 + compressedLen;
				}
				else {
					if (geometryStruct != nullptr) {
						if (name.Equals("PolygonVertexIndex")) {
							//UE_LOG(LogTemp, Error, TEXT(" PolygonVertexIndex (plain): %i"), arrayLen);

							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->polygonVertexIndexes.Add(URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 12 + (j * 4)));
							}
						}

						if (name.Equals("NormalsIndex") && geometryStruct->normalsIndexes.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT(" UVIndex (plain): %i"), arrayLen);
							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->normalsIndexes.Add(URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 12 + (j * 4)));
							}
						}

						if (name.Equals("UVIndex") && geometryStruct->UV0Indexes.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT(" UVIndex (plain): %i"), arrayLen);
							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->UV0Indexes.Add(URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 12 + (j * 4)));
							}
						}

						if (name.Equals("ColorIndex") && geometryStruct->vertexColorsIndexes.Num() == 0) {
							//UE_LOG(LogTemp, Error, TEXT(" Vertex Color Index (plain): %i"), arrayLen);
							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->vertexColorsIndexes.Add(URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 12 + (j * 4)));
							}
						}

						//if (name.Equals("Edges") && geometryStruct->UV0Indexes.Num() == 0) {
						//	//UE_LOG(LogTemp, Error, TEXT(" Edges (plain): %i"), arrayLen);

						//	for (uint32 j = 0; j < arrayLen; j++) {
						//		geometryStruct->edges.Add(URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 12 + (j * 4)));
						//	}
						//}

						if (name.Equals("Materials")) {
							//UE_LOG(LogTemp, Error, TEXT(" Materials (plain): %i"), arrayLen);
							for (uint32 j = 0; j < arrayLen; j++) {
								geometryStruct->materialPolygons.Add(URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 12 + (j * 4)));
								//UE_LOG(LogTemp, Warning, TEXT("%i"), URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 12 + (j * 4)));
							}
						}
					}



					dataPosition += 12 + (arrayLen * 4);
				}

				break;
			}

			case 'l': {
				/*uint32 ArrayLen = *(uint32*)s;
				uint32 Encoding = *(uint32*)(s + 4);
				uint32 CompressedLen = *(uint32*)(s + 8);*/

				uint32 ArrayLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition);
				uint32 Encoding = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 4);
				uint32 CompressedLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 8);

				if (Encoding) {
					/*p->Type = FBX_PROPERTY_S64_ARRAY;
					p->Size = ArrayLen * 8;
					p->CompressedSize = CompressedLen;
					p->Compressed = true;
					p->Data = s + 12;*/
					dataPosition += 12 + CompressedLen;
				}
				else {
					/*p->Type = FBX_PROPERTY_S64_ARRAY;
					p->Size = ArrayLen * 8;
					p->Data = s + 12;*/
					dataPosition += 12 + (ArrayLen * 8);
				}
				break;
			}
			case 'b': {
				/*uint32 ArrayLen = *(uint32*)s;
				uint32 Encoding = *(uint32*)(s + 4);
				uint32 CompressedLen = *(uint32*)(s + 8);*/

				uint32 ArrayLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition);
				uint32 Encoding = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 4);
				uint32 CompressedLen = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition + 8);

				if (Encoding) {
					/*p->Type = FBX_PROPERTY_BOOL_ARRAY;
					p->Size = ArrayLen * 1;
					p->CompressedSize = CompressedLen;
					p->Compressed = true;
					p->Data = s + 12;*/
					dataPosition += 12 + CompressedLen;
				}
				else {
					/*p->Type = FBX_PROPERTY_BOOL_ARRAY;
					p->Size = ArrayLen * 1;
					p->Data = s + 12;*/
					dataPosition += 12 + (ArrayLen * 1);
				}
				break;
			}
			case 'S': {
				/*uint32 Len = *(uint32*)s;*/

				uint32 Len = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition);

				if (Len) {
					subNameLast = subName;
					subName = URealTimeImportMesh::byteArrayToFString(fbxFileData, dataPosition + 4, Len);
					lastStringProperty.Add(subName);
					//UE_LOG(LogTemp, Error, TEXT("FBX_PROPERTY_STRING (subName):mode:%i %s"),mode, *subName);

					if (mode == 3) {
						if (subName.Equals("OO") || subName.Equals("OP")) {
							fbxIDKey = -1;
							fbxIDVal = -1;

						}
						else{
							//if (n.Equals("OP")) {
							if (textureStruct != nullptr) {
								textureStruct->textureTypeString = subName;
								if (subName.Equals("DiffuseColor") || subName.Equals("Maya|base") || subName.Equals("Maya|DiffuseTexture") || subName.Equals("Maya|baseColor") ||
									subName.Equals("Maya|baseColor|file") || subName.Equals("3dsMax|Parameters|base_color_map") || subName.Equals("Maya|TEX_color_map|file") ||
									subName.Equals("Maya|TEX_color_map")) {
									textureStruct->textureType = ERTITextureType::E_Kd;
								}
								else {
									if (subName.Equals("NormalMap") || subName.Equals("Bump") || subName.Equals("3dsMax|Parameters|bump_map") || subName.Equals("Maya|NormalTexture") ||
										subName.Equals("Maya|normalCamera") || subName.Equals("Maya|normalCamera|file") || subName.Equals("Maya|TEX_normal_map") ||
										subName.Equals("Maya|TEX_normal_map|file")) {
										textureStruct->textureType = ERTITextureType::E_bump;
									}
									else {
										if (subName.Equals("SpecularColor") || subName.Equals("Maya|specularColor") || subName.Equals("Maya|SpecularTexture") ||
											subName.Equals("Maya|SpecularTexture|file") || subName.Equals("ShininessExponent") || subName.Equals("ReflectionFactor")) {
											textureStruct->textureType = ERTITextureType::E_Ks;
										}
										else {
											if (subName.Equals("EmissiveColor") || subName.Equals("EmissiveFactor") || subName.Equals("Maya|emissionColor") ||
												subName.Equals("Maya|emissionColor|file") || subName.Equals("3dsMax|Parameters|emission_map") ||
												subName.Equals("Maya|TEX_emissive_map") || subName.Equals("Maya|TEX_emissive_map|file")) {
												textureStruct->textureType = ERTITextureType::E_Ke;
											}
											else {
												if (subName.Equals("Maya|metalness") || subName.Equals("Maya|metalness|file") || subName.Equals("3dsMax|Parameters|metalness_map") ||
													subName.Equals("Maya|TEX_metallic_map") || subName.Equals("Maya|TEX_metallic_map|file")) {
													textureStruct->textureType = ERTITextureType::E_Pm;
												}
												else {
													if (subName.Equals("Maya|specularRoughness") || subName.Equals("3dsMax|Parameters|roughness_map") || subName.Equals("Maya|TEX_roughness_map") || subName.Equals("Maya|TEX_roughness_map|file")) {
														textureStruct->textureType = ERTITextureType::E_Pr;
													}
													else {
														if (subName.Equals("Alpha") || subName.Equals("3dsMax|Parameters|cutout_map")) {
															textureStruct->textureType = ERTITextureType::E_d;
														}
														//else {
														//	//UE_LOG(LogTemp, Error, TEXT("texture type: %s"), *subName);
														//	
														//}
													}
												}
											}
										}
									}

								}

							}
						}
						//}
					}


					//if (meshStructs.Num() && meshStructs.Last().meshName.IsEmpty()) {
						/*FString n = URealTimeImportMesh::byteArrayToFString(fbxFileData, dataPosition + 4, Len);
						UE_LOG(LogTemp, Error, TEXT("FBX_PROPERTY_STRING: %s"), *n);*/
						//meshStructs.Last().meshName = n;
					//}
					if (geometryStruct != nullptr) {
						if (name.Equals("MappingInformationType")) {
							switch (mode) {
							case 0:
								if (geometryStruct->normalInformationType == ERTIInformationType::E_none)
									geometryStruct->normalInformationType = informationTypeStringToEnum(subName);
								break;
							case 1:
								if (geometryStruct->UVInformationType == ERTIInformationType::E_none)
									geometryStruct->UVInformationType = informationTypeStringToEnum(subName);
								break;
							case 2:
								if (geometryStruct->MatInformationType == ERTIInformationType::E_none)
									geometryStruct->MatInformationType = informationTypeStringToEnum(subName);
								break;
							case 4:
								if (geometryStruct->VertexColorInformationType == ERTIInformationType::E_none)
									geometryStruct->VertexColorInformationType = informationTypeStringToEnum(subName);
								break;
							}
						}


						if (name.Equals("ReferenceInformationType")) {
							switch (mode) {
							case 0:
								if (geometryStruct->normalReferenceInformationType == ERTIReferenceInformationType::E_none)
									geometryStruct->normalReferenceInformationType = referenceInformationTypeTypeStringToEnum(subName);
								break;
							case 1:
								if (geometryStruct->UVReferenceInformationType == ERTIReferenceInformationType::E_none)
									geometryStruct->UVReferenceInformationType = referenceInformationTypeTypeStringToEnum(subName);
								break;
							case 2:
								if (geometryStruct->MatReferenceInformationType == ERTIReferenceInformationType::E_none)
									geometryStruct->MatReferenceInformationType = referenceInformationTypeTypeStringToEnum(subName);
								break;
							case 4:
								if (geometryStruct->VertexColorReferenceInformationType == ERTIReferenceInformationType::E_none)
									geometryStruct->VertexColorReferenceInformationType = referenceInformationTypeTypeStringToEnum(subName);
								break;
							}
						}
					}
					if (videoStruct != nullptr) {
						if (name.ToLower().Equals("filename") || name.Equals("RelativeFilename")) {
							FString filePath = URealTimeImportMesh::byteArrayToFString(fbxFileData, dataPosition + 4, Len);
							ERTIDirectoryType dirtype;
							if (name.ToLower().Equals("filename") || FPaths::IsRelative(filePath) == false) {
								dirtype = ERTIDirectoryType::E_ad;
							}
							else {
								dirtype = ERTIDirectoryType::E_gd;
							}
							
							//relative to fbx file
							if (filePath.Contains("\\") == false && filePath.Contains("/") == false) {
								filePath = FPaths::GetPath(dir) + "/" + filePath;
							}
							else {
								filePath = UFileFunctionsRealTimeImport::getCleanDirectory(dirtype, filePath);
							}
							videoStruct->filePath = filePath;
							if (FPaths::FileExists(filePath)) {
								if (videoStruct->fbxTextureData.Num() == 0) {
									FFileHelper::LoadFileToArray(videoStruct->fbxTextureData, *filePath);
									videoStruct->filePath = filePath;
								}
							}
							else { //try it in the fbx dir
								filePath = FPaths::GetPath(dir) + "/" + FPaths::GetCleanFilename(filePath);
								videoStruct->filePath = filePath;
								if (FPaths::FileExists(filePath)) {
									if (videoStruct->fbxTextureData.Num() == 0) {
										FFileHelper::LoadFileToArray(videoStruct->fbxTextureData, *filePath);
										videoStruct->filePath = filePath;
									}
								}
							}
						}
					}

					if (modelStruct != nullptr && name.Equals("Model")) {
						if (modelStruct->name.Len() == 0) {
							modelStruct->name = subName;
						}
					}
					if (geometryStruct != nullptr && name.Equals("Geometry")) {
						if (geometryStruct->name.Len() == 0) {
							geometryStruct->name = subName;
						}
					}
					if (materialStruct != nullptr && name.Equals("Material")) {
						if (materialStruct->name.Len() == 0) {
							materialStruct->name = subName;
						}
					}
				}

				/*p->Type = FBX_PROPERTY_STRING;
				p->Size = Len;
				p->Data = s + 4;*/
				dataPosition += 4 + Len;
				break;
			}
			case 'R': {
				/*uint32 Len = *(uint32*)s;*/

				uint32 Len = URealTimeImportMesh::byteArrayToInt32(fbxFileData, dataPosition);

				//UE_LOG(LogTemp, Error, TEXT("FBX_PROPERTY_RAW: %i"), Len);

				if (Len > 100) {
					//if (fbxConnections.texture.Find(lastFbxID) != nullptr) {
					//	FRTITextureStruct* ts = fbxConnections.texture.Find(lastFbxID);
					//	if (ts->fbxTextureData.Num() == 0) {
					//		ts->fbxTextureData.AddUninitialized(Len);
					//		FMemory::Memcpy(ts->fbxTextureData.GetData(), fbxFileData.GetData() + dataPosition + 4, Len);
					//	}					
					//}
					if (videoStruct != nullptr) {
						if (videoStruct->fbxTextureData.Num() == 0) {
							videoStruct->fbxTextureData.AddUninitialized(Len);
							FMemory::Memcpy(videoStruct->fbxTextureData.GetData(), fbxFileData.GetData() + dataPosition + 4, Len);
						}
					}
				}



				//TArray<uint8> rawData;
				//rawData.AddUninitialized(Len);
				//FMemory::Memcpy(rawData.GetData(), fbxFileData.GetData() + dataPosition + 4, Len);
				//FString dir = "D:/"+FGuid::NewGuid().ToString();
				//FFileHelper::SaveArrayToFile(rawData,*dir);


				/*p->Type = FBX_PROPERTY_RAW;
				p->Size = Len;
				p->Data = s + 4;*/
				dataPosition += 4 + Len;
				break;
			}
			default: {
				UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: FBX Unknown type in File. Loading is canceled."));
				success = false;
				successMessage = "FBX Unknown type in File. Loading is canceled.";
				return 0;
			}
			}
		}
	}

	lastStringProperty.Empty();
	success = true;
	successMessage.Empty();
	return endOffset;
}

TArray<uint8> URealTimeImportMeshFBX::uncompressFbxData(TArray<uint8>& data, uint32 start, uint32 size, uint32 compressedLen) {
	TArray<uint8> uncompressedContent;
	uncompressedContent.AddUninitialized(size);

	FCompression::UncompressMemoryStream(NAME_Zlib, (void*)uncompressedContent.GetData(), uncompressedContent.Num(),
		(IMemoryReadStream::CreateFromBuffer(data.GetData() + start, compressedLen, false)), 0, compressedLen);

	return uncompressedContent;
}

ERTIInformationType URealTimeImportMeshFBX::informationTypeStringToEnum(FString informationType) {

	if (informationType.Equals("ByPolygon")) {
		return ERTIInformationType::E_ByPolygon;
	}
	if (informationType.Equals("ByPolygonVertex")) {
		return ERTIInformationType::E_ByPolygonVertex;
	}
	if (informationType.Equals("ByVertex") || informationType.Equals("ByVertice")) {
		return ERTIInformationType::E_ByVertex;
	}
	if (informationType.Equals("ByEdge")) {
		return ERTIInformationType::E_ByEdge;
	}
	if (informationType.Equals("AllSame")) {
		return ERTIInformationType::E_AllSame;
	}


	return ERTIInformationType::E_none;
}

ERTIReferenceInformationType URealTimeImportMeshFBX::referenceInformationTypeTypeStringToEnum(FString informationType) {
	if (informationType.Equals("Direct")) {
		return ERTIReferenceInformationType::E_Direct;
	}
	if (informationType.Equals("IndexToDirect")) {
		return ERTIReferenceInformationType::E_IndexToDirect;
	}
	return ERTIReferenceInformationType::E_none;
}