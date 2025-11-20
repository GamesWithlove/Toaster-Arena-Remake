// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportMeshglTF.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"


URealTimeImportMeshglTF::URealTimeImportMeshglTF(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {

}

/* https://registry.khronos.org/glTF/specs/2.0/glTF-2.0.html
5120  signed byte  Signed, two's complement  8
5121  unsigned byte  Unsigned  8  
5122  signed short  Signed, two's complement  16  
5123  unsigned short  Unsigned  16  
5125  unsigned int  Unsigned  32  
5126  float  Signed  32   

"SCALAR"  1  
"VEC2"  2  
"VEC3"  3  
"VEC4"  4  
"MAT2"  4  
"MAT3"  9  
"MAT4"  16*/


void URealTimeImportMeshglTF::parseData(bool isBinary, FString json, FString dir, TArray<uint8>& binData,
	bool& success, FString& successMessage, TArray<FRTIModelStruct>& modelStructs, bool cacheTexture, bool useSRGB, bool createMipMaps,
	ERTIERGBFormat rgbFormat, URealTimeImportAsyncNodeLoadMesh* asyncNode){
	TArray<FRTIModelStruct*> modelStructsPtrArray;
	TMap<int32, FRTIModelStruct*> modelStructPtrMap;
	TMap<FString, TArray<uint8>> bufferCache;

	//one second = 10000000 ticks
	uint64 duration =FDateTime::Now().GetTicks();

	int32 verticesCount = 0;
	int32 normalsCount = 0;
	int32 UV0Count = 0;
	int32 vertexColorsCount = 0;
	int32 tangentsCount = 0;
	int32 triangleCount = 0;


	TSharedPtr<FJsonObject> jsonObject;
	TSharedRef<TJsonReader<>> reader = TJsonReaderFactory<>::Create(json);
	success = FJsonSerializer::Deserialize(reader, jsonObject);
	if (success == false) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: (1) Can't parse json in file: %s"), *dir);
		successMessage = "Can't parse json in file: " + dir;
		return;
	}

	TMap<FString,FArchive*> readers;
	TMap<int32, FRTISkeleton*> skeletonMapBySkinID;
	//TMap<int32, FRTISkeleton*> skeletonMapByNodeID;
	TMap<int32, FRTIBone*> joinsMap;

	FString generator;

	if (jsonObject->HasTypedField<EJson::Object>(TEXT("asset"))) {
		TSharedPtr<FJsonObject> assetJsonObject = jsonObject->GetObjectField(TEXT("asset"));
		if (assetJsonObject->HasTypedField<EJson::String>(TEXT("generator"))) {
			generator = assetJsonObject->GetStringField(TEXT("generator"));
		}
		FString fileVersion;
		if (assetJsonObject->HasTypedField<EJson::String>(TEXT("version"))) {
			fileVersion = assetJsonObject->GetStringField(TEXT("version"));
		}
		if (fileVersion.Equals("2.0") == false) {
			UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: The glTF version %s is not supported: %s"),*fileVersion, *dir);
			successMessage = "The glTF version "+fileVersion+ " is not supported: " + dir;
			return;
		}


		TArray<TSharedPtr<FJsonValue>> scenesArray;
		TArray<TSharedPtr<FJsonValue>> nodesArray;
		TArray<TSharedPtr<FJsonValue>> materialsArray;
		TArray<TSharedPtr<FJsonValue>> texturesArray;
		TArray<TSharedPtr<FJsonValue>> imagesArray;
		TArray<TSharedPtr<FJsonValue>> meshesArray;
		TArray<TSharedPtr<FJsonValue>> accessorsArray;
		TArray<TSharedPtr<FJsonValue>> bufferViewsArray;
		TArray<TSharedPtr<FJsonValue>> buffersArray;
		TArray<TSharedPtr<FJsonValue>> skinsArray;
		TArray<TSharedPtr<FJsonValue>> animationsArray;

		if (jsonObject->HasTypedField<EJson::Array>(TEXT("scenes"))) {
			scenesArray = jsonObject->GetArrayField(TEXT("scenes"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("nodes"))) {
			nodesArray = jsonObject->GetArrayField(TEXT("nodes"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("materials"))) {
			materialsArray = jsonObject->GetArrayField(TEXT("materials"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("textures"))) {
			texturesArray = jsonObject->GetArrayField(TEXT("textures"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("images"))) {
			imagesArray = jsonObject->GetArrayField(TEXT("images"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("meshes"))) {
			meshesArray = jsonObject->GetArrayField(TEXT("meshes"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("accessors"))) {
			accessorsArray = jsonObject->GetArrayField(TEXT("accessors"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("bufferViews"))) {
			bufferViewsArray = jsonObject->GetArrayField(TEXT("bufferViews"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("buffers"))) {
			buffersArray = jsonObject->GetArrayField(TEXT("buffers"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("skins"))) {
			skinsArray = jsonObject->GetArrayField(TEXT("skins"));
		}
		if (jsonObject->HasTypedField<EJson::Array>(TEXT("animations"))) {
			animationsArray = jsonObject->GetArrayField(TEXT("animations"));
		}
		
		//bones and skeletons 
		for (int32 i = 0; i < skinsArray.Num(); i++) {
			TSharedPtr<FJsonObject> skinJson = skinsArray[i]->AsObject();

			int32 inverseBindMatrixAccessorIndex = -1;
			if (skinJson->HasTypedField<EJson::Number>(TEXT("inverseBindMatrices"))) {
				inverseBindMatrixAccessorIndex = skinJson->GetNumberField(TEXT("inverseBindMatrices"));

				int32 skeletonNodeId = -1;
				if (skinJson->HasTypedField<EJson::Number>(TEXT("skeleton"))) {
					skeletonNodeId = skinJson->GetNumberField(TEXT("skeleton"));
				}

				if (skinJson->HasTypedField<EJson::Array>(TEXT("joints"))) {
					FRTISkeleton* skeleton = new FRTISkeleton();
					skeletonMapBySkinID.Add(i, skeleton);
					if (skeletonNodeId != -1) {
						skeleton->id = skeletonNodeId;
					}
				

					TArray<TSharedPtr<FJsonValue>> joinsArray = skinJson->GetArrayField(TEXT("joints"));
					for (int32 j = 0; j < joinsArray.Num(); j++) {
						FRTIBone* bone = new FRTIBone();
						bone->relativeTransform.SetScale3D(FVector(1, 1, 1));
						bone->id = joinsArray[j]->AsNumber();
						joinsMap.Add(joinsArray[j]->AsNumber(), bone);
						skeleton->bones.Add(bone);
					}

					//additional bone as skeleton
					//if (joinsMap.Find(skeletonNodeId) == nullptr) {
					//	FRTIBone* bone = new FRTIBone();
					//	bone->relativeTransform.SetScale3D(FVector(1, 1, 1));
					//	bone->id = skeletonNodeId;
					//	joinsMap.Add(skeletonNodeId, bone);
					//	skeleton->bones.Insert(bone, 0);
					//}

					if (inverseBindMatrixAccessorIndex >= 0 && inverseBindMatrixAccessorIndex < accessorsArray.Num()) {


						int32 accessorBufferViewIndex = -1;
						int32 accessorCount = -1;
						int32 accessorComponentType = -1;
						int32 accessorByteOffset = 0;
						FString accessorType;

						TSharedPtr<FJsonObject> accessorJson = accessorsArray[inverseBindMatrixAccessorIndex]->AsObject();
						parseAccessor(accessorJson, accessorBufferViewIndex, accessorCount, accessorComponentType, accessorByteOffset, accessorType);

						if (accessorType.Equals("MAT4") && accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
							TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();

							int32 bufferViewIndex = -1;
							int32 bufferViewByteLength = -1;
							int32 bufferViewByteOffset = 0;
							int32 bufferViewByteStride = 0;


							parseBufferView(bufferViewJson, accessorCount, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);

							bufferViewByteOffset += accessorByteOffset;

							bufferViewByteOffset += accessorByteOffset;
							int32 dataLength = accessorCount * 64; //MAT4 = 16 float values a 4 bytes
							if (bufferViewByteStride < 64) {//workaround i need only 3 (x,y,z) values
								bufferViewByteStride = 64;
							}
							if (bufferViewByteStride > 64) {
								dataLength = accessorCount * bufferViewByteStride;
							}


							if (bufferViewIndex >= 0 && bufferViewIndex < buffersArray.Num()) {
								TSharedPtr<FJsonObject> bufferJson = buffersArray[bufferViewIndex]->AsObject();

								TArray<uint8> data = getDataArray(isBinary, bufferViewByteOffset, dataLength, bufferViewIndex, dir, bufferJson, readers, bufferCache, binData);

								if (accessorComponentType == 5126) {
									TArray<FTransform> inverseBindMatrices = dataArrayToFTransformArrayWithMatrixValues(data, bufferViewByteStride);
									data.Empty();
									if (inverseBindMatrices.Num() >= skeleton->bones.Num()) {
										for (int32 j = 0; j < skeleton->bones.Num(); j++) {
											skeleton->bones[j]->inverseBindMatrice = inverseBindMatrices[j];
										}
									}
								}
							}
						}
					}
				}
			}
		}

		//nodes in glft are models in this plugin
		for (int32 i = 0; i < nodesArray.Num(); i++){

			if (asyncNode != nullptr) {
				float percent = ((float)i + 1) / (float)nodesArray.Num() * 100.f;
				AsyncTask(ENamedThreads::GameThread, [asyncNode,percent]() {
					if (asyncNode != nullptr) {
						asyncNode->setProgress(percent);
						//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: subpercent: %f"),percent);
					}
				});
			}

			TSharedPtr<FJsonObject> modelJson = nodesArray[i]->AsObject();

			int32 meshID = -1;
			if (modelJson->HasTypedField<EJson::Number>(TEXT("mesh"))) {
				meshID = modelJson->GetNumberField(TEXT("mesh"));
			}

			//optinal data
			FString gltfExtrasJsonString;
			if (modelJson->HasTypedField<EJson::Object>(TEXT("extras"))) {
				TSharedPtr<FJsonObject> gltfExtras = modelJson->GetObjectField(TEXT("extras"));
				TSharedRef<TJsonWriter<TCHAR>> writer = TJsonWriterFactory<TCHAR>::Create(&gltfExtrasJsonString);
				FJsonSerializer::Serialize(gltfExtras.ToSharedRef(), writer);
			}

			FTransform relativeTransform;
			relativeTransform.SetScale3D(FVector(1, 1, 1));

			//matrix transform
			if (modelJson->HasTypedField<EJson::Array>(TEXT("matrix"))) {
				TArray<TSharedPtr<FJsonValue>> matrixJsonArray = modelJson->GetArrayField(TEXT("matrix"));
				if (matrixJsonArray.Num() == 16) {


					FMatrix matrix = FMatrix(
						FPlane(matrixJsonArray[0]->AsNumber(), matrixJsonArray[1]->AsNumber(),matrixJsonArray[2]->AsNumber(), matrixJsonArray[3]->AsNumber()),
						FPlane(matrixJsonArray[4]->AsNumber(), matrixJsonArray[5]->AsNumber(),matrixJsonArray[6]->AsNumber(),matrixJsonArray[7]->AsNumber()),
						FPlane(matrixJsonArray[8]->AsNumber(), matrixJsonArray[9]->AsNumber(),matrixJsonArray[10]->AsNumber(),matrixJsonArray[11]->AsNumber()),
						FPlane(matrixJsonArray[12]->AsNumber(), matrixJsonArray[13]->AsNumber(),matrixJsonArray[14]->AsNumber(), matrixJsonArray[15]->AsNumber()));
			

					//replace y with z
					FTransform matrixTransform = FTransform(matrix);
					FQuat matrixRoation = matrixTransform.GetRotation();
					FVector matrixLocation = matrixTransform.GetLocation();
					FVector matrixScale = matrixTransform.GetScale3D();

					/*UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: rotation x:%f z:%f y:%f location x:%f z:%f y:%f scale x:%f z:%f y:%f "),
					matrixRoation.X,matrixRoation.Z,matrixRoation.Y,
					matrixLocation.X,matrixLocation.Z,matrixLocation.Y,
					matrixScale.X,matrixScale.Z,matrixScale.Y);*/

					relativeTransform= FTransform(
						FQuat(matrixRoation.X, matrixRoation.Z, matrixRoation.Y, -matrixRoation.W),
						FVector(matrixLocation.X, matrixLocation.Z, matrixLocation.Y),
						FVector(matrixScale.X, matrixScale.Z, matrixScale.Y));
				}
			}
			else {

				//rotation
				if (modelJson->HasTypedField<EJson::Array>(TEXT("rotation"))) {
					TArray<TSharedPtr<FJsonValue>> rotationArray = modelJson->GetArrayField(TEXT("rotation"));
					if (rotationArray.Num() == 4) {
						FQuat rotation;
						rotation.X = rotationArray[0]->AsNumber();
						rotation.Z = rotationArray[1]->AsNumber();
						rotation.Y = rotationArray[2]->AsNumber();
						rotation.W = -rotationArray[3]->AsNumber();
						relativeTransform.SetRotation(rotation);
					}
				}
				//location
				if (modelJson->HasTypedField<EJson::Array>(TEXT("translation"))) {
					TArray<TSharedPtr<FJsonValue>> translationArray = modelJson->GetArrayField(TEXT("translation"));
					if (translationArray.Num() == 3) {
						FVector location;
						location.X = translationArray[0]->AsNumber();
						location.Z = translationArray[1]->AsNumber();
						location.Y = translationArray[2]->AsNumber();
						relativeTransform.SetLocation(location);
					}
				}
				//scale
				if (modelJson->HasTypedField<EJson::Array>(TEXT("scale"))) {
					TArray<TSharedPtr<FJsonValue>> scaleArray = modelJson->GetArrayField(TEXT("scale"));
					if (scaleArray.Num() == 3) {
						FVector scale;
						scale.X = scaleArray[0]->AsNumber();
						scale.Z = scaleArray[1]->AsNumber();
						scale.Y = scaleArray[2]->AsNumber();
						relativeTransform.SetScale3D(scale);
					}
				}
			}
			
			//node is a bone
			if (joinsMap.Find(i) != nullptr) {
				FRTIBone* bone = *joinsMap.Find(i);
				bone->relativeTransform = relativeTransform;
				//bone->relativeTransform.SetRotation(bone->relativeTransform.GetRotation() + bone->inverseBindMatrice.GetRotation());
				/*bone->relativeTransform = bone->inverseBindMatrice;*/
				//FVector location = relativeTransform.GetLocation() + bone->inverseBindMatrice.GetLocation();
				//FQuat rotation = relativeTransform.GetRotation() + bone->inverseBindMatrice.GetRotation();
				//FVector scale = relativeTransform.GetScale3D() * bone->inverseBindMatrice.GetScale3D();
				//bone->relativeTransform = FTransform(
				//	FQuat(rotation),
				//	FVector(location),
				//	FVector(scale));

				if (modelJson->HasTypedField<EJson::Array>(TEXT("children"))) {
					TArray<TSharedPtr<FJsonValue>> childrenArray = modelJson->GetArrayField(TEXT("children"));
					for (int32 k = 0; k < childrenArray.Num(); k++){
						int32 childIndex = childrenArray[k]->AsNumber();
						bone->children.Add(childIndex);
					}				
				}

				continue;
			}

			//node is skeleton
			//if (skeletonMapByNodeID.Find(i) != nullptr) {
			//	FRTISkeleton* skeleton = *skeletonMapByNodeID.Find(i);
			//	skeleton->relativeTransform = relativeTransform;

			//	if (modelJson->HasTypedField<EJson::Array>(TEXT("children"))) {
			//		TArray<TSharedPtr<FJsonValue>> childrenArray = modelJson->GetArrayField(TEXT("children"));
			//		for (int32 k = 0; k < childrenArray.Num(); k++){
			//			int32 childIndex = childrenArray[k]->AsNumber();
			//			skeleton->children.Add(childIndex);
			//		}				
			//	}
			//	continue;
			//}

			FRTIModelStruct* model = new FRTIModelStruct();
			model->relativeTransform = relativeTransform;
			model->structID = FGuid::NewGuid().ToString();

			if (gltfExtrasJsonString.Len() > 0) {
				model->gltfExtrasJsonString = gltfExtrasJsonString;
			}

			if (modelJson->HasTypedField<EJson::Number>(TEXT("skin"))) {
				model->skinID = modelJson->GetNumberField(TEXT("skin"));
				if (skeletonMapBySkinID.Find(model->skinID) != nullptr) {
					model->skeleton = *skeletonMapBySkinID.Find(model->skinID);
				}
			}

			model->modelID = i;
			if (modelJson->HasTypedField<EJson::Array>(TEXT("children"))) {
				TArray<TSharedPtr<FJsonValue>> childrenArray = modelJson->GetArrayField(TEXT("children"));
				for (int32 k = 0; k < childrenArray.Num(); k++){
					int32 childIndex = childrenArray[k]->AsNumber();
					model->children.Add(childIndex);
				}				
			}

			if (modelJson->HasTypedField<EJson::String>(TEXT("name"))) {
				model->name = modelJson->GetStringField(TEXT("name"));
			}
			else {
				model->name = "Model_" + FString::FromInt(model->modelID);
			}

			modelStructPtrMap.Add(model->modelID, model);

	
			if (meshID != -1) {
				model->modelType = ERTIModelType::E_mesh;
			}
			else {
				model->modelType = ERTIModelType::E_group;
			}
			if (meshID < 0 || meshID >= meshesArray.Num()) {
				modelStructsPtrArray.Add(model);
				continue;
			}



			//primitives in gltf are meshes in this plugin		
			TSharedPtr<FJsonObject> meshJson = meshesArray[meshID]->AsObject();

			FString mainMeshName = "";
			if (meshJson->HasTypedField<EJson::String>(TEXT("name"))) {
				mainMeshName = meshJson->GetStringField(TEXT("name"));
			}
			if (mainMeshName.IsEmpty() && model->name.IsEmpty() == false) {
				mainMeshName = "Mesh_" + FString::FromInt(i);
			}

			TArray<TSharedPtr<FJsonValue>> primitivesArray;
			if (meshJson->HasTypedField<EJson::Array>(TEXT("primitives"))) {
				primitivesArray = meshJson->GetArrayField(TEXT("primitives"));
			}

			for (int32 j = 0; j < primitivesArray.Num(); j++){
				FRTIMeshStruct mesh = FRTIMeshStruct();
				mesh.geometryName = mainMeshName + "_" + FString::FromInt(j);

				TSharedPtr<FJsonObject> primitivesJson = primitivesArray[j]->AsObject();

				TSharedPtr<FJsonObject> attributesJson;
				if (primitivesJson->HasTypedField<EJson::Object>(TEXT("attributes"))) {
					attributesJson = primitivesJson->GetObjectField(TEXT("attributes"));

					int32 mode = 0;

					int32 positionIndex = -1;
					int32 normalIndex = -1;
					int32 texcoord_0Index = -1;
					int32 indecesIndex = -1;
					int32 materialIndex = -1;
					int32 jointsIndex = -1;
					int32 weightsIndex = -1;

					//vertices
					if (attributesJson->HasTypedField<EJson::Number>(TEXT("POSITION"))) {
						positionIndex = attributesJson->GetNumberField(TEXT("POSITION"));
					}
					//nomrals
					if (attributesJson->HasTypedField<EJson::Number>(TEXT("NORMAL"))) {
						normalIndex = attributesJson->GetNumberField(TEXT("NORMAL"));
					}
					//uvs
					if (attributesJson->HasTypedField<EJson::Number>(TEXT("TEXCOORD_0"))) {
						texcoord_0Index = attributesJson->GetNumberField(TEXT("TEXCOORD_0"));
					}
					//bones
					if (attributesJson->HasTypedField<EJson::Number>(TEXT("JOINTS_0"))) {
						jointsIndex = attributesJson->GetNumberField(TEXT("JOINTS_0"));
					}
					//bone weights
					if (attributesJson->HasTypedField<EJson::Number>(TEXT("WEIGHTS_0"))) {
						weightsIndex = attributesJson->GetNumberField(TEXT("WEIGHTS_0"));
					}

					if (primitivesJson->HasTypedField<EJson::Number>(TEXT("indices"))) {
						indecesIndex = primitivesJson->GetNumberField(TEXT("indices"));
					}
					if (primitivesJson->HasTypedField<EJson::Number>(TEXT("material"))) {
						materialIndex = primitivesJson->GetNumberField(TEXT("material"));
					}
					if (primitivesJson->HasTypedField<EJson::Number>(TEXT("mode"))) {
						mode = primitivesJson->GetNumberField(TEXT("mode"));
					}
					

					//joins data (bones)
					if (jointsIndex >= 0 && jointsIndex < accessorsArray.Num()) {

						int32 accessorBufferViewIndex = -1;
						int32 accessorCount = -1;
						int32 accessorComponentType = -1;
						int32 accessorByteOffset = 0;
						FString accessorType;

						TSharedPtr<FJsonObject> accessorJson = accessorsArray[jointsIndex]->AsObject();
						parseAccessor(accessorJson, accessorBufferViewIndex, accessorCount, accessorComponentType,accessorByteOffset, accessorType);

						if (accessorType.Equals("VEC4") && accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
							TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();

							int32 bufferViewIndex = -1;
							int32 bufferViewByteLength = -1;
							int32 bufferViewByteOffset = 0;
							int32 bufferViewByteStride = 0;

							parseBufferView(bufferViewJson, accessorCount, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);

							bufferViewByteOffset += accessorByteOffset;
							int32 dataLength = -1;
							if (accessorComponentType == 5121) {
								dataLength = accessorCount * 4; //VEC4 = x,y,z,w int8 each 1 byte so 4 bytes
								if (bufferViewByteStride > 4) {
									dataLength = accessorCount * bufferViewByteStride;
								}
							}
							else {
								if (accessorComponentType == 5123) {
									dataLength = accessorCount * 8; //VEC4 = x,y,z,w int16 each 2 bytes so 8 bytes
									if (bufferViewByteStride > 8) {
										dataLength = accessorCount * bufferViewByteStride;
									}
								}
							}

							
							if (bufferViewIndex >= 0 && bufferViewIndex < buffersArray.Num()) {
								TSharedPtr<FJsonObject> bufferJson = buffersArray[bufferViewIndex]->AsObject();

								TArray<uint8> data = getDataArray(isBinary, bufferViewByteOffset, dataLength, bufferViewIndex, dir, bufferJson, readers,  bufferCache,  binData);
								if (accessorComponentType == 5121) {
									mesh.joins = dataArrayTo2DInt16ArrayWithInt8Values(data,bufferViewByteStride, true);
									data.Empty();
								}
								else {
									if (accessorComponentType == 5123) {
										mesh.joins = dataArrayTo2DInt16Array(data,bufferViewByteStride,true);
										data.Empty();
									}
								}
							}
						}
					}

					//weights data (bones)
					if (weightsIndex >= 0 && weightsIndex < accessorsArray.Num()) {

						int32 accessorBufferViewIndex = -1;
						int32 accessorCount = -1;
						int32 accessorComponentType = -1;
						int32 accessorByteOffset = 0;
						FString accessorType;

						TSharedPtr<FJsonObject> accessorJson = accessorsArray[weightsIndex]->AsObject();
						parseAccessor(accessorJson, accessorBufferViewIndex, accessorCount, accessorComponentType,accessorByteOffset, accessorType);

						if (accessorType.Equals("VEC4") && accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
							TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();

							int32 bufferViewIndex = -1;
							int32 bufferViewByteLength = -1;
							int32 bufferViewByteOffset = 0;
							int32 bufferViewByteStride = 0;

							parseBufferView(bufferViewJson, accessorCount, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);

							bufferViewByteOffset += accessorByteOffset;
							int32 dataLength = accessorCount * 16; //VEC4 = x,y,z,w float each 4 bytes so 16 bytes
							if (bufferViewByteStride > 16) {
								dataLength = accessorCount * bufferViewByteStride;
							}

							if (bufferViewIndex >= 0 && bufferViewIndex < buffersArray.Num()) {
								TSharedPtr<FJsonObject> bufferJson = buffersArray[bufferViewIndex]->AsObject();

								TArray<uint8> data = getDataArray(isBinary, bufferViewByteOffset, dataLength, bufferViewIndex, dir, bufferJson, readers,  bufferCache,  binData);

								if (accessorComponentType == 5126) {
									mesh.weights = dataArrayTo2DFloatArray(data,bufferViewByteStride);
									//verticesCount += mesh.vertices.Num();
									data.Empty();
								}
							}
						}
					}

					//indeces (polygones)
					if (indecesIndex >= 0 && indecesIndex < accessorsArray.Num()) {


						int32 accessorBufferViewIndex = -1;
						int32 accessorCount = -1;
						int32 accessorComponentType = -1;
						int32 accessorByteOffset = 0;
						FString accessorType;

						TSharedPtr<FJsonObject> accessorJson = accessorsArray[indecesIndex]->AsObject();
						parseAccessor(accessorJson, accessorBufferViewIndex, accessorCount, accessorComponentType,accessorByteOffset, accessorType);

						if (accessorType.Equals("SCALAR") && accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
							TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();

							int32 bufferViewIndex = -1;
							int32 bufferViewByteLength = -1;
							int32 bufferViewByteOffset = 0;
							int32 bufferViewByteStride = 0;
							

							parseBufferView(bufferViewJson, accessorCount, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);

							bufferViewByteOffset += accessorByteOffset;
							int32 dataLength = bufferViewByteLength;
							
							if (accessorComponentType == 5123) {
								dataLength = accessorCount * 2; //5123 is an int16 so 2 bytes
							}


							if (bufferViewIndex >= 0 && bufferViewIndex < buffersArray.Num()) {
								TSharedPtr<FJsonObject> bufferJson = buffersArray[bufferViewIndex]->AsObject();

								TArray<uint8> data = getDataArray(isBinary, bufferViewByteOffset, dataLength, bufferViewIndex, dir, bufferJson, readers,  bufferCache,  binData);
								
								bool saveIndeces = false;
								if (mesh.joins.Num() > 0) {
									saveIndeces = true;
								}

								switch (accessorComponentType)
								{
								case 5120:
									mesh.triangles = dataArrayToInt32ArrayWithInt8Values(data,saveIndeces,mesh.trianglesVerticesIndeces, bufferViewByteStride);
									break;
								case 5121:
									mesh.triangles = dataArrayToInt32ArrayWithInt8Values(data,saveIndeces,mesh.trianglesVerticesIndeces, bufferViewByteStride,true);
									break;
								case 5122:
									mesh.triangles = dataArrayToInt32ArrayWithInt16Values(data,saveIndeces,mesh.trianglesVerticesIndeces, bufferViewByteStride);
									break;
								case 5123:
									mesh.triangles = dataArrayToInt32ArrayWithInt16Values(data,saveIndeces,mesh.trianglesVerticesIndeces, bufferViewByteStride, true);
									break;
								case 5125:
									mesh.triangles = dataArrayToInt32ArrayWithInt32Values(data,saveIndeces,mesh.trianglesVerticesIndeces, bufferViewByteStride, true);
									break;
								case 5126:
									mesh.triangles = dataArrayToInt32ArrayWithInt32Values(data,saveIndeces,mesh.trianglesVerticesIndeces, bufferViewByteStride);
									break;
								}
								triangleCount += mesh.triangles.Num();
								data.Empty();
							}
						}
					}

					//vertices
					if (positionIndex >= 0 && positionIndex < accessorsArray.Num()) {

						int32 accessorBufferViewIndex = -1;
						int32 accessorCount = -1;
						int32 accessorComponentType = -1;
						int32 accessorByteOffset = 0;
						FString accessorType;

						TSharedPtr<FJsonObject> accessorJson = accessorsArray[positionIndex]->AsObject();
						parseAccessor(accessorJson, accessorBufferViewIndex, accessorCount, accessorComponentType,accessorByteOffset, accessorType);

						if (accessorType.Equals("VEC3") && accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
							TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();

							int32 bufferViewIndex = -1;
							int32 bufferViewByteLength = -1;
							int32 bufferViewByteOffset = 0;
							int32 bufferViewByteStride = 0;

							parseBufferView(bufferViewJson, accessorCount, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);

							bufferViewByteOffset += accessorByteOffset;
							int32 dataLength = accessorCount * 12; //VEC3 = x,y,z float each 4 bytes so 12 bytes
							if (bufferViewByteStride > 12) {
								dataLength = accessorCount * bufferViewByteStride;
							}

							if (bufferViewIndex >= 0 && bufferViewIndex < buffersArray.Num()) {
								TSharedPtr<FJsonObject> bufferJson = buffersArray[bufferViewIndex]->AsObject();

								TArray<uint8> data = getDataArray(isBinary, bufferViewByteOffset, dataLength, bufferViewIndex, dir, bufferJson, readers,  bufferCache,  binData);

								if (accessorComponentType == 5126) {
									mesh.vertices = dataArrayToFVectorArray(data,bufferViewByteStride);
									verticesCount += mesh.vertices.Num();
									data.Empty();

									if (mesh.joins.Num() > 0 && mesh.vertices.Num() >= mesh.joins.Num()) {
										for (int32 k = 0; k < mesh.joins.Num(); k++) {
											TArray<int16> joins = mesh.joins[k];
											TArray<float> weights = mesh.weights[k];
											if (joins.Num() != weights.Num()) {
												continue;
											}
											for (int32 m = 0; m < joins.Num(); m++) {
												if (model->skeleton->bones.Num() > joins[m] && weights[m] != 0) {
													FRTIBone* bone = model->skeleton->bones[joins[m]];
													if (bone->uniqueVerticesTestMap.Find(k) == nullptr) {
														bone->uniqueVerticesTestMap.Add(k, true);

														if (bone->vertices.Num() == 0) {
															bone->triangles = mesh.triangles;
															bone->meshInModelArrayIndex = model->meshStructs.Num();
															/*bone->triangles.AddUninitialized(mesh.triangles.Num() - k);
															FMemory::Memcpy(bone->triangles.GetData(), mesh.triangles.GetData() + k, bone->triangles.Num() * 4);*/
														}

														bone->vertices.Add(mesh.vertices[k] /*+ bone->inverseBindMatrice.GetLocation()*/);
														bone->joinMeshVertexConnection.Add(k);
														bone->weight.Add(weights[m]);

														//bone->triangles = mesh.triangles;
														//if (mesh.trianglesVerticesIndeces.Find(k) != nullptr) {
														//	bone->triangles.Add(bone->vertices.Num()-1);// = mesh.triangles;
														//}
													}
												}
											}
										}
										//}
									}

								}
							}
						}
					}
					//normals
					if (normalIndex >= 0 && normalIndex < accessorsArray.Num()) {

						int32 accessorBufferViewIndex = -1;
						int32 accessorCount = -1;
						int32 accessorComponentType = -1;
						int32 accessorByteOffset = 0;
						FString accessorType;

						TSharedPtr<FJsonObject> accessorJson = accessorsArray[normalIndex]->AsObject();
						parseAccessor(accessorJson, accessorBufferViewIndex, accessorCount, accessorComponentType,accessorByteOffset, accessorType);

						if (accessorType.Equals("VEC3") && accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
							TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();

							int32 bufferViewIndex = -1;
							int32 bufferViewByteLength = -1;
							int32 bufferViewByteOffset = 0;
							int32 bufferViewByteStride = 0;

							parseBufferView(bufferViewJson, accessorCount, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);

							bufferViewByteOffset += accessorByteOffset;
							int32 dataLength = accessorCount * 12; //VEC3 = x,y,z float each 4 bytes so 12 bytes
							if (bufferViewByteStride > 12) {
								dataLength = accessorCount * bufferViewByteStride;
							}

							if (bufferViewIndex >= 0 && bufferViewIndex < buffersArray.Num()) {
								TSharedPtr<FJsonObject> bufferJson = buffersArray[bufferViewIndex]->AsObject();

								TArray<uint8> data = getDataArray(isBinary, bufferViewByteOffset, dataLength, bufferViewIndex, dir, bufferJson, readers,  bufferCache,  binData);

								if (accessorComponentType == 5126) {
									mesh.normals = dataArrayToFVectorArray(data,bufferViewByteStride);
									normalsCount += mesh.normals.Num();
									data.Empty();
								}
							}
						}
					}

					//UVs
					if (texcoord_0Index >= 0 && texcoord_0Index < accessorsArray.Num()) {

						int32 accessorBufferViewIndex = -1;
						int32 accessorCount = -1;
						int32 accessorComponentType = -1;
						int32 accessorByteOffset = 0;
						FString accessorType;

						TSharedPtr<FJsonObject> accessorJson = accessorsArray[texcoord_0Index]->AsObject();
						parseAccessor(accessorJson, accessorBufferViewIndex, accessorCount, accessorComponentType,accessorByteOffset, accessorType);

						if (accessorType.Equals("VEC2") && accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
							TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();

							int32 bufferViewIndex = -1;
							int32 bufferViewByteLength = -1;
							int32 bufferViewByteOffset = 0;
							int32 bufferViewByteStride = 0;

							parseBufferView(bufferViewJson, accessorCount, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);

							bufferViewByteOffset += accessorByteOffset;
							int32 dataLength = accessorCount * 8; //VEC2 = x,y float each 4 bytes so 8 bytes
							if (bufferViewByteStride > 8) {
								dataLength = accessorCount * bufferViewByteStride;
							}

							if (bufferViewIndex >= 0 && bufferViewIndex < buffersArray.Num()) {
								TSharedPtr<FJsonObject> bufferJson = buffersArray[bufferViewIndex]->AsObject();


								TArray<uint8> data = getDataArray(isBinary, bufferViewByteOffset, dataLength, bufferViewIndex, dir, bufferJson, readers,  bufferCache,  binData);

								if (accessorComponentType == 5126) {
									mesh.UV0 = dataArrayToFVector2DArray(data, bufferViewByteStride);
									UV0Count += mesh.UV0.Num();
									data.Empty();
								}
							}
						}
					}


					//materials
					if (materialIndex >= 0 && materialIndex < materialsArray.Num()) {

						float percent = ((float)materialIndex + 1) / (float)materialsArray.Num() * 100.f;
						AsyncTask(ENamedThreads::GameThread, [asyncNode,percent]() {
							if (asyncNode != nullptr) {
								asyncNode->setMaterialProgress(percent);
								//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: subpercent: %f"),percent);
							}
						});

						TSharedPtr<FJsonObject> materialJson = materialsArray[materialIndex]->AsObject();

						if (materialJson->HasTypedField<EJson::String>(TEXT("name"))) {
							mesh.materialData.materialName = materialJson->GetStringField(TEXT("name"));
							mesh.hasMaterialData = true;
						}

						//difuse texture
						if (materialJson->HasTypedField<EJson::Object>(TEXT("pbrMetallicRoughness"))) {
							TSharedPtr<FJsonObject> pbrMetallicRoughness = materialJson->GetObjectField(TEXT("pbrMetallicRoughness"));

							if (pbrMetallicRoughness->HasTypedField<EJson::Object>(TEXT("baseColorTexture"))) {
								TSharedPtr<FJsonObject> baseColorTexture = pbrMetallicRoughness->GetObjectField(TEXT("baseColorTexture"));
								int32 textureIndex = -1;
								if (baseColorTexture->HasTypedField<EJson::Number>(TEXT("index"))) {
									textureIndex = baseColorTexture->GetNumberField(TEXT("index"));
								}

								bool isCached = generateTexture(isBinary,textureIndex,ERTITextureType::E_Kd, dir, cacheTexture, useSRGB, createMipMaps, rgbFormat,
									texturesArray, imagesArray,bufferViewsArray, binData,bufferCache, mesh);
							}

							//metal
							if (pbrMetallicRoughness->HasTypedField<EJson::Object>(TEXT("metallicRoughnessTexture"))) {
								TSharedPtr<FJsonObject> metallicRoughnessTexture = pbrMetallicRoughness->GetObjectField(TEXT("metallicRoughnessTexture"));
								int32 textureIndex = -1;
								if (metallicRoughnessTexture->HasTypedField<EJson::Number>(TEXT("index"))) {
									textureIndex = metallicRoughnessTexture->GetNumberField(TEXT("index"));
								}

								bool isCached = generateTexture(isBinary,textureIndex,ERTITextureType::E_Pm, dir, cacheTexture, useSRGB, createMipMaps, rgbFormat,
									texturesArray, imagesArray,bufferViewsArray, binData,bufferCache, mesh);
							}

							if (pbrMetallicRoughness->HasTypedField<EJson::Number>(TEXT("metallicFactor"))) {
								mesh.materialData.metallicFactor =  pbrMetallicRoughness->GetNumberField(TEXT("metallicFactor"));
							}
							if (pbrMetallicRoughness->HasTypedField<EJson::Number>(TEXT("roughnessFactor"))) {
								mesh.materialData.roughnessFactor =  pbrMetallicRoughness->GetNumberField(TEXT("roughnessFactor"));
							}

							if (pbrMetallicRoughness->HasTypedField<EJson::Array>(TEXT("baseColorFactor"))) {
								TArray<TSharedPtr<FJsonValue>> baseColorFactor = pbrMetallicRoughness->GetArrayField(TEXT("baseColorFactor"));
								if (baseColorFactor.Num() == 4) {
									uint8 R = baseColorFactor[0]->AsNumber() * 255.f;
									uint8 G = baseColorFactor[1]->AsNumber() * 255.f;
									uint8 B = baseColorFactor[2]->AsNumber() * 255.f;
									uint8 A = baseColorFactor[3]->AsNumber() * 255.f;
									mesh.materialData.diffuse = FColor(R,G,B,A);
								}
							}
						}

						//normal texture
						if (materialJson->HasTypedField<EJson::Object>(TEXT("normalTexture"))) {
							TSharedPtr<FJsonObject> normalTextureJson = materialJson->GetObjectField(TEXT("normalTexture"));

							int32 textureIndex = -1;
							if (normalTextureJson->HasTypedField<EJson::Number>(TEXT("index"))) {
								textureIndex = normalTextureJson->GetNumberField(TEXT("index"));
							}
							bool isCached = generateTexture(isBinary,textureIndex, ERTITextureType::E_norm, dir, cacheTexture, useSRGB, createMipMaps, rgbFormat,
								texturesArray, imagesArray,bufferViewsArray, binData,bufferCache, mesh);
						}


						//occlusion texture
						if (materialJson->HasTypedField<EJson::Object>(TEXT("occlusionTexture"))) {
							TSharedPtr<FJsonObject> normalTextureJson = materialJson->GetObjectField(TEXT("occlusionTexture"));

							int32 textureIndex = -1;
							if (normalTextureJson->HasTypedField<EJson::Number>(TEXT("index"))) {
								textureIndex = normalTextureJson->GetNumberField(TEXT("index"));
							}
							bool isCached = generateTexture(isBinary,textureIndex, ERTITextureType::E_occ, dir, cacheTexture, useSRGB, createMipMaps, rgbFormat,
								texturesArray, imagesArray,bufferViewsArray, binData,bufferCache, mesh);
						}

						//emissive texture
						if (materialJson->HasTypedField<EJson::Object>(TEXT("emissiveTexture"))) {
							TSharedPtr<FJsonObject> normalTextureJson = materialJson->GetObjectField(TEXT("emissiveTexture"));

							int32 textureIndex = -1;
							if (normalTextureJson->HasTypedField<EJson::Number>(TEXT("index"))) {
								textureIndex = normalTextureJson->GetNumberField(TEXT("index"));
							}
							bool isCached = generateTexture(isBinary,textureIndex, ERTITextureType::E_Ke, dir, cacheTexture, useSRGB, createMipMaps, rgbFormat,
								texturesArray, imagesArray,bufferViewsArray, binData,bufferCache, mesh);
						}
						//emissive
						if (materialJson->HasTypedField<EJson::Array>(TEXT("emissiveFactor"))) {
							TArray<TSharedPtr<FJsonValue>> emissiveFactor = materialJson->GetArrayField(TEXT("emissiveFactor"));
							if (emissiveFactor.Num() == 3) {
								uint8 R = emissiveFactor[0]->AsNumber() * 255.f;
								uint8 G = emissiveFactor[1]->AsNumber() * 255.f;
								uint8 B = emissiveFactor[2]->AsNumber() * 255.f;
								mesh.materialData.emissive = FColor(R,G,B);
							}
						}

					}

					//create polygons
					//switch (mode)
					//{
					//case 0:
					//	mesh.triangles = indeces;
					//	mesh.vertices = vertices;
					//	mesh.normals = normals;
					//	break;

					//}
					/*	for (int32 L = 0; L < indeces.Num(); L++){
					mesh.triangles.Add(indeces[L]);
					}*/
					//left handed
					/*for (int32 L = indeces.Num()-1; L >= 0; L--) {
					mesh.triangles.Add(indeces[L]);
					}*/
				}

				
				//if (mesh.joins.Num() > 0 && model->skinID > -1) {
				//	if (skeletonMap.Find(model->skinID) != nullptr) {
				//		mesh.skeleton = *skeletonMap.Find(model->skinID);
				//		//bone vertices connection
				//		if (mesh.vertices.Num() >= mesh.joins.Num()) {
				//			for (int32 k = 0; k < mesh.joins.Num(); k++) {
				//				TArray<int16> joins = mesh.joins[k];
				//				TArray<float> weights = mesh.weights[k];
				//				if (joins.Num() != weights.Num()) {
				//					continue;
				//				}
				//				for (int32 m = 0; m < joins.Num(); m++) {
				//					if (mesh.skeleton->bones.Num() > joins[m] && weights[m] != 0) {
				//						FRTIBone* bone = mesh.skeleton->bones[joins[m]];
				//						if (bone->uniqueVerticesTestMap.Find(k) == nullptr) {
				//							bone->uniqueVerticesTestMap.Add(k, true);

				//							if (bone->vertices.Num() == 0) {
				//								bone->triangles = mesh.triangles;
				//								/*bone->triangles.AddUninitialized(mesh.triangles.Num() - k);
				//								FMemory::Memcpy(bone->triangles.GetData(), mesh.triangles.GetData() + k, bone->triangles.Num() * 4);*/
				//							}
				//							
				//							bone->vertices.Add(mesh.vertices[k] + bone->inverseBindMatrice.GetLocation());
				//							
				//							//bone->triangles = mesh.triangles;
				//							//if (mesh.trianglesVerticesIndeces.Find(k) != nullptr) {
				//							//	bone->triangles.Add(bone->vertices.Num()-1);// = mesh.triangles;
				//							//}
				//						}
				//					}
				//				}
				//			}
				//		}
				//	}
				//}

				model->meshStructs.Add(mesh);
			}

			modelStructsPtrArray.Add(model);
		}

		//animations
		for (int32 i = 0; i < animationsArray.Num(); i++) {
			TSharedPtr<FJsonObject> animationJson = animationsArray[i]->AsObject();

			TArray<TSharedPtr<FJsonValue>> channelsArray = animationJson->GetArrayField(TEXT("channels"));
			TArray<TSharedPtr<FJsonValue>> samplersArray = animationJson->GetArrayField(TEXT("samplers"));
			for (int32 j = 0; j < channelsArray.Num(); j++){
				TSharedPtr<FJsonObject> channelJson = channelsArray[j]->AsObject();

				int32 samplerIndex = -1;
				int32 nodeIndex = -1;
				FString path;
				if (channelJson->HasTypedField<EJson::Number>(TEXT("sampler"))) {
					samplerIndex = channelJson->GetNumberField(TEXT("sampler"));
				}
				if (channelJson->HasTypedField<EJson::Object>(TEXT("target"))) {
					TSharedPtr<FJsonObject> targetJson = channelJson->GetObjectField(TEXT("target"));
						
					if (targetJson->HasTypedField<EJson::Number>(TEXT("node"))) {
						nodeIndex = targetJson->GetNumberField(TEXT("node"));
					}

					if (targetJson->HasTypedField<EJson::String>(TEXT("path"))) {
						path = targetJson->GetStringField(TEXT("path"));
					}


					if (samplerIndex >= 0 && samplerIndex < samplersArray.Num() &&
						nodeIndex >= 0 && nodeIndex < nodesArray.Num() &&
						(path.Equals("translation") || path.Equals("rotation") || path.Equals("scale"))){


						TSharedPtr<FJsonObject> samplerJson = samplersArray[samplerIndex]->AsObject();

						int32 inputIndex = -1;
						int32 outputIndex = -1;

						if (samplerJson->HasTypedField<EJson::Number>(TEXT("input"))) {
							inputIndex = samplerJson->GetNumberField(TEXT("input"));
						}
						if (samplerJson->HasTypedField<EJson::Number>(TEXT("output"))) {
							outputIndex = samplerJson->GetNumberField(TEXT("output"));
						}

						if (inputIndex >= 0 && inputIndex < accessorsArray.Num() &&
							outputIndex >= 0 && outputIndex < accessorsArray.Num()) {

							FRTIModelStruct* model = nullptr;
							FRTIBone* bone = nullptr;

							if (joinsMap.Find(nodeIndex) != nullptr) {
								bone = *joinsMap.Find(nodeIndex);
							}
							else {
								if (modelStructPtrMap.Find(nodeIndex) != nullptr) {
									model = *modelStructPtrMap.Find(nodeIndex);
								}
							}

							if (model == nullptr && bone == nullptr) {
								UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: Something went wrong during parsing. I can't find a bone or model for the animation %i. File: %s"),nodeIndex, *dir);
								continue;
							}
							

							FRTIAnimationFrame* animationFrame = new FRTIAnimationFrame(); 

						

							//check if the key.num == data.num ?
							if (path.Equals("translation")) {
								animationFrame->type = ERTIAnimationsFrameType::E_Location;
							}
							else {
								if (path.Equals("rotation")) {
									animationFrame->type = ERTIAnimationsFrameType::E_Rotate;
								}
								else {
									animationFrame->type = ERTIAnimationsFrameType::E_Scale;
								}
							}

						

							//time data
							int32 accessorBufferViewIndex = -1;
							int32 accessorCount = -1;
							int32 accessorComponentType = -1;
							int32 accessorByteOffset = 0;
							FString accessorType;

							TSharedPtr<FJsonObject> accessorJson = accessorsArray[inputIndex]->AsObject();
							parseAccessor(accessorJson, accessorBufferViewIndex, accessorCount, accessorComponentType,accessorByteOffset, accessorType);


							if (accessorJson->HasTypedField<EJson::Array>(TEXT("max"))) {
								TArray<TSharedPtr<FJsonValue>> a = accessorJson->GetArrayField(TEXT("max"));
								if (a.Num() > 0) {
									if (bone != nullptr) {
										bone->animationMaxTimeKey = a[0]->AsNumber();
									}
									else {
										model->animationMaxTimeKey = a[0]->AsNumber();
									}
								}
							}

							if (accessorJson->HasTypedField<EJson::Array>(TEXT("min"))) {
								TArray<TSharedPtr<FJsonValue>> a = accessorJson->GetArrayField(TEXT("min"));
								if (a.Num() > 0) {
									if (bone != nullptr) {
										bone->animationMinTimeKey = a[0]->AsNumber();
									}
									else {
										model->animationMinTimeKey = a[0]->AsNumber();
									}
								}
							}

							if (accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
								TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();

								int32 bufferViewIndex = -1;
								int32 bufferViewByteLength = -1;
								int32 bufferViewByteOffset = 0;
								int32 bufferViewByteStride = 0;


								parseBufferView(bufferViewJson, accessorCount, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);
																
								bufferViewByteOffset += accessorByteOffset;

								int8 byteSize = 1;
					
								switch (accessorComponentType)
								{
								case 5122:
								case 5123:
									byteSize = 2;
									break;
								case 5125:
								case 5126:
									byteSize = 4;
									break;
								}


								int32 dataLength = accessorCount * byteSize;
								
								if (bufferViewIndex >= 0 && bufferViewIndex < buffersArray.Num()) {
									TSharedPtr<FJsonObject> bufferJson = buffersArray[bufferViewIndex]->AsObject();


									TArray<uint8> data = getDataArray(isBinary, bufferViewByteOffset, dataLength, bufferViewIndex, dir, bufferJson, readers,  bufferCache,  binData);

				
									switch (accessorComponentType)
									{
									/*case 5120:
									case 5121:
										dataArrayToInt32ArrayWithInt8Values(data, bufferViewByteStride);
										break;
									case 5122:
									case 5123:
										dataArrayToInt32ArrayWithInt16Values(data, bufferViewByteStride);
										break;*/
									//case 5125:
									case 5126:
										animationFrame->timeKeys = dataArrayToFloatArray(data, bufferViewByteStride);
										break;
									}
									//model->animationsFrames.Add(animationFrame);
								}
							}

							//position data
							accessorJson = accessorsArray[outputIndex]->AsObject();
							parseAccessor(accessorJson, accessorBufferViewIndex, accessorCount, accessorComponentType,accessorByteOffset, accessorType);

							if (accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
								TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();

								int32 bufferViewIndex = -1;
								int32 bufferViewByteLength = -1;
								int32 bufferViewByteOffset = 0;
								int32 bufferViewByteStride = 0;


								parseBufferView(bufferViewJson, accessorCount, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);

								bufferViewByteOffset += accessorByteOffset;

								int8 byteSize = 1;
								int8 byteCount = 1;

								switch (accessorComponentType)
								{
								case 5122:
								case 5123:
									byteSize = 2;
									break;
								case 5125:
								case 5126:
									byteSize = 4;
									break;
								}

								if (accessorType.Equals("VEC2")) {
									byteCount = 2;
								}
								else {
									if (accessorType.Equals("VEC3")) {
										byteCount = 3;
									}
									else {
										if (accessorType.Equals("VEC4")) {
											byteCount = 4;
										}
									}
								}

								int32 dataLength = accessorCount * byteSize * byteCount;

								if (bufferViewIndex >= 0 && bufferViewIndex < buffersArray.Num()) {
									TSharedPtr<FJsonObject> bufferJson = buffersArray[bufferViewIndex]->AsObject();


									TArray<uint8> data = getDataArray(isBinary, bufferViewByteOffset, dataLength, bufferViewIndex, dir, bufferJson, readers,  bufferCache,  binData);

									
									switch (accessorComponentType)
									{
										/*case 5120:
										case 5121:
										dataArrayToInt32ArrayWithInt8Values(data, bufferViewByteStride);
										break;
										case 5122:
										case 5123:
										dataArrayToInt32ArrayWithInt16Values(data, bufferViewByteStride);
										break;*/
										//case 5125:
									case 5126:
										switch (animationFrame->type)
										{
										case ERTIAnimationsFrameType::E_Location:
											animationFrame->locations = dataArrayToFVectorArray(data, bufferViewByteStride);
											break;
										case ERTIAnimationsFrameType::E_Scale:
											animationFrame->scales = dataArrayToFVectorArray(data, bufferViewByteStride);
											break;
										case ERTIAnimationsFrameType::E_Rotate:
											animationFrame->rotations = dataArrayToFRotatorArray(data, bufferViewByteStride);
											break;
										}
			
										break;
									}
								}
							}
							if (bone != nullptr) {
								bone->animationFrames.Add(animationFrame);
							}
							else {
								model->animationFrames.Add(animationFrame);
							}
						}
					}
				}

					

			}
		
		}
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: (2) Can't parse json in file: %s"), *dir);
		successMessage = "Can't parse json in file: " + dir;
		return;
	}


	
	
	//children parent connection
	for (int32 i = 0; i <  modelStructsPtrArray.Num(); i++) {	
		FRTIModelStruct* model = modelStructsPtrArray[i];
		for (int32 j = 0; j < model->children.Num(); j++) {
			int64 childModelID = model->children[j];

			////bone parent (skeleton)
			//if (joinsMap.Find(childModelID) != nullptr) {
			//	FRTIBone* bone = *joinsMap.Find(childModelID);
			//	bone->parent = model->modelID;
			//	FRotator r = FRotator(bone->relativeTransform.GetRotation());
			//	FRotator r2 = FRotator(model->relativeTransform.GetRotation());
			//	FRotator r3 = FRotator(bone->inverseBindMatrice.GetRotation());
			//	//bone->relativeTransform.SetRotation(bone->relativeTransform.GetRotation() + model->relativeTransform.GetRotation());
			//	continue;
			//}

			if (modelStructPtrMap.Find(childModelID) != nullptr) {
				FRTIModelStruct* childModel = *modelStructPtrMap.Find(childModelID);
				childModel->parent = model->modelID;
			}
		}
		
	}

	////child parent connection on bones
	//for (int32 i = 0; i <  modelStructsPtrArray.Num(); i++) {	
	//	FRTIModelStruct* model = modelStructsPtrArray[i];
	//			
	//	if (model->joins.Num() > 0 && model->skeleton != nullptr && model->skinID > -1) {

	//		//root bone
	//		if (model->skeleton->bones.Num() > 0) {
	//			model->skeleton->bones[0]->parent = 66;// model->modelID;
	//			//model->meshStructs[0].
	//		}

	//		for (int32 k = 0; k < model->skeleton->bones.Num(); k++) {
	//			FRTIBone* bone = model->skeleton->bones[k];
	//			if (bone->animationFrames.Num() > 0) {
	//				modelStructsPtrArray[i]->skeletonAnimation = true;
	//			}
	//			bone->debugStart = bone->relativeTransform.GetLocation();
	//			for (int32 m = 0; m < bone->children.Num(); m++) {
	//				int64 childID = bone->children[m];
	//				if (joinsMap.Find(childID) != nullptr) {
	//					FRTIBone* childBone = *joinsMap.Find(childID);
	//					childBone->parent = bone->id;
	//					childBone->debugEnd = bone->debugStart;
	//				}
	//			}
	//		}
	//	}
	//}

	
	TMap<int32, FRTIModelStruct*> modelStructCache;
	for (int32 i = 0; i < modelStructsPtrArray.Num(); i++){
		//we need the parents first in the array
		addMeshesRecursive(modelStructs,modelStructPtrMap, modelStructCache , modelStructsPtrArray[i]);
	}


	//child parent connection on bones
	for (int32 i = 0; i <  modelStructs.Num(); i++) {	

		if (/*modelStructs[i].joins.Num() > 0 && */modelStructs[i].skeleton != nullptr && modelStructs[i].skinID > -1) {

			//root bone = skeleton. Put Model (mesh) in Skeleton
			if (modelStructs[i].skeleton->bones.Num() > 0) {

				if (modelStructPtrMap.Find(modelStructs[i].skeleton->id) != nullptr) {
					modelStructs[i].skeleton->bones[0]->parent = modelStructs[i].skeleton->id;
				}
				else {
					modelStructs[i].skeleton->bones[0]->parent =  modelStructs[i].parent;

					if (modelStructPtrMap.Find(modelStructs[i].parent) != nullptr) {
						FRTIModelStruct* parentModel = *modelStructPtrMap.Find(modelStructs[i].parent);
					
						bool foundMesh = false;
						bool foundSkeleton = false;
						for (int32 j = 0; j < parentModel->children.Num(); j++){
							
							if (parentModel->children[j] == modelStructs[i].modelID) {
								foundMesh = true;
								continue;
							}
							if (parentModel->children[j] == modelStructs[i].skeleton->id) {
								foundSkeleton = true;
							}
						}

						if (foundMesh && foundSkeleton) {
							modelStructs[i].parent = parentModel->parent;
						}
					}
					
				}

				for (int32 k = 0; k < modelStructs[i].skeleton->bones.Num(); k++) {
					FRTIBone* bone = modelStructs[i].skeleton->bones[k];
					if (bone->animationFrames.Num() > 0) {
						modelStructsPtrArray[i]->skeletonAnimation = true;
					}
					bone->debugStart = bone->relativeTransform.GetLocation();
					for (int32 m = 0; m < bone->children.Num(); m++) {
						int64 childID = bone->children[m];
						if (joinsMap.Find(childID) != nullptr) {
							FRTIBone* childBone = *joinsMap.Find(childID);
							childBone->parent = bone->id;
							childBone->debugEnd = bone->debugStart;
						}
					}
				}

				//if (mesh.joins.Num() > 0 && model->skinID > -1) {
				//	if (skeletonMap.Find(model->skinID) != nullptr) {
				//		mesh.skeleton = *skeletonMap.Find(model->skinID);
				//		//bone vertices connection
				//		if (mesh.vertices.Num() >= mesh.joins.Num()) {
				//			for (int32 k = 0; k < mesh.joins.Num(); k++) {
				//				TArray<int16> joins = mesh.joins[k];
				//				TArray<float> weights = mesh.weights[k];
				//				if (joins.Num() != weights.Num()) {
				//					continue;
				//				}
				//				for (int32 m = 0; m < joins.Num(); m++) {
				//					if (mesh.skeleton->bones.Num() > joins[m] && weights[m] != 0) {
				//						FRTIBone* bone = mesh.skeleton->bones[joins[m]];
				//						if (bone->uniqueVerticesTestMap.Find(k) == nullptr) {
				//							bone->uniqueVerticesTestMap.Add(k, true);

				//							if (bone->vertices.Num() == 0) {
				//								bone->triangles = mesh.triangles;
				//								/*bone->triangles.AddUninitialized(mesh.triangles.Num() - k);
				//								FMemory::Memcpy(bone->triangles.GetData(), mesh.triangles.GetData() + k, bone->triangles.Num() * 4);*/
				//							}
				//							
				//							bone->vertices.Add(mesh.vertices[k] + bone->inverseBindMatrice.GetLocation());
				//							
				//							//bone->triangles = mesh.triangles;
				//							//if (mesh.trianglesVerticesIndeces.Find(k) != nullptr) {
				//							//	bone->triangles.Add(bone->vertices.Num()-1);// = mesh.triangles;
				//							//}
				//						}
				//					}
				//				}
				//			}
				//		}
				//	}
				//}
								
			}

		}
	}

	//clean
	for (auto& element : readers) {
		if (element.Value != nullptr) {
			element.Value->Close();
			delete element.Value;
			element.Value = nullptr;
		}
	}
	readers.Empty();

	for (auto& element : bufferCache) {
		element.Value.Empty();
	}
	bufferCache.Empty();

	for (int32 i = 0; i < modelStructsPtrArray.Num(); i++){
		delete modelStructsPtrArray[i];
		modelStructsPtrArray[i] = nullptr;
	}

	//skeletonMapByNodeID.Empty();
	skeletonMapBySkinID.Empty();
	joinsMap.Empty();
	modelStructCache.Empty();
	modelStructPtrMap.Empty();

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
		FString::FromInt(vertexColorsCount)+ " Tangents:" + FString::FromInt(tangentsCount) + " Triangulated Faces: 0";

	UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: %s"), *successMessage);

	duration = FDateTime::Now().GetTicks() - duration;
	UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: Duration in Milliseconds: %i"), (duration/10000));
	


	if (asyncNode != nullptr) {
		AsyncTask(ENamedThreads::GameThread, [asyncNode]() {
			if (asyncNode != nullptr) {
				asyncNode->setProgress(100);
				asyncNode->setMaterialProgress(100);
			}
		});
	}

	//modelStructs[0].relativeTransform = FTransform();
	//modelStructs[0].relativeTransform.SetScale3D(FVector(1, 1, 1));
	
	//modelStructs[1].skeleton->bones[0]->parent = 2;
	//das brain model hat eine matrix als transform
}

void URealTimeImportMeshglTF::LoadglTF_File(FString dir,bool& success, FString& successMessage, TArray<FRTIModelStruct>& modelStructs,
	bool cacheTexture, bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat,URealTimeImportAsyncNodeLoadMesh* asyncNode){

	//json file
	FString jsonString;
	if (!FFileHelper::LoadFileToString(jsonString, *dir)) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file: %s"), *dir);
		success = false;
		successMessage = "Can't load file: " + dir;
		return;
	}
	TArray<uint8> data;
	parseData(false, jsonString, dir, data,
		success, successMessage, modelStructs, cacheTexture, useSRGB, createMipMaps,
		rgbFormat, asyncNode);
}

void URealTimeImportMeshglTF::LoadGLB_File(FString dir, bool& success, FString& successMessage, TArray<FRTIModelStruct>& modelStructs,	bool cacheTexture,
	bool useSRGB, 
	bool createMipMaps,
	ERTIERGBFormat rgbFormat, URealTimeImportAsyncNodeLoadMesh* asyncNode){
	TArray<uint8> data;

	FArchive* reader = IFileManager::Get().CreateFileReader(*dir);
	if (!reader || reader->TotalSize() < 100) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file: %s"), *dir);
		success = false;
		successMessage = "Can't load file: " + dir;
		return;
	}

	//head. wie just need the magic bytes
	char charArray[5];
	charArray[4] = 0x00;
	reader->Serialize(&charArray, 4);

	if (FString(UTF8_TO_TCHAR(charArray)).Equals("glTF") == false) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: This is not a glTF/GDB file: %s"), *dir);
		success = false;
		successMessage = "This is not a glTF/GDB file: " + dir;
		return;
	}

	int64 fileSize = reader->TotalSize();

	//read chunks
	int64 filePosition = 12;
	while (filePosition < fileSize) {
		reader->Seek(filePosition);
		
		//Chunk info (json)
		uint32 chunkLength = 0;
		reader->Serialize(&chunkLength, 4);
		
		filePosition += 4;
		if (filePosition > fileSize) {
			break;
		}
		reader->Seek(filePosition);

		charArray[4] = 0x00;
		reader->Serialize(&charArray, 4);
		FString chunkType = FString(UTF8_TO_TCHAR(charArray));

		filePosition += 4;
		if (filePosition > fileSize) {
			break;
		}
		reader->Seek(filePosition);

		data.Empty();
		data.AddUninitialized(chunkLength);
		FString jsonString;
		if (chunkType.Equals("JSON")) {
			reader->Serialize(data.GetData(), chunkLength);
			data.Add(0x00);
			jsonString = FString(UTF8_TO_TCHAR(data.GetData()));
			//FFileHelper::SaveStringToFile(jsonString, TEXT("d:/test.json"));
		}
		
		filePosition += chunkLength;
		if (filePosition > fileSize) {
			break;
		}
		reader->Seek(filePosition);


		//Chunk info (binary buffer)
		chunkLength = 0;
		reader->Serialize(&chunkLength, 4);

		filePosition += 4;
		if (filePosition > fileSize) {
			break;
		}
		reader->Seek(filePosition);

		charArray[4] = 0x00;
		reader->Serialize(&charArray, 4);
		chunkType = FString(UTF8_TO_TCHAR(charArray));

		filePosition += 4;
		if (filePosition > fileSize) {
			break;
		}
		reader->Seek(filePosition);

		data.Empty();
		data.AddUninitialized(chunkLength);

		if (chunkType.Equals("BIN")) {
			reader->Serialize(data.GetData(), chunkLength);
			parseData(true, jsonString, dir, data,
				success, successMessage, modelStructs, cacheTexture, useSRGB, createMipMaps,
				rgbFormat, asyncNode);
		}

		filePosition += chunkLength;
		if (filePosition > fileSize) {
			break;
		}
		reader->Seek(filePosition);
	}

	if (reader != nullptr) {
		reader->Close();
		delete reader;
		reader = nullptr;
	}
	data.Empty();
	

}

bool URealTimeImportMeshglTF::generateTexture(bool isBinary, int32 textureIndex, ERTITextureType type, FString originalFileDir,
	bool cacheTexture,bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat,
	TArray<TSharedPtr<FJsonValue>>& texturesArray,TArray<TSharedPtr<FJsonValue>>& imagesArray,
	TArray<TSharedPtr<FJsonValue>>& bufferViewsArray,TArray<uint8>& binData,TMap<FString, TArray<uint8>>& bufferCache,
	FRTIMeshStruct& mesh){

	bool isCached = false;

	if (textureIndex >= 0 && textureIndex < texturesArray.Num()) {
		TSharedPtr<FJsonObject> textureJson = texturesArray[textureIndex]->AsObject();
		int32 imageIndex = -1;
		if (textureJson->HasTypedField<EJson::Number>(TEXT("source"))) {
			imageIndex = textureJson->GetNumberField(TEXT("source"));
		}
		if (imageIndex >= 0 && imageIndex < imagesArray.Num()) {
			TSharedPtr<FJsonObject> imageJson = imagesArray[imageIndex]->AsObject();

			FRTITextureStruct textureStruct = FRTITextureStruct();
			textureStruct.textureType = type;
			mesh.materialData.isEmpty = false;

			if (imageJson->HasTypedField<EJson::String>(TEXT("name"))) {
				textureStruct.textureName = imageJson->GetStringField(TEXT("name"));
			}
			/*FString uri;
			FString mimeType;
			if (imageJson->HasTypedField<EJson::String>(TEXT("mimeType"))) {
				mimeType = imageJson->GetStringField(TEXT("mimeType"));
			}
			if (imageJson->HasTypedField<EJson::String>(TEXT("uri"))) {
				uri = UrlDecode(imageJson->GetStringField(TEXT("uri")));
			}*/


		

			int32 accessorBufferViewIndex = -1;
			if (imageJson->HasTypedField<EJson::Number>(TEXT("bufferView"))) {
				accessorBufferViewIndex = imageJson->GetNumberField(TEXT("bufferView"));
			}

			int32 bufferViewIndex = -1;
			int32 bufferViewByteLength = -1;
			int32 bufferViewByteOffset = 0;
			int32 bufferViewByteStride = 0;

			if (accessorBufferViewIndex >= 0 && accessorBufferViewIndex < bufferViewsArray.Num()) {
				TSharedPtr<FJsonObject> bufferViewJson = bufferViewsArray[accessorBufferViewIndex]->AsObject();
				parseBufferView(bufferViewJson, 0, bufferViewIndex, bufferViewByteLength, bufferViewByteOffset, bufferViewByteStride);
			}
			
			TArray<uint8> data;

			if (isBinary) {
				data = getDataFromBuffer(bufferViewByteOffset, bufferViewByteLength, binData);
			}
			else {
				if (bufferCache.Find("imageIndex_"+FString::FromInt(imageIndex)) != nullptr) {
					data = getDataFromBuffer(bufferViewByteOffset, bufferViewByteLength, *bufferCache.Find("imageIndex_"+FString::FromInt(imageIndex)));
				}
				else {

					FString uri;
					if (imageJson->HasTypedField<EJson::String>(TEXT("uri"))) {
						uri = UrlDecode(imageJson->GetStringField(TEXT("uri")));
					}
					//base64 Data
					if (uri.StartsWith("data:")) {
						if (uri.StartsWith("data:image/jpeg;base64,")) {
							uri.RemoveAt(0, 23);
						}
						else {
							if (uri.StartsWith("data:image/png;base64,")) {
								uri.RemoveAt(0, 22);
							}
						}
			
						FBase64::Decode(*uri, data);
						bufferCache.Add("imageIndex_"+FString::FromInt(imageIndex), data);
		
					}
					else {//image file
						FString imageDir = originalFileDir.Replace(*FPaths::GetCleanFilename(*originalFileDir), *uri);
						FString fileName;
						int32 errorCode;
						FString errorMessage;

						isCached = URealTimeImportImage::getRealTimeImportImage()->LoadImageFile(
							ERTIDirectoryType::E_ad, imageDir, textureStruct.texture, fileName, errorCode, errorMessage,
							cacheTexture,	TextureCompressionSettings::TC_Default, useSRGB, createMipMaps,	rgbFormat);

						if (errorCode == 0) {
							mesh.materialData.textures.Add(textureStruct.textureName+"_"+uri, textureStruct);
						}
						return isCached;
					}
				}
			}
			//image buffer
			if (data.Num() > 0) {

				FString name = mesh.materialData.materialName+"_" + FString::FromInt(imageIndex);
				if (imageJson->HasTypedField<EJson::String>(TEXT("name"))) {
					name = imageJson->GetStringField(TEXT("name"))+"_" + FString::FromInt(imageIndex);
				}

				if (textureStruct.textureName.Len() == 0) {
					textureStruct.textureName = name;
				}

				int32 errorCode;
				FString errorMessage;

				isCached = URealTimeImportImage::getRealTimeImportImage()->LoadImageBytes(name,data,
					textureStruct.texture, errorCode, errorMessage,
					cacheTexture,	TextureCompressionSettings::TC_Default, useSRGB, createMipMaps,	rgbFormat);

				if (errorCode == 0) {
					mesh.materialData.textures.Add(textureStruct.textureName, textureStruct);
				}
			}
		}
	}
	return isCached;
}

void URealTimeImportMeshglTF::parseAccessor(TSharedPtr<FJsonObject> accessorJson,int32& accessorBufferViewIndex, int32& accessorCount,
	int32& accessorComponentType,  int32& accessorByteOffset, FString& accessorType){
	if (accessorJson->HasTypedField<EJson::Number>(TEXT("bufferView"))) {
		accessorBufferViewIndex = accessorJson->GetNumberField(TEXT("bufferView"));
	}
	if (accessorJson->HasTypedField<EJson::Number>(TEXT("count"))) {
		accessorCount = accessorJson->GetNumberField(TEXT("count"));
	}
	if (accessorJson->HasTypedField<EJson::Number>(TEXT("componentType"))) {
		accessorComponentType = accessorJson->GetNumberField(TEXT("componentType"));
	}
	if (accessorJson->HasTypedField<EJson::Number>(TEXT("byteOffset"))) {
		accessorByteOffset = accessorJson->GetNumberField(TEXT("byteOffset"));
	}
	if (accessorJson->HasTypedField<EJson::String>(TEXT("type"))) {
		accessorType = accessorJson->GetStringField(TEXT("type"));
	}
}

void URealTimeImportMeshglTF::parseBufferView(TSharedPtr<FJsonObject> bufferViewJson, int32 accessorCount,
	int32& bufferViewIndex, int32& bufferViewByteLength, int32& bufferViewByteOffset, int32& bufferViewByteStride){

	if (bufferViewJson->HasTypedField<EJson::Number>(TEXT("buffer"))) {
		bufferViewIndex = bufferViewJson->GetNumberField(TEXT("buffer"));
	}
	if (bufferViewJson->HasTypedField<EJson::Number>(TEXT("byteLength"))) {
		bufferViewByteLength = bufferViewJson->GetNumberField(TEXT("byteLength"));
	}
	if (bufferViewJson->HasTypedField<EJson::Number>(TEXT("byteOffset"))) {
		bufferViewByteOffset = bufferViewJson->GetNumberField(TEXT("byteOffset"));
	}
	if (bufferViewJson->HasTypedField<EJson::Number>(TEXT("byteStride"))) {
		bufferViewByteStride = bufferViewJson->GetNumberField(TEXT("byteStride"));
	}

	//https://github.com/KhronosGroup/glTF-Tutorials/blob/main/gltfTutorial/gltfTutorial_005_BuffersBufferViewsAccessors.md#data-interleaving
	//if (bufferViewByteStride > 0){
	//	bufferViewByteLength = bufferViewByteLength + (bufferViewByteStride * accessorCount);
	//}
}


TArray<uint8> URealTimeImportMeshglTF::getDataArray(bool isBinary, int32 bufferViewByteOffset, int32 dataLength, int32 bufferViewIndex, FString dir,
	TSharedPtr<FJsonObject> bufferJson,TMap<FString,FArchive*>& readers, TMap<FString, TArray<uint8>>& bufferCache, TArray<uint8>& binData){

	if (isBinary) {
		return getDataFromBuffer(bufferViewByteOffset, dataLength, binData);
	}
	else {

		if (bufferCache.Find("bufferViewIndex_"+FString::FromInt(bufferViewIndex)) != nullptr) {
			return getDataFromBuffer(bufferViewByteOffset, dataLength, *bufferCache.Find("bufferViewIndex_"+FString::FromInt(bufferViewIndex)));
		}
		else {

			FString uri;
			if (bufferJson->HasTypedField<EJson::String>(TEXT("uri"))) {
				uri = UrlDecode(bufferJson->GetStringField(TEXT("uri")));
			}
			//base64 Data
			if (uri.StartsWith("data:")) {
				if (uri.StartsWith("data:application/octet-stream;base64,")) {
					uri.RemoveAt(0, 37);
				}
				else {
					if (uri.StartsWith("data:application/gltf-buffer;base64,")) {
						uri.RemoveAt(0, 36);
					}
				}
				TArray<uint8> bufferData;
				FBase64::Decode(*uri, bufferData);
				bufferCache.Add("bufferViewIndex_"+FString::FromInt(bufferViewIndex), bufferData);
				return getDataFromBuffer(bufferViewByteOffset, dataLength, bufferData);
			}
			else {
				return getDataFromFile(bufferViewByteOffset, dataLength, readers, dir, uri);
			}
		}
	}
}


TArray<uint8> URealTimeImportMeshglTF::getDataFromFile(int32 offset, int32 length, TMap<FString, FArchive*>& readerCache, FString originalDir, FString fileDir){
	
	TArray<uint8> data;

	FString binDir = originalDir.Replace(*FPaths::GetCleanFilename(*originalDir), *fileDir);
	FArchive* reader = nullptr;
	if (readerCache.Find(binDir) == nullptr) {
		reader = IFileManager::Get().CreateFileReader(*binDir);
		if (!reader) {
			return data;
		}
		readerCache.Add(binDir, reader);
	}
	else {
		reader = *readerCache.Find(binDir);
		if (!reader) {
			return data;
		}
	}

	if (offset >= 0 && length > 0 && reader->TotalSize() >= (offset + length)) {
		reader->Seek(offset);
		data.AddUninitialized(length);
		reader->Serialize(data.GetData(), length);
	}
	return data;
}

TArray<uint8> URealTimeImportMeshglTF::getDataFromBuffer(int32 offset, int32 length, TArray<uint8>& buffer){
	TArray<uint8> data;
	if (offset < 0 || length <= 0 || (offset + length) > buffer.Num()) {
		return data;
	}
	
	data.AddUninitialized(length);
	FMemory::Memcpy(data.GetData(), buffer.GetData()+ offset, length);

	return data;
}

TArray<int32> URealTimeImportMeshglTF::dataArrayToInt32ArrayWithInt32Values(
	TArray<uint8>& data, bool saveIndeces, TMap<int32, int32>& indeces, int32 bufferViewByteStride, bool isUnsigned){
	TArray<int32> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 4;
	}

	if (saveIndeces) {
		int32 i = 0;
		while (index < data.Num()) {
			if (isUnsigned) {
				uint32 val = URealTimeImportMesh::parseBytesToInt32Unsigned(data, index);
				result.Add(val);
				indeces.Add(val, i);
			}
			else {
				int32 val = URealTimeImportMesh::parseBytesToInt32(data, index);
				result.Add(val);
				indeces.Add(val, i);
			}
			index += bufferViewByteStride;
			i++;
		}
	}
	else {
		while (index < data.Num()) {
			if (isUnsigned) {
				uint32 val = URealTimeImportMesh::parseBytesToInt32Unsigned(data, index);
				result.Add(val);
			}
			else {
				int32 val = URealTimeImportMesh::parseBytesToInt32(data, index);
				result.Add(val);
			}
			index += bufferViewByteStride;
		}
	}

	return result;
}


TArray<int32> URealTimeImportMeshglTF::dataArrayToInt32ArrayWithInt16Values(
	TArray<uint8>& data,bool saveIndeces,TMap<int32,int32>& indeces, int32 bufferViewByteStride, bool isUnsigned){
	TArray<int32> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 2;
	}

	if (saveIndeces) {
		int32 i = 0;
		while (index < data.Num()) {
			if (isUnsigned) {
				uint16 val = URealTimeImportMesh::parseBytesToInt16Unsigned(data, index);
				result.Add(val);
				indeces.Add(val, i);
			}
			else {
				int16 val = URealTimeImportMesh::parseBytesToInt16(data, index);
				result.Add(val);
				indeces.Add(val, i);
			}
			index += bufferViewByteStride;
			i++;
		}
	}
	else {
		while (index < data.Num()) {

			if (isUnsigned) {
				uint16 val = URealTimeImportMesh::parseBytesToInt16Unsigned(data, index);
				result.Add(val);
			}
			else {
				int16 val = URealTimeImportMesh::parseBytesToInt16(data, index);
				result.Add(val);
			}
			index += bufferViewByteStride;
		}
	}

	return result;
}

TArray<int32> URealTimeImportMeshglTF::dataArrayToInt32ArrayWithInt8Values(
	TArray<uint8>& data,bool saveIndeces,TMap<int32,int32>& indeces, int32 bufferViewByteStride, bool isUnsigned){
	TArray<int32> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 1;
	}

	if (saveIndeces) {
		int32 i = 0;
		while (index < data.Num()) {
			if (isUnsigned) {
				uint8 val = URealTimeImportMesh::parseBytesToInt8Unsigned(data, index);
				result.Add(val);
				indeces.Add(val, i);
			}
			else {
				int8 val = URealTimeImportMesh::parseBytesToInt8(data, index);
				result.Add(val);
				indeces.Add(val, i);
			}
			index += bufferViewByteStride;
			i++;
		}
	}
	else {
		while (index < data.Num()) {
			if (isUnsigned) {
				uint8 val = URealTimeImportMesh::parseBytesToInt8Unsigned(data, index);
				result.Add(val);
			}
			else {
				int8 val = URealTimeImportMesh::parseBytesToInt8(data, index);
				result.Add(val);
			}
			index += bufferViewByteStride;
		}
	}
	return result;
}


TArray<float> URealTimeImportMeshglTF::dataArrayToFloatArray(TArray<uint8>& data, int32 bufferViewByteStride){
	TArray<float> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 4;
	}

	while (index < data.Num()) {
		result.Add(URealTimeImportMesh::parseBytesToFloat(data, index));
		index += bufferViewByteStride;
	}
	return result;
}

TArray<FTransform> URealTimeImportMeshglTF::dataArrayToFTransformArrayWithMatrixValues(TArray<uint8>& data, int32 bufferViewByteStride){
	TArray<FTransform> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 64;
	}

	while (index < data.Num()) {

		FMatrix matrix = FMatrix(
			FPlane(URealTimeImportMesh::parseBytesToFloat(data, index), URealTimeImportMesh::parseBytesToFloat(data, index + 4), URealTimeImportMesh::parseBytesToFloat(data, index + 8), URealTimeImportMesh::parseBytesToFloat(data, index + 12)),
			FPlane(URealTimeImportMesh::parseBytesToFloat(data, index + 16), URealTimeImportMesh::parseBytesToFloat(data, index + 20), URealTimeImportMesh::parseBytesToFloat(data, index + 24), URealTimeImportMesh::parseBytesToFloat(data, index + 28)),
			FPlane(URealTimeImportMesh::parseBytesToFloat(data, index + 32), URealTimeImportMesh::parseBytesToFloat(data, index + 36), URealTimeImportMesh::parseBytesToFloat(data, index + 40), URealTimeImportMesh::parseBytesToFloat(data, index + 44)),
			FPlane(URealTimeImportMesh::parseBytesToFloat(data, index + 48), URealTimeImportMesh::parseBytesToFloat(data, index + 52), URealTimeImportMesh::parseBytesToFloat(data, index + 56), URealTimeImportMesh::parseBytesToFloat(data, index + 60)));
		index +=  bufferViewByteStride;

		//replace y with z
		FTransform matrixTransform = FTransform(matrix);
		FQuat matrixRoation = matrixTransform.GetRotation();
		FVector matrixLocation = matrixTransform.GetLocation();
		FVector matrixScale = matrixTransform.GetScale3D();

		/*UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: rotation x:%f z:%f y:%f location x:%f z:%f y:%f scale x:%f z:%f y:%f "),
			matrixRoation.X,matrixRoation.Z,matrixRoation.Y,
			matrixLocation.X,matrixLocation.Z,matrixLocation.Y,
			matrixScale.X,matrixScale.Z,matrixScale.Y);*/

		FTransform transform = FTransform(
			FQuat(matrixRoation.X,matrixRoation.Z,matrixRoation.Y,-matrixRoation.W),
			FVector(matrixLocation.X,matrixLocation.Z,matrixLocation.Y),
			FVector(matrixScale.X,matrixScale.Z,matrixScale.Y));
		
		result.Add(transform);
	}


	return result;	
}

TArray<FVector> URealTimeImportMeshglTF::dataArrayToFVectorArray(TArray<uint8>& data, int32 bufferViewByteStride){
	TArray<FVector> result;
	int32 index = 0;
	//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: bufferViewByteStride:%i "),bufferViewByteStride);
	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 12;
	}

	while (index < data.Num()) {
		float x = URealTimeImportMesh::parseBytesToFloat(data, index);
		float y = URealTimeImportMesh::parseBytesToFloat(data, index+4);
		float z = URealTimeImportMesh::parseBytesToFloat(data, index+8);
		index +=  bufferViewByteStride;

		result.Add(FVector(x, z, y));	
		//if (x > 10 || z > 10 || y > 10) {
		//	UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin1: x:%f y:%f z:%f "), x, y, z);
		//}
		//if (x < -10 || z < -10 || y < -10) {
		//	UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin2: x:%f y:%f z:%f "), x, y, z);
		//}
	}
	

	return result;	
}


TArray<FRotator> URealTimeImportMeshglTF::dataArrayToFRotatorArray(TArray<uint8>& data, int32 bufferViewByteStride){
	TArray<FRotator> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 16;
	}

	while (index < data.Num()) {
		float x = URealTimeImportMesh::parseBytesToFloat(data, index);
		float y = URealTimeImportMesh::parseBytesToFloat(data, index+4);
		float z = URealTimeImportMesh::parseBytesToFloat(data, index+8);
		float w = URealTimeImportMesh::parseBytesToFloat(data, index+12);
		index +=  bufferViewByteStride;

		result.Add(FQuat(x, z, y, -w).Rotator());	
		//UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: x:%f y:%f z:%f "), x,y,z);
	}
	return result;	
}

TArray<TArray<float>> URealTimeImportMeshglTF::dataArrayTo2DFloatArray(TArray<uint8>& data, int32 bufferViewByteStride){
	TArray<TArray<float>> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 16;
	}

	while (index < data.Num()) {
		TArray<float> a;
		a.AddUninitialized(4);
		a[0] = URealTimeImportMesh::parseBytesToFloat(data, index);
		a[1] = URealTimeImportMesh::parseBytesToFloat(data, index+4);
		a[2] = URealTimeImportMesh::parseBytesToFloat(data, index+8);
		a[3] = URealTimeImportMesh::parseBytesToFloat(data, index+12);
		index +=  bufferViewByteStride;

		result.Add(a);	

		//UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: x:%f y:%f z:%f "), x,y,z);
	}
	return result;	
}

TArray<TArray<int16>> URealTimeImportMeshglTF::dataArrayTo2DInt16ArrayWithInt8Values(TArray<uint8>& data, int32 bufferViewByteStride,bool isUnsigned){
	TArray<TArray<int16>> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 4;
	}

	while (index < data.Num()) {
		TArray<int16> a;
		a.AddUninitialized(4);
		
		if (isUnsigned) {
			a[0] = URealTimeImportMesh::parseBytesToInt8Unsigned(data, index);
			a[1] = URealTimeImportMesh::parseBytesToInt8Unsigned(data, index+1);
			a[2] = URealTimeImportMesh::parseBytesToInt8Unsigned(data, index+2);
			a[3] = URealTimeImportMesh::parseBytesToInt8Unsigned(data, index+3);
		}
		else {;
			a[0] = URealTimeImportMesh::parseBytesToInt8(data, index);
			a[1] = URealTimeImportMesh::parseBytesToInt8(data, index+1);
			a[2] = URealTimeImportMesh::parseBytesToInt8(data, index+2);
			a[3] = URealTimeImportMesh::parseBytesToInt8(data, index+3);
			
		}

		index +=  bufferViewByteStride;
		result.Add(a);	
		
	}
	return result;	
}

TArray<TArray<int16>> URealTimeImportMeshglTF::dataArrayTo2DInt16Array(TArray<uint8>& data, int32 bufferViewByteStride,bool isUnsigned){
	TArray<TArray<int16>> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 8;
	}

	while (index < data.Num()) {
		TArray<int16> a;
		a.AddUninitialized(4);
		if (isUnsigned) {
			a[0] = URealTimeImportMesh::parseBytesToInt16Unsigned(data, index);
			a[1] = URealTimeImportMesh::parseBytesToInt16Unsigned(data, index+2);
			a[2] = URealTimeImportMesh::parseBytesToInt16Unsigned(data, index+4);
			a[3] = URealTimeImportMesh::parseBytesToInt16Unsigned(data, index+6);
		}
		else {
			a[0] = URealTimeImportMesh::parseBytesToInt16(data, index);
			a[1] = URealTimeImportMesh::parseBytesToInt16(data, index+2);
			a[2] = URealTimeImportMesh::parseBytesToInt16(data, index+4);
			a[3] = URealTimeImportMesh::parseBytesToInt16(data, index+6);
		}

		index +=  bufferViewByteStride;

		result.Add(a);	
	}
	return result;	
}





TArray<FVector2D> URealTimeImportMeshglTF::dataArrayToFVector2DArray(TArray<uint8>& data, int32 bufferViewByteStride){
	TArray<FVector2D> result;
	int32 index = 0;

	if (bufferViewByteStride <= 0) {
		bufferViewByteStride = 8;
	}

	while (index < data.Num()) {
		float x = URealTimeImportMesh::parseBytesToFloat(data, index);
		float y = URealTimeImportMesh::parseBytesToFloat(data, index+4);
		index +=  bufferViewByteStride;

		result.Add(FVector2D(x, y));
	}
	return result;
}

// FGenericPlatformHttp::UrlDecode copy
FString URealTimeImportMeshglTF::UrlDecode(const FStringView EncodedString)
{
#if ENGINE_MAJOR_VERSION == 4
	FTCHARToUTF8 Converter(EncodedString.GetData(), EncodedString.Len());
	const UTF8CHAR* UTF8Data = (UTF8CHAR*)Converter.Get();	

	TArray<ANSICHAR> Data;
	Data.Reserve(EncodedString.Len());

	for (int32 CharIdx = 0; CharIdx < Converter.Length();)
	{
		if (UTF8Data[CharIdx] == '%')
		{
			int32 Value = 0;
			if (UTF8Data[CharIdx + 1] == 'u')
			{
				if (CharIdx + 6 <= Converter.Length())
				{
					// Treat all %uXXXX as code point
					Value = FParse::HexDigit(UTF8Data[CharIdx + 2]) << 12;
					Value += FParse::HexDigit(UTF8Data[CharIdx + 3]) << 8;
					Value += FParse::HexDigit(UTF8Data[CharIdx + 4]) << 4;
					Value += FParse::HexDigit(UTF8Data[CharIdx + 5]);
					CharIdx += 6;

					ANSICHAR Buffer[8] = { 0 };
					ANSICHAR* BufferPtr = Buffer;
					const int32 Len = UE_ARRAY_COUNT(Buffer);
					const int32 WrittenChars = FTCHARToUTF8_Convert::Utf8FromCodepoint(Value, BufferPtr, Len);

					Data.Append(Buffer, WrittenChars);
				}
				else
				{
					// Not enough in the buffer for valid decoding, skip it
					CharIdx++;
					continue;
				}
			}
			else if(CharIdx + 3 <= Converter.Length())
			{
				// Treat all %XX as straight byte
				Value = FParse::HexDigit(UTF8Data[CharIdx + 1]) << 4;
				Value += FParse::HexDigit(UTF8Data[CharIdx + 2]);
				CharIdx += 3;
				Data.Add((ANSICHAR)(Value));
			}
			else
			{
				// Not enough in the buffer for valid decoding, skip it
				CharIdx++;
				continue;
			}
		}
		else
		{
			// Non escaped characters
			Data.Add(UTF8Data[CharIdx]);
			CharIdx++;
		}
	}

	Data.Add('\0');
	return FString(UTF8_TO_TCHAR(Data.GetData()));
#else
	FTCHARToUTF8 Converter(EncodedString.GetData(), EncodedString.Len());
	const UTF8CHAR* UTF8Data = (UTF8CHAR*)Converter.Get();	

	TArray<UTF8CHAR> Data;
	Data.Reserve(EncodedString.Len());

	for (int32 CharIdx = 0; CharIdx < Converter.Length();)
	{
		if (UTF8Data[CharIdx] == '%')
		{
			int32 Value = 0;
			if (UTF8Data[CharIdx + 1] == 'u')
			{
				if (CharIdx + 6 <= Converter.Length())
				{
					// Treat all %uXXXX as code point
					Value = FParse::HexDigit(UTF8Data[CharIdx + 2]) << 12;
					Value += FParse::HexDigit(UTF8Data[CharIdx + 3]) << 8;
					Value += FParse::HexDigit(UTF8Data[CharIdx + 4]) << 4;
					Value += FParse::HexDigit(UTF8Data[CharIdx + 5]);
					CharIdx += 6;

					UTF8CHAR Buffer[8] = {};
					UTF8CHAR* BufferPtr = Buffer;
					const int32 Len = UE_ARRAY_COUNT(Buffer);
					const UTF8CHAR* BufferEnd = FPlatformString::Convert(BufferPtr, Len, (UTF32CHAR*)&Value, 1);
					check(BufferEnd);

					Data.Append(Buffer, (int32)(BufferEnd - BufferPtr));
				}
				else
				{
					// Not enough in the buffer for valid decoding, skip it
					CharIdx++;
					continue;
				}
			}
			else if(CharIdx + 3 <= Converter.Length())
			{
				// Treat all %XX as straight byte
				Value = FParse::HexDigit(UTF8Data[CharIdx + 1]) << 4;
				Value += FParse::HexDigit(UTF8Data[CharIdx + 2]);
				CharIdx += 3;
				Data.Add((UTF8CHAR)(Value));
			}
			else
			{
				// Not enough in the buffer for valid decoding, skip it
				CharIdx++;
				continue;
			}
		}
		else
		{
			// Non escaped characters
			Data.Add(UTF8Data[CharIdx]);
			CharIdx++;
		}
	}

	Data.Add(UTF8TEXT('\0'));
	return FString(UTF8_TO_TCHAR(Data.GetData()));
#endif
}


void URealTimeImportMeshglTF::addMeshesRecursive(TArray<FRTIModelStruct>& modelStructs,TMap<int32, FRTIModelStruct*>& modelStructPtrMap,
	TMap<int32, FRTIModelStruct*>& modelStructCache, FRTIModelStruct* modelstruct) {
	
	if (modelstruct->parent != -1) {
		int64 parendID = modelstruct->parent;
		if (modelStructPtrMap.Find(parendID) != nullptr && modelStructCache.Find(parendID) == nullptr) {
			addMeshesRecursive(modelStructs, modelStructPtrMap, modelStructCache, *modelStructPtrMap.Find(parendID));
		}
	}

	if (modelStructCache.Find(modelstruct->modelID) == nullptr) {
		modelStructCache.Add(modelstruct->modelID, modelstruct);
		modelStructs.Add(*modelstruct);
	}
}