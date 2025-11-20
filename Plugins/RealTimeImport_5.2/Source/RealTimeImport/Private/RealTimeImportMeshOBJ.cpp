// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

#include "RealTimeImportMeshOBJ.h"


URealTimeImportMeshOBJ::URealTimeImportMeshOBJ(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {
}


void URealTimeImportMeshOBJ::LoadOBJFile(
	FString dir,
	bool& success,
	FString& successMessage,
	TArray<FRTIModelStruct>& modelStructs,
	ERTICoordinateSystem coordinateSystem,
	bool calculateTangents,
	bool cacheTexture,
	bool autoDetectionNormalMap,
	bool useSRGB,
	bool createMipMaps,
	ERTIERGBFormat rgbFormat,
	URealTimeImportAsyncNodeLoadMesh* asyncNode) {

	//one second = 10000000 ticks
	uint64 duration =FDateTime::Now().GetTicks();

	FString stringFileData;
	if (!FFileHelper::LoadFileToString(stringFileData, *dir)) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file: %s"), *dir);
		success = false;
		successMessage = "Can't load file: " + dir;
		return;
	}
	


	TArray<FString> lines;
	int32 lineCount = stringFileData.ParseIntoArray(lines, TEXT("\n"), true);
	stringFileData.Empty();

	if (lineCount < 1) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: corrupted file (1): %s"), *dir);
		success = false;
		successMessage = "Corrupted file (1): " + dir;
		return;
	}


	FRTIMaterialStruct lastMaterialData;
	FString lastGeometryName;
	//TArray<FRTIMeshStruct> meshStructs;
	TMap<FString, FRTIMaterialStruct> materialStructsTemp;


	//we need a default meshstruct
	//FRTIMeshStruct defaultMesh;
	//defaultMesh.geometryName = "No_Name";
	//defaultMesh.isDefaultStruct = true;
	//meshStructs.Add(defaultMesh);

	//and a default model
	//FRTIModelStruct defaultModel;

	int faceMethod = -1;
	int32 triangulatedFacesCount = 0;

	TArray<FLinearColor> vertexColorsLines;
	TArray<FVector> verticesLines;
	TArray<FVector2D> UV0Lines;
	TArray<FVector> normalsLines;

	TArray<FString> lineElements;
	TArray<FString> subElements;
	TArray<int32> tempVerticesArrayPosition;

	TMap<FVector, TArray<int32>> overlappingVertices;

	int32 percentModulu = 100;
	if (lineCount >= 10000) {
		if (lineCount >= 100000) {
			percentModulu = 10000;
		}
		else {
			percentModulu = 1000;
		}
	}


	for (int32 i = 0; i < lineCount; i++) {

		if (URealTimeImportBPLibrary::getRealTimeImportTarget()->cancelMeshLoad == true) {
			success = false;
			successMessage = "Mesh import canceled by the user.";

			vertexColorsLines.Empty();
			verticesLines.Empty();
			UV0Lines.Empty();
			normalsLines.Empty();
			lineElements.Empty();
			subElements.Empty();
			tempVerticesArrayPosition.Empty();
			overlappingVertices.Empty();

			return;
		}
	
		if (i % percentModulu == 0 && asyncNode != nullptr) {
			float percent = (float)i / (float)lineCount * 100;
			AsyncTask(ENamedThreads::GameThread, [asyncNode,percent]() {
				if (asyncNode != nullptr) {
					asyncNode->setProgress(percent);
				}
			});
			//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: percent: %f"), percent);
		}

		FString line = lines[i].TrimStartAndEnd();
		if (line.StartsWith("#")) {
			continue;
		}



		//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin:_%s_"), *line);

		//objects
		if (line.StartsWith("o ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 2) {
				FRTIModelStruct modelStruct = FRTIModelStruct();
				modelStruct.name.Empty();
				for (int32 k = 1; k < lineElements.Num(); k++) {
					modelStruct.name += lineElements[k] + " ";
				}

				modelStructs.Add(modelStruct);

				//use the default mesh
				//if (meshStructs.Last().isDefaultStruct) {
				//	meshStructs.Last().geometryName = line.Replace(TEXT("o "), TEXT(""));
				//	//defaultModel.name = meshStructs.Last().geometryName;
				//	meshStructs.Last().isDefaultStruct = false;
				//	/*	if (lastMaterialData.isEmpty == false) {
				//			meshStructs.Last().hasMaterialData = true;
				//			meshStructs.Last().materialData = lastMaterialData;
				//		}*/

				//}
				//else {
				//	FRTIMeshStruct meshStruct;
				//	meshStruct.geometryName = lineElements[1];
				//	//meshStruct.modelName = meshStruct.geometryName;
				//	/*if (lastMaterialData.isEmpty == false) {
				//		meshStruct.hasMaterialData = true;
				//		meshStruct.materialData = lastMaterialData;
				//	}*/
				//	meshStructs.Add(meshStruct);
				//}
				faceMethod = -1;
			}
			continue;
		}

		if (line.StartsWith("g ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 2) {

				lastGeometryName = line.Replace(TEXT("g "), TEXT(""));
				if (modelStructs.Num() == 0) {
					FRTIModelStruct modelStruct = FRTIModelStruct();
					modelStruct.name.Empty();
					for (int32 k = 1; k < lineElements.Num(); k++) {
						modelStruct.name += lineElements[k] + " ";
					}
					modelStructs.Add(modelStruct);
				}

				FRTIMeshStruct meshStruct = FRTIMeshStruct();

				for (int32 k = 1; k < lineElements.Num(); k++) {
					meshStruct.geometryName += lineElements[k] + " ";
				}

				if (lastMaterialData.isEmpty == false) {
					meshStruct.materialData = lastMaterialData;
					meshStruct.hasMaterialData = true;
				}

				modelStructs.Last().meshStructs.Add(meshStruct);


				////use the default mesh
				//if (meshStructs.Last().isDefaultStruct) {
				//	meshStructs.Last().geometryName = lastGeometryName;
				//	meshStructs.Last().isDefaultStruct = false;
				//	if (lastMaterialData.isEmpty == false) {
				//		meshStructs.Last().hasMaterialData = true;
				//		meshStructs.Last().materialData = lastMaterialData;
				//	}
				//}
				//else {
				//	FRTIMeshStruct meshStruct;
				//	meshStruct.geometryName = lineElements[1];
				//	if (lastMaterialData.isEmpty == false) {
				//		meshStruct.hasMaterialData = true;
				//		meshStruct.materialData = lastMaterialData;
				//	}
				//	meshStructs.Add(meshStruct);
				//}
				faceMethod = -1;
			}
			continue;
		}

		//Material/Texture name for this group
		if (line.StartsWith("usemtl ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 2) {
				if (materialStructsTemp.Find(lineElements[1]) != nullptr) {
					lastMaterialData = *materialStructsTemp.Find(lineElements[1]);

					if (modelStructs.Num() == 0) {
						FRTIModelStruct modelStruct = FRTIModelStruct();
						modelStructs.Add(modelStruct);
					}
					if (modelStructs.Last().meshStructs.Num() == 0) {
						FRTIMeshStruct meshStruct = FRTIMeshStruct();
						meshStruct.geometryName = "NoName";
						modelStructs.Last().meshStructs.Add(meshStruct);
					}
				}

				for (int32 k = 1; k < lineElements.Num(); k++) {
					lastMaterialData.materialName += lineElements[k] + " ";
				}

				if (modelStructs.Num() > 0) {
					if (modelStructs.Last().meshStructs.Num() == 0 || lines[i - 1].StartsWith("g ") == false) {
						FRTIMeshStruct meshStruct = FRTIMeshStruct();
						meshStruct.geometryName = lastMaterialData.materialName;
						modelStructs.Last().meshStructs.Add(meshStruct);
					}

					if (modelStructs.Last().meshStructs.Num() > 0) {
						modelStructs.Last().meshStructs.Last().hasMaterialData = true;
						modelStructs.Last().meshStructs.Last().materialData = lastMaterialData;
					}
				}
			}
			continue;
		}

		//mtl files
		if (line.StartsWith("mtllib ")) {
			lineElements.Empty();
			FString mtlName = line.Replace(TEXT("mtllib "), TEXT(""));
			if (mtlName.IsEmpty() == false) {
				createMaterialStructFromObj(dir.Replace(*FPaths::GetCleanFilename(dir), *mtlName), materialStructsTemp, cacheTexture,
					autoDetectionNormalMap, useSRGB, createMipMaps, rgbFormat, asyncNode);
			}
			continue;
		}

		//vertices
		if (line.StartsWith("v ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4 || elementCount == 7) {
				if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
					verticesLines.Add(FVector(FCString::Atof(*lineElements[1]), FCString::Atof(*lineElements[3]), FCString::Atof(*lineElements[2])));
				}
				else {
					verticesLines.Add(FVector(FCString::Atof(*lineElements[1]), FCString::Atof(*lineElements[2]), FCString::Atof(*lineElements[3])));
				}
				if (calculateTangents) {
					if (overlappingVertices.Find(verticesLines.Last()) == nullptr) {
						TArray<int32> overlap;
						overlap.Add(verticesLines.Num() - 1);
						overlappingVertices.Add(verticesLines.Last(), overlap);
					}
					else {
						(*overlappingVertices.Find(verticesLines.Last())).Add(verticesLines.Num() - 1);
					}
				}
				//vertex colors
				if (elementCount == 7) {
					FLinearColor color = FLinearColor();
					color.R = FCString::Atof(*lineElements[4]);
					color.G = FCString::Atof(*lineElements[5]);
					color.B = FCString::Atof(*lineElements[6]);
					vertexColorsLines.Add(color);
				}
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin:(%i) Vertices line corrupted: %s"), (i + 1), *line);
			}
			continue;
		}

		//normals
		if (line.StartsWith("vn ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4) {
				if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
					normalsLines.Add(FVector(FCString::Atof(*lineElements[1]), FCString::Atof(*lineElements[3]), FCString::Atof(*lineElements[2])));
				}
				else {
					normalsLines.Add(FVector(FCString::Atof(*lineElements[1]), FCString::Atof(*lineElements[2]), FCString::Atof(*lineElements[3])));
				}
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin:(%i) Normals line corrupted: %s"), (i + 1), *line);
			}
			continue;
		}

		//UV0
		if (line.StartsWith("vt ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 3) {
				float y = FCString::Atof(*lineElements[2]);
				if (y > 0) {
					UV0Lines.Add(FVector2D(FCString::Atof(*lineElements[1]), 1 - y));
				}
				else {
					UV0Lines.Add(FVector2D(FCString::Atof(*lineElements[1]), -1 - y));
				}
			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin:(%i) UV line corrupted: %s"), (i + 1), *line);
			}
			continue;
		}


		//faces, create the mesh structure
		if (line.StartsWith("f ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);

			//set face method
			if (faceMethod == -1 && elementCount > 3) {

				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: Method search: %s"), *lineElements[1]);

				//method 1 = f v1 v2 v3 ....
				if (lineElements[1].Contains("/") == false) {
					faceMethod = 1;
				}
				else {
					//method 4 = f v1//vn1 v2//vn2 v3//vn3 ...
					if (lineElements[1].Contains("//")) {
						faceMethod = 4;
					}
					else {
						//method 2 = f v1/vt1 v2/vt2 v3/vt3 ...
						TArray<FString> tmp;
						if (lineElements[1].ParseIntoArray(tmp, TEXT("/"), true) == 2) {
							faceMethod = 2;
						}
						//method 3 = v1/vt1/vn1 v2/vt2/vn2 v3/vt3/vn3 ...
						else {
							faceMethod = 3;
						}
					}
				}
				//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: Method: %i"), faceMethod);
			}

			//create
			if (elementCount > 3) {

				if (modelStructs.Num() == 0) {
					FRTIModelStruct modelStruct = FRTIModelStruct();
					modelStructs.Add(modelStruct);
				}
				if (modelStructs.Last().meshStructs.Num() == 0) {
					FRTIMeshStruct meshStruct = FRTIMeshStruct();
					meshStruct.geometryName = "NoName";
					modelStructs.Last().meshStructs.Add(meshStruct);
				}

				//FRTIMeshStruct& tmpMeshStruct = meshStructs.Last();
				tempVerticesArrayPosition.Empty();


				int32 subElementVal = -1;

				for (int32 j = 1; j < lineElements.Num(); j++) {
					subElements.Empty();

					switch (faceMethod)
					{
					case 1:
						subElementVal = FCString::Atoi(*lineElements[j]) - 1;
						if (subElementVal < 0) {
							//For negative values, the lines must be read backwards. If there are 100 lines and the value -100 appears here, line 1 is meant.
							subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
						}

						if (verticesLines.Num() > subElementVal) {
							modelStructs.Last().meshStructs.Last().vertices.Add(verticesLines[subElementVal]);
							tempVerticesArrayPosition.Add(modelStructs.Last().meshStructs.Last().vertices.Num() - 1);
							if (vertexColorsLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertexColors.Add(vertexColorsLines[subElementVal]);
							}
						}
						break;
					case 2:
						elementCount = lineElements[j].ParseIntoArray(subElements, TEXT("/"), true);
						if (elementCount == 2) {
							subElementVal = FCString::Atoi(*subElements[0]) - 1;
							if (subElementVal < 0) {
								subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
							}

							if (verticesLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertices.Add(verticesLines[subElementVal]);

								subElementVal = FCString::Atoi(*subElements[1]) - 1;
								if (subElementVal < 0) {
									subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
								}

								if (UV0Lines.Num() > subElementVal)
									modelStructs.Last().meshStructs.Last().UV0.Add(UV0Lines[subElementVal]);
								tempVerticesArrayPosition.Add(modelStructs.Last().meshStructs.Last().vertices.Num() - 1);
							}
							if (vertexColorsLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertexColors.Add(vertexColorsLines[subElementVal]);
							}
						}
						break;
					case 3:
						elementCount = lineElements[j].ParseIntoArray(subElements, TEXT("/"), true);
						if (elementCount == 3) {
							subElementVal = FCString::Atoi(*subElements[0]) - 1;
							if (subElementVal < 0) {
								subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
							}

							if (verticesLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertices.Add(verticesLines[subElementVal]);

								subElementVal = FCString::Atoi(*subElements[1]) - 1;
								if (subElementVal < 0) {
									subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
								}

								if (UV0Lines.Num() > subElementVal)
									modelStructs.Last().meshStructs.Last().UV0.Add(UV0Lines[subElementVal]);

								subElementVal = FCString::Atoi(*subElements[2]) - 1;
								if (subElementVal < 0) {
									subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
								}

								if (normalsLines.Num() > subElementVal)
									modelStructs.Last().meshStructs.Last().normals.Add(normalsLines[subElementVal]);
								tempVerticesArrayPosition.Add(modelStructs.Last().meshStructs.Last().vertices.Num() - 1);
							}
							if (vertexColorsLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertexColors.Add(vertexColorsLines[subElementVal]);
							}
						}
						break;
					case 4:
						elementCount = lineElements[j].ParseIntoArray(subElements, TEXT("//"), true);
						if (elementCount == 2) {
							subElementVal = FCString::Atoi(*subElements[0]) - 1;
							if (subElementVal < 0) {
								subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
							}

							if (verticesLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertices.Add(verticesLines[subElementVal]);
								subElementVal = FCString::Atoi(*subElements[1]) - 1;
								if (subElementVal < 0) {
									subElementVal = (verticesLines.Num()) - (subElementVal * -1) + 1;
								}

								if (normalsLines.Num() > subElementVal)
									modelStructs.Last().meshStructs.Last().normals.Add(normalsLines[subElementVal]);
								tempVerticesArrayPosition.Add(modelStructs.Last().meshStructs.Last().vertices.Num() - 1);
							}
							if (vertexColorsLines.Num() > subElementVal) {
								modelStructs.Last().meshStructs.Last().vertexColors.Add(vertexColorsLines[subElementVal]);
							}
						}
						break;
					}
				}



				FRTIMeshStruct& tmpMeshStruct = modelStructs.Last().meshStructs.Last();

				//Create polygons
				if (tempVerticesArrayPosition.Num() >= 3) {
					if (tempVerticesArrayPosition.Num() == 3) {
						if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
							tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[1]);
							tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[2]);
							tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[0]);
						}
						else {
							tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[2]);
							tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[1]);
							tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[0]);
						}
					}
					else {
						TriangualteStruct::triangulateFace(triangulatedFacesCount, tmpMeshStruct.triangles,tempVerticesArrayPosition,tmpMeshStruct.vertices,coordinateSystem);
					}
				}
				//if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
				//	for (int32 k = 1; k < tempVerticesArrayPosition.Num() - 1; k++) {
				//		tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[k]);
				//		tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[k + 1]);
				//		tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[0]);
				//	}
				//}
				//else {
				//	for (int32 k = 1; k < tempVerticesArrayPosition.Num() - 1; k++) {
				//		tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[k + 1]);
				//		tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[k]);
				//		tmpMeshStruct.triangles.Add(tempVerticesArrayPosition[0]);
				//	}
				//}
				tempVerticesArrayPosition.Empty();



			}
			else {
				UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin:(%i) Cannot process this line. Only polygons and quads are possible. (Method %i): %s"), (i + 1), faceMethod, *line);
			}
		}
	}




	int32 verticesCount = 0;
	int32 UV0Count = 0;
	int32 normalsCount = 0;
	int32 triangleCount = 0;

	//delete meshes without polygons
	TArray<FRTIMeshStruct> meshStructsCopy;
	for (int32 j = 0; j < modelStructs.Num(); j++) {
		for (int32 i = 0; i < modelStructs[j].meshStructs.Num(); i++) {
			if (modelStructs[j].meshStructs[i].triangles.Num() > 0) {
				meshStructsCopy.Add(modelStructs[j].meshStructs[i]);
				verticesCount += modelStructs[j].meshStructs[i].vertices.Num();
				UV0Count += modelStructs[j].meshStructs[i].UV0.Num();
				normalsCount += modelStructs[j].meshStructs[i].normals.Num();
				triangleCount += modelStructs[j].meshStructs[i].triangles.Num() / 3;

				////debug
				//for (int32 k = 0; k < modelStructs[j].meshStructs[i].triangles.Num(); k++)
				//{
				//	int32 t = modelStructs[j].meshStructs[i].triangles[k];
				//	FVector v = modelStructs[j].meshStructs[i].vertices[t];
				//	UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: X: %f, Y: %f, Z: %f "), v.X, v.Y,v.Z);
				//}

				//tangents
				if (calculateTangents) {
					URealTimeImportMesh::calculateTangents(overlappingVertices, meshStructsCopy.Last().vertices,
						meshStructsCopy.Last().triangles, meshStructsCopy.Last().UV0, meshStructsCopy.Last().tangents);
				}

				modelStructs[j].meshStructs[i].vertices.Empty();
				modelStructs[j].meshStructs[i].UV0.Empty();
				modelStructs[j].meshStructs[i].normals.Empty();

			}
		}
		modelStructs[j].meshStructs.Empty();
		modelStructs[j].meshStructs.Append(meshStructsCopy);
		meshStructsCopy.Empty();
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
	successMessage = "Vertices:" + FString::FromInt(verticesCount) + " Triangles:" + FString::FromInt(triangleCount) 
		+ " UV0:" + FString::FromInt(UV0Count) + " Normals:" + FString::FromInt(normalsCount) 
		+ " Vertex Colors:" + FString::FromInt(vertexColorsLines.Num())+ " Triangulated Faces:"+ FString::FromInt(triangulatedFacesCount);

	UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: %s"), *successMessage);


	duration = FDateTime::Now().GetTicks() - duration;
	UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: Duration in Milliseconds: %i"), (duration/10000));

	vertexColorsLines.Empty();
	verticesLines.Empty();
	UV0Lines.Empty();
	normalsLines.Empty();
	lineElements.Empty();
	subElements.Empty();
	tempVerticesArrayPosition.Empty();
	overlappingVertices.Empty();

}


void URealTimeImportMeshOBJ::createMaterialStructFromObj(FString mtlFilePath, TMap<FString, FRTIMaterialStruct>& materialStructs,
	bool cacheTexture,
	bool autoDetectionNormalMap,
	bool useSRGB, bool createMipMaps, ERTIERGBFormat rgbFormat,
	URealTimeImportAsyncNodeLoadMesh* asyncNode) {

	FRTIMaterialStruct materialStruct;

	FString stringFileData;
	if (!FFileHelper::LoadFileToString(stringFileData, *mtlFilePath)) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: Can't load file: %s"), *mtlFilePath);
		return;
	}

	TArray<FString> lines;
	int32 lineCount = stringFileData.ParseIntoArray(lines, TEXT("\n"), true);
	stringFileData.Empty();

	if (lineCount < 1) {
		UE_LOG(LogTemp, Error, TEXT("RealTimeImportPlugin: corrupted mtl file (2): %s"), *mtlFilePath);
		return;
	}

	TArray<FString> lineElements;

	for (int32 i = 0; i < lineCount; i++) {
		FString line = lines[i].TrimStartAndEnd();
		if (line.StartsWith("#")) {
			continue;
		}


		//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin:_%s_"), *line);

		//new material settings
		if (line.StartsWith("newmtl ")) {

			if (materialStruct.isEmpty == false) {
				materialStructs.Add(materialStruct.textureName, materialStruct);
				materialStruct = FRTIMaterialStruct();
			}

			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.textureName = lineElements[1];
				materialStruct.isEmpty = false;
			}
			continue;
		}


		if (line.StartsWith("Ns ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.specularExponent = FCString::Atof(*lineElements[1]);
			}
			continue;
		}

		if (line.StartsWith("Ni ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.specularExponent = FCString::Atof(*lineElements[1]);
			}
			continue;
		}

		if (line.StartsWith("illum ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.specularExponent = FCString::Atoi(*lineElements[1]);
			}
			continue;
		}

		if (line.StartsWith("d ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.dissolved = FCString::Atof(*lineElements[1]);
			}
			continue;
		}

		if (line.StartsWith("Tr ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 2) {
				materialStruct.dissolvedInverted = FCString::Atof(*lineElements[1]);
			}
			continue;
		}

		if (line.StartsWith("Ka ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4) {
				materialStruct.ambient = FColor(FCString::Atof(*lineElements[1]) * 255, FCString::Atof(*lineElements[2]) * 255, FCString::Atof(*lineElements[3]) * 255);
			}
			continue;
		}

		if (line.StartsWith("Kd ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4) {
				materialStruct.diffuse = FColor(FCString::Atof(*lineElements[1]) * 255, FCString::Atof(*lineElements[2]) * 255, FCString::Atof(*lineElements[3]) * 255);
			}
			continue;
		}

		if (line.StartsWith("Ks ")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount == 4) {
				materialStruct.specular = FColor(FCString::Atof(*lineElements[1]) * 255, FCString::Atof(*lineElements[2]) * 255, FCString::Atof(*lineElements[3]) * 255);
			}
			continue;
		}

		if (line.StartsWith("map_") || line.StartsWith("bump") || line.StartsWith("disp")
			|| line.StartsWith("decal") || line.StartsWith("refl") || line.StartsWith("Pc")
			|| line.StartsWith("aniso") || line.StartsWith("norm")) {
			lineElements.Empty();
			int32 elementCount = line.ParseIntoArray(lineElements, TEXT(" "), true);
			if (elementCount >= 2) {
				FString imageFileWithPath = line.Replace(*FString(lineElements[0] + " "), TEXT(""));

				UTexture2D* texture = nullptr;
				FString fileName = FGuid::NewGuid().ToString();
				int32 errorCode = 0;
				FString errorMessage = FString();

				TextureCompressionSettings compressionSettings = TextureCompressionSettings::TC_Default;
				if (autoDetectionNormalMap && (line.StartsWith("map_Norm") || line.StartsWith("map_norm") || line.StartsWith("norm ") || line.StartsWith("map_Bump ") || line.StartsWith("map_bump ") || line.StartsWith("bump "))) {
					compressionSettings = TextureCompressionSettings::TC_Normalmap;
				}

								

				bool fromCache = URealTimeImportImage::getRealTimeImportImage()->LoadImageFile(ERTIDirectoryType::E_ad,
					mtlFilePath.Replace(*FPaths::GetCleanFilename(mtlFilePath), *imageFileWithPath),
					texture, fileName, errorCode, errorMessage, cacheTexture,compressionSettings, useSRGB, createMipMaps, rgbFormat);

				if (fromCache == false && asyncNode != nullptr) {
					float percent = (float)i / (float)lineCount * 100;
					AsyncTask(ENamedThreads::GameThread, [asyncNode,percent]() {
						if (asyncNode != nullptr) {
							asyncNode->setMaterialProgress(percent);
						}
					});
					//UE_LOG(LogTemp, Display, TEXT("RealTimeImportPlugin: percent: %f"), percent);
				}

				if (errorCode == 0) {

					if (line.StartsWith("map_Kd ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Kd;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ks ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Ks;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ka ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Ka;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ns ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Ns;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_d ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_d;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Bump ") || line.StartsWith("map_bump ") || line.StartsWith("bump ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_bump;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Disp") || line.StartsWith("map_disp") || line.StartsWith("disp ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_disp;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Decal") || line.StartsWith("map_decal") || line.StartsWith("decal ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_decal;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Refl") || line.StartsWith("map_refl") || line.StartsWith("refl ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_refl;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Pr ") || line.StartsWith("Pr ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Pr;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Pm ") || line.StartsWith("Pm")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Pm;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ps ") || line.StartsWith("Ps")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Ps;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("Pc ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Pc;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("Pcr ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Pcr;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ke ") || line.StartsWith("Ke")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_Ke;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ansio") || line.StartsWith("map_ansio") || line.StartsWith("aniso ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_aniso;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Ansior") || line.StartsWith("map_ansior") || line.StartsWith("anisor ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_anisor;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					if (line.StartsWith("map_Norm") || line.StartsWith("map_norm") || line.StartsWith("norm ")) {
						FRTITextureStruct ts = FRTITextureStruct();
						ts.texture = texture;
						ts.textureType = ERTITextureType::E_norm;
						materialStruct.textures.Add(fileName, ts);
						continue;
					}
					FRTITextureStruct ts = FRTITextureStruct();
					ts.texture = texture;
					ts.textureType = ERTITextureType::E_un;
					materialStruct.textures.Add(fileName, ts);
				}
			}
			continue;
		}
		else {
			UE_LOG(LogTemp, Display, TEXT("RealtimeImport Plugin: Material/Texture type not implemented: %s"), *line);
		}
	}

	if (materialStruct.isEmpty == false) {
		materialStructs.Add(materialStruct.textureName, materialStruct);
	}
}

void URealTimeImportMeshOBJ::saveModelsToFile(UObject* WorldContextObject,UMaterial* exportMaterial,ERTICoordinateSystem coordinateSystem, ERTIDirectoryType directoryType, FString filePath,
	bool& success, FString& errorMessage, const TArray<FRTIModelStruct>& modelStructs){
	
	FString dir = UFileFunctionsRealTimeImport::getCleanDirectory(directoryType, filePath);
	FString mtlDir = dir.Replace(TEXT(".obj"), TEXT(".mtl"));
	FString fileName = FPaths::GetBaseFilename(dir);
	FString path = FPaths::GetPath(dir);
	
	FString objHead = "# RealTime import/export Unreal Plugin\r\n";
	FString objData = "";
	FString mtlData = "# RealTime import/export Unreal Plugin\r\n";

	URealTimeImportMesh* meshClass = URealTimeImportMesh::getRealTimeImportMesh();

	
	int32 verticesLineNumber = 1;
	int32 uvLineNumber = 1;
	int32 normalsLineNumber = 1;

	bool hasMaterial = false;
	TMap<FString, bool> materialIsInMtlFile;

	for (int32 k = 0; k < modelStructs.Num(); k++) {

		if (meshClass->modelStructCache.Find(modelStructs[k].structID) == nullptr) {
			continue;
		}
		
		FRTIModelStruct* model = *meshClass->modelStructCache.Find(modelStructs[k].structID);
		meshClass->modelStructCache.Remove(modelStructs[k].structID);

		if (k == 0) {
			objHead += "o " + model->name + "\r\n";
		}
		else {
			objData += "o " + model->name + "\r\n";
		}
		

		TArray<FRTIMeshStruct> meshStructs = model->meshStructs;

		for (int32 j = 0; j < meshStructs.Num(); j++) {


			if (meshStructs[j].vertices.Num() == 0 || meshStructs[j].triangles.Num() < 3) {
				UE_LOG(LogTemp, Warning, TEXT("RealtimeImport Plugin: Empty mesh section found. Section will not be exported. "));
				continue;
			}

			//data += "g " + meshStructs[j].geometryName + "\r\n";

			//vertices
			TArray<FVector> vertices = meshStructs[j].vertices;
			TMap<FVector, int32> verticesMap;
			for (int32 i = 0; i < vertices.Num(); i++) {
				//UE_LOG(LogTemp, Warning, TEXT("%i: %f,%f,%f"),i, vertices[i].X, vertices[i].Y, vertices[i].Z);
				if (verticesMap.Find(vertices[i]) == nullptr) {
					verticesMap.Add(vertices[i], verticesLineNumber);
					verticesLineNumber++;
				}
			}

			FString v = FString();
			for (auto& e : verticesMap) {
				v += "v " + FString::SanitizeFloat(e.Key.X) + " " + FString::SanitizeFloat(e.Key.Z) + " " + FString::SanitizeFloat(e.Key.Y) + "\r\n";
			}
			objData += v;

			//uvs
			TArray<FVector2D> UVs = meshStructs[j].UV0;
			TMap<FVector2D, int32> UVMap;
			for (int32 i = 0; i < UVs.Num(); i++) {
				if (UVMap.Find(UVs[i]) == nullptr) {
					UVMap.Add(UVs[i],uvLineNumber);
					uvLineNumber++;
				}
			}
			FString vt = FString();
			for (auto& e : UVMap) {
				if (e.Key.Y >= 0) {
					vt += "vt " + FString::SanitizeFloat(e.Key.X) + " " + FString::SanitizeFloat(1 - e.Key.Y) + "\r\n";
				}
				else {
					vt += "vt " + FString::SanitizeFloat(e.Key.X) + " " + FString::SanitizeFloat(-1 - e.Key.Y) + "\r\n";
				}
			}
			objData += vt;


			//normals
			TArray<FVector> normals = meshStructs[j].normals;
			TMap<FVector, int32> normalsMap;
			for (int32 i = 0; i < normals.Num(); i++) {
				if (normalsMap.Find(normals[i]) == nullptr) {
					normalsMap.Add(normals[i], normalsLineNumber);
					normalsLineNumber++;
				}
			}

			FString vn = FString();
			for (auto& e : normalsMap) {
				vn += "vn " + FString::SanitizeFloat(e.Key.X) + " " + FString::SanitizeFloat(e.Key.Z) + " " + FString::SanitizeFloat(e.Key.Y) + "\r\n";
			}
			objData += vn;


			//material
			if (meshStructs[j].hasMaterialData) {
				hasMaterial = true;
				FString materialName = meshStructs[j].materialData.materialName;
				objData += "usemtl " + materialName + "\r\n";
				if (materialIsInMtlFile.Find(materialName) == nullptr) {
					materialIsInMtlFile.Add(materialName);
					mtlData += "\r\nnewmtl " +materialName + "\r\n";
					for (auto& textureElement : meshStructs[j].materialData.textures) {
						FString imageFileName = fileName+"_"+textureElement.Value.textureName + ".png";
						if (textureElement.Value.texture->CompressionSettings == TextureCompressionSettings::TC_Normalmap) {
							imageFileName = fileName+"_"+textureElement.Value.textureName + "_n.png";
							mtlData += "map_Bump " + imageFileName + "\r\n";
						}
						else {
							mtlData += "map_Kd " + imageFileName + "\r\n";
						}

						FString imageDir = path + "/" + imageFileName;
						AsyncTask(ENamedThreads::GameThread, [WorldContextObject,exportMaterial, textureElement, imageDir]() {
							bool textureSuccess = false;
							FString textureErrorMessage = FString();
							TArray<uint8> bytes;
							bytes.Empty();
							URealTimeImportImage::realTimeImportImage->texture2DToByteArrayNonStatic( WorldContextObject,exportMaterial,textureSuccess, textureErrorMessage,bytes,textureElement.Value.texture);
							if (textureSuccess == false || bytes.Num() == 0) {
								UE_LOG(LogTemp, Warning, TEXT("RealtimeImport Plugin: Texture could not be extracted from the material."));
							}
							else {
								bool s = FFileHelper::SaveArrayToFile(bytes, *imageDir);
								UE_LOG(LogTemp, Warning, TEXT("RealtimeImport Plugin: Texture could not be saved: %s"),*imageDir);
							}
						});
					}
				}
			}

			//faces (polygons)
			TArray<int32> triangles = meshStructs[j].triangles;
			TArray<int32> verticesIndexes;

			FString f = "g " + meshStructs[j].geometryName + "\r\n";

			int32 x1 = 0;
			int32 x2 = 0;
			int32 x3 = 0;

			for (int32 i = 0; i < triangles.Num(); i++) {
	
				// one polygon = 3 vertices
				if ((i + 1) % 3 == 0) {
					FString fLine = "f ";

					if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
						x1 = i - 1;
						x2 = i - 2;
						x3 = i;
					}
					else {
						x1 = i;
						x2 = i - 2;
						x3 = i - 1;
					}

					int32 polygonIndex = triangles[x1];
					if (vertices.Num() > polygonIndex) {
						FVector vertex = vertices[polygonIndex];
						int32 lineNumber = *verticesMap.Find(vertex);
						fLine += FString::FromInt(lineNumber);
					}

					if (UVs.Num() > polygonIndex) {
						FVector2D uv = UVs[polygonIndex];
						int32 lineNumber = *UVMap.Find(uv);
						fLine += "/"+FString::FromInt(lineNumber);
					}

					if (normals.Num() > polygonIndex) {
						FVector normal = normals[polygonIndex];
						int32 lineNumber = *normalsMap.Find(normal);
						fLine += "/" + FString::FromInt(lineNumber);
					}
					fLine += " ";

					polygonIndex = triangles[x2];
					if (vertices.Num() > polygonIndex) {
						FVector vertex = vertices[polygonIndex];
						int32 lineNumber = *verticesMap.Find(vertex);
						fLine += FString::FromInt(lineNumber);
					}

					if (UVs.Num() > polygonIndex) {
						FVector2D uv = UVs[polygonIndex];
						int32 lineNumber = *UVMap.Find(uv);
						fLine += "/"+FString::FromInt(lineNumber);
					}

					if (normals.Num() > polygonIndex) {
						FVector normal = normals[polygonIndex];
						int32 lineNumber = *normalsMap.Find(normal);
						fLine += "/"+FString::FromInt(lineNumber);
					}
					fLine += " ";

					polygonIndex = triangles[x3];
					if (vertices.Num() > polygonIndex) {
						FVector vertex = vertices[polygonIndex];
						int32 lineNumber = *verticesMap.Find(vertex);
						fLine += FString::FromInt(lineNumber);
					}

					if (UVs.Num() > polygonIndex) {
						FVector2D uv = UVs[polygonIndex];
						int32 lineNumber = *UVMap.Find(uv);
						fLine += "/"+FString::FromInt(lineNumber);
					}

					if (normals.Num() > polygonIndex) {
						FVector normal = normals[polygonIndex];
						int32 lineNumber = *normalsMap.Find(normal);
						fLine += "/"+FString::FromInt(lineNumber);
					}
					

					f += fLine + "\r\n";
				}
			}


			objData += f;

			verticesMap.Empty();
			UVMap.Empty();
			normalsMap.Empty();

		}

		delete model;
	}



	
	if (hasMaterial) {
		objHead += "mtllib "+fileName+".mtl\r\n";
		objData = objHead + objData;
		success = FFileHelper::SaveStringToFile(objData,*dir);
		if (!success) {
			errorMessage = "OBJ file could not be saved: "+dir;
			UE_LOG(LogTemp, Warning, TEXT("RealtimeImport Plugin: OBJ file could not be saved: %s"),*dir);
			return;
		}

		success = FFileHelper::SaveStringToFile(mtlData,*mtlDir);
		if (!success) {
			errorMessage = "MTL file could not be saved: "+mtlDir;
			UE_LOG(LogTemp, Warning, TEXT("RealtimeImport Plugin: MTL file could not be saved: %s"),*mtlDir);
		}
	}
	else {
		objData = objHead + objData;
		success = FFileHelper::SaveStringToFile(objData,*dir);

		if (!success) {
			errorMessage = "OBJ file could not be saved: "+dir;
			UE_LOG(LogTemp, Warning, TEXT("RealtimeImport Plugin: OBJ file could not be saved: %s"),*dir);
			return;
		}

		if (FPaths::FileExists(*mtlDir)) {
			UFileFunctionsRealTimeImport::deleteFile(ERTIDirectoryType::E_ad, mtlDir);
		}
	}
}
