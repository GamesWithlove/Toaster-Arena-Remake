/*This file contains code from the file TriangulatePolygon.h by Stefan Johnsen https://github.com/StefanJohnsen/Triangulate3DPolygon
and was heavily modified by me, David Romanski. The original code is licensed under MIT. 

MIT License

Copyright (c) 2024 Falcon Coding

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

#include "CoreMinimal.h"

struct TriangualteStruct{
public:
static void triangulateFace(int32& triangulatedFacesCount, TArray<int32>& triangles, TArray<int32>& indeces, TArray<FVector>& vertices, ERTICoordinateSystem coordinateSystem){

	//TMap<FVector3f, int32> verticesIndexConnection;
	TMap<FVector, int32> triangleIndexByVertexMap;
	TArray<FVector> faceVertices;
	faceVertices.AddUninitialized(indeces.Num());
	//TArray<FVector> Points;
	//Points.AddUninitialized(indeces.Num());
	for (int32 i = 0; i < indeces.Num(); i++){
		//faceVertices[i] = vertices[indeces[i]];
		FVector v = vertices[indeces[i]];
		faceVertices[i] = FVector(v.X, v.Z, v.Y);
		//Points[i] = faceVertices[i];
		//verticesIndexConnection.Add((FVector3f)Points[i],indeces[i]);
		triangleIndexByVertexMap.Add(faceVertices[i], indeces[i]);
	}

	//normalize by Newell's Method. 
	FVector allFaceVerticesNormalizedVector = FVector::ZeroVector;
	FVector v1;
	FVector v2; 
	for (int32 i = 0; i < faceVertices.Num(); i++){

		if ((i + 1) == faceVertices.Num()) {
			v1 = faceVertices[i];
			v2 = faceVertices[0];
		}
		else {
			v1 = faceVertices[i];
			v2 = faceVertices[i + 1];
		}

		allFaceVerticesNormalizedVector.X += (v2.Y - v1.Y) * (v2.Z + v1.Z);
		allFaceVerticesNormalizedVector.Y += (v2.Z - v1.Z) * (v2.X + v1.X);
		allFaceVerticesNormalizedVector.Z += (v2.X - v1.X) * (v2.Y + v1.Y);
	}
	allFaceVerticesNormalizedVector.Normalize();

	bool defaultTriangulation = true;

	//check whether normal tringulation is sufficient or whether we need to use cut tringulation
	int8 lastVerticesBuildDirection = 0; // 1 = right, -1 left
	for (int32 i = 0; i < faceVertices.Num(); i++) {
		int32 indexPrev = i - 1;
		int32 indexCenter = i;
		int32 indexNext = i + 1;
		if (indexPrev < 0) {
			indexPrev = faceVertices.Num() - 1;
		}
		if (indexNext == faceVertices.Num()) {
			indexNext = 0;
		}

		FVector vectorPrev = faceVertices[indexPrev];
		FVector vectorCenter = faceVertices[indexCenter];
		FVector vectorNext = faceVertices[indexNext];

		int8 verticesBuildDirection = getVerticesDirection(faceVertices, vectorPrev, vectorCenter, vectorNext, allFaceVerticesNormalizedVector);

		if (verticesBuildDirection == 0) {
			continue;
		}
		if (lastVerticesBuildDirection == 0) {
			lastVerticesBuildDirection = verticesBuildDirection;
		}
		if (lastVerticesBuildDirection != verticesBuildDirection) {
			defaultTriangulation = false;
			break;
		}
	}



	if (defaultTriangulation) {
		if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
			for (int32 k = 1; k < indeces.Num() - 1; k++) {
				triangles.Add(indeces[k]);
				triangles.Add(indeces[k + 1]);
				triangles.Add(indeces[0]);
			}
		}
		else {
			for (int32 k = 1; k < indeces.Num() - 1; k++) {
				triangles.Add(indeces[k + 1]);
				triangles.Add(indeces[k]);
				triangles.Add(indeces[0]);
			}
		}
		return;
	}

	triangulatedFacesCount++;


	//cut triangulation, ear clipping method
	//https://en.wikipedia.org/wiki/Polygon_triangulation 
	//https://www.geometrictools.com/Documentation/TriangulationByEarClipping.pdf 
	while( faceVertices.Num() > 2)	{

		int32 i = getEarIndex(faceVertices, allFaceVerticesNormalizedVector);

		if (i == -1) {
			i = isOverlapping(faceVertices, allFaceVerticesNormalizedVector);
		}

		if (i == -1) {
			break;
		}

		int32 indexPrev = i - 1;
		int32 indexCenter = i;
		int32 indexNext = i + 1;
		if (indexPrev < 0) {
			indexPrev = faceVertices.Num() - 1;
		}
		if (indexNext == faceVertices.Num()) {
			indexNext = 0;
		}

		FVector vectorPrev = faceVertices[indexPrev];
		FVector vectorCenter = faceVertices[indexCenter];
		FVector vectorNext = faceVertices[indexNext];


		//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: X: %f, Y: %f, Z: %f "), vectorCenter.X, vectorCenter.Z,vectorCenter.Y);
		//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: X: %f, Y: %f, Z: %f "), vectorNext.X, vectorNext.Z,vectorNext.Y);
		//UE_LOG(LogTemp, Warning, TEXT("RealTimeImportPlugin: X: %f, Y: %f, Z: %f "), vectorPrev.X, vectorPrev.Z,vectorPrev.Y);


		if (coordinateSystem == ERTICoordinateSystem::E_RightHanded) {
			for (int32 k = 1; k < indeces.Num() - 1; k++) {

				if (triangleIndexByVertexMap.Find(vectorCenter) != nullptr) {
					triangles.Add(*triangleIndexByVertexMap.Find(vectorCenter));
				}
				if (triangleIndexByVertexMap.Find(vectorNext) != nullptr) {
					triangles.Add(*triangleIndexByVertexMap.Find(vectorNext));
				}
				if (triangleIndexByVertexMap.Find(vectorPrev) != nullptr) {
					triangles.Add(*triangleIndexByVertexMap.Find(vectorPrev));
				}
			}
		}
		else {
			for (int32 k = 1; k < indeces.Num() - 1; k++) {

				if (triangleIndexByVertexMap.Find(vectorNext) != nullptr) {
					triangles.Add(*triangleIndexByVertexMap.Find(vectorNext));
				}
				if (triangleIndexByVertexMap.Find(vectorCenter) != nullptr) {
					triangles.Add(*triangleIndexByVertexMap.Find(vectorCenter));
				}
				if (triangleIndexByVertexMap.Find(vectorPrev) != nullptr) {
					triangles.Add(*triangleIndexByVertexMap.Find(vectorPrev));
				}
			}
		}


		faceVertices.RemoveAt(i);
	}

	triangleIndexByVertexMap.Empty();
	faceVertices.Empty();
}

/*-1 = left, 1 = right, 0 = center*/
static int8 getVerticesDirection(TArray<FVector>& faceVertices, FVector& vectorPrev,FVector& vectorCenter, FVector& vectorNext,
	FVector& allFaceVerticesNormalizedVector){

	FVector normalVectorCurrMinusPrev = vectorCenter - vectorPrev;
	normalVectorCurrMinusPrev.Normalize();
	FVector crossVector = FVector::CrossProduct((vectorNext - vectorPrev), normalVectorCurrMinusPrev);
	double dotProduct = FVector::DotProduct(crossVector, allFaceVerticesNormalizedVector);

	if (dotProduct > +0.001) {
		return 1;
	}
	if (dotProduct < -0.001) {
		return -1;
	}

	return 0;
}

static int32 getEarIndex(TArray<FVector>& faceVertices, FVector& allFaceVerticesNormalizedVector){

	double maxZone = DBL_MIN;
	int32 indexToReturn = -1;

	for (int32 i = 0; i < faceVertices.Num(); i++){

		int32 indexPrev = i - 1;
		int32 indexCenter = i;
		int32 indexNext = i + 1;
		if (indexPrev < 0) {
			indexPrev = faceVertices.Num() - 1;
		}
		if (indexNext == faceVertices.Num()) {
			indexNext = 0;
		}

		FVector vectorPrev = faceVertices[indexPrev];
		FVector vectorCenter = faceVertices[indexCenter];
		FVector vectorNext = faceVertices[indexNext];

		if( faceVertices.Num() == 3 || hasEar(i,indexPrev, indexCenter,indexNext,vectorPrev,vectorCenter, vectorNext, faceVertices, allFaceVerticesNormalizedVector)){

			FVector crossVector = FVector::CrossProduct((vectorCenter - vectorPrev), (vectorNext - vectorPrev));
			double zone = (crossVector.X * crossVector.X + crossVector.Y * crossVector.Y + crossVector.Z * crossVector.Z) / (double)4;

			if( maxZone < zone ){
				maxZone = zone;
				indexToReturn = i;
			}
		}
	}
	return indexToReturn;
}

static bool hasEar(int32 index,int32 indexPrev, int32 indexCenter,int32 indexNext, 
	FVector& vectorPrev,FVector& vectorCenter, FVector& vectorNext,
	TArray<FVector>& faceVertices, FVector& allFaceVerticesNormalizedVector){

	bool edge = false;

	int8 direction = getVerticesDirection(faceVertices, vectorPrev, vectorCenter, vectorNext, allFaceVerticesNormalizedVector);
	if (direction != 1) {
		return false;
	}

	double minPosDouble = DBL_EPSILON;//smallest positive number that can be added to 1 so that the result is distinguishable from 1

	for( size_t i = 0; i < faceVertices.Num(); i++ ){
		if (i != indexPrev && i != indexCenter && i != indexNext) {

			FVector vector1 = vectorNext - vectorPrev;
			FVector vector2 = vectorCenter - vectorPrev;
			FVector vector3 = faceVertices[i] - vectorPrev;

			double dotProduct1 = FVector::DotProduct(vector1, vector1);
			double dotProduct2 = FVector::DotProduct(vector1, vector2);
			double dotProduct3 = FVector::DotProduct(vector1, vector3);
			double dotProduct4 = FVector::DotProduct(vector2, vector2);
			double dotProduct5 = FVector::DotProduct(vector2, vector3);

			double a = dotProduct1 * dotProduct4 - dotProduct2 * dotProduct2;
			if (FMath::Abs(a) < minPosDouble) {
				return false;
			}

			a = 1. / a;

			double b = (dotProduct4 * dotProduct3 - dotProduct2 * dotProduct5) * a;
			double c = (dotProduct1 * dotProduct5 - dotProduct2 * dotProduct3) * a;

			if ((b >= 0.0) && (c >= 0.0) && (b + c < 1.0)) {
				return false;
			}
		}
	}

	return true;
}


static int32 isOverlapping(TArray<FVector>& faceVertices, FVector& allFaceVerticesNormalizedVector)
{

	for (int32 i = 0; i < faceVertices.Num(); i++){
		int32 indexPrev = i - 1;
		int32 indexCenter = i;
		int32 indexNext = i + 1;
		if (indexPrev < 0) {
			indexPrev = faceVertices.Num() - 1;
		}
		if (indexNext == faceVertices.Num()) {
			indexNext = 0;
		}

		FVector vectorPrev = faceVertices[indexPrev];
		FVector vectorCenter = faceVertices[indexCenter];
		FVector vectorNext = faceVertices[indexNext];

		if (getVerticesDirection(faceVertices, vectorPrev, vectorCenter, vectorNext, allFaceVerticesNormalizedVector) != 0) {
			continue;
		}

		FVector vectorNormalPrev = vectorCenter - vectorPrev;
		vectorNormalPrev.Normalize();
		FVector vectorNormalNext = vectorNext - vectorCenter;
		vectorNormalNext.Normalize();

		double dotProduct = FVector::DotProduct(vectorNormalPrev, vectorNormalNext);
		if (dotProduct < 0) {
			return i;
		}
	}
	return -1;
}

};