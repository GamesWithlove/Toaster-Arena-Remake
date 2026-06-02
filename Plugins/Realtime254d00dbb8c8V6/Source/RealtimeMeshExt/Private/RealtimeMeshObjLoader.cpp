// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshObjLoader.h"

#include "Mesh/RealtimeMeshAlgo.h"
#include "Mesh/RealtimeMeshBlueprintMeshBuilder.h"
#include "Core/RealtimeMeshBuilder.h"

#include "earcut.hpp"
#define TINYOBJLOADER_IMPLEMENTATION
#define TINYOBJLOADER_USE_MAPBOX_EARCUT
#define TINYOBJLOADER_DONOT_INCLUDE_MAPBOX_EARCUT
#include "UDynamicMesh.h"
#include "tiny_obj_loader.h"

static FVector3f ConvertVector(const tinyobj::real_t (&Vec)[3])
{
	return FVector3f(Vec[0], Vec[1], Vec[2]);
}

static FRealtimeMeshOBJTextureInfo ConvertTextureInfo(const std::string& TexName, const tinyobj::texture_option_t& TexOptions)
{
	FRealtimeMeshOBJTextureInfo TexInfo;
	TexInfo.Path = ANSI_TO_TCHAR(TexName.c_str());
	TexInfo.Sharpness = TexOptions.sharpness;
	TexInfo.Brightness = TexOptions.brightness;
	TexInfo.Contrast = TexOptions.contrast;
	TexInfo.Origin = ConvertVector(TexOptions.origin_offset);
	TexInfo.Scale = ConvertVector(TexOptions.scale);
	TexInfo.Turbulence = ConvertVector(TexOptions.turbulence);
	TexInfo.TextureResolution = TexOptions.texture_resolution;
	TexInfo.Clamp = TexOptions.clamp;
	TexInfo.IMFChannel = TexOptions.imfchan;
	TexInfo.BlendU = TexOptions.blendu;
	TexInfo.BlendV = TexOptions.blendv;
	TexInfo.BumpMultiplier = TexOptions.bump_multiplier;
	return TexInfo;
}

static FRealtimeMeshOBJMaterial ConvertMaterialInfo(const tinyobj::material_t& RawMat)
{
	FRealtimeMeshOBJMaterial Mat;
	Mat.Name = ANSI_TO_TCHAR(RawMat.name.c_str());
	Mat.Ambient = ConvertVector(RawMat.ambient);
	Mat.Diffuse = ConvertVector(RawMat.diffuse);
	Mat.Specular = ConvertVector(RawMat.specular);
	Mat.Transmittance = ConvertVector(RawMat.transmittance);
	Mat.Emission = ConvertVector(RawMat.emission);
	Mat.Shininess = RawMat.shininess;
	Mat.IOR = RawMat.ior;
	Mat.Dissolve = RawMat.dissolve;
	Mat.Illum = RawMat.illum;

	Mat.AmbientTexture = ConvertTextureInfo(RawMat.ambient_texname, RawMat.ambient_texopt);
	Mat.DiffuseTexture = ConvertTextureInfo(RawMat.diffuse_texname, RawMat.diffuse_texopt);
	Mat.SpecularTexture = ConvertTextureInfo(RawMat.specular_texname, RawMat.specular_texopt);
	Mat.SpecularHighlightTexture = ConvertTextureInfo(RawMat.specular_highlight_texname, RawMat.specular_highlight_texopt);
	Mat.BumpTexture = ConvertTextureInfo(RawMat.bump_texname, RawMat.bump_texopt);
	Mat.DisplacementTexture = ConvertTextureInfo(RawMat.displacement_texname, RawMat.displacement_texopt);
	Mat.AlphaTexture = ConvertTextureInfo(RawMat.alpha_texname, RawMat.alpha_texopt);
	Mat.ReflectionTexture = ConvertTextureInfo(RawMat.reflection_texname, RawMat.reflection_texopt);

	Mat.Roughness = RawMat.roughness;
	Mat.Metallic = RawMat.metallic;
	Mat.Sheen = RawMat.sheen;
	Mat.ClearcoatThickness = RawMat.clearcoat_thickness;
	Mat.ClearcoatRoughness = RawMat.clearcoat_roughness;
	Mat.Anisotropy = RawMat.anisotropy;
	Mat.AnisotropyRotation = RawMat.anisotropy_rotation;

	Mat.RoughnessTexture = ConvertTextureInfo(RawMat.roughness_texname, RawMat.roughness_texopt);
	Mat.MetallicTexture = ConvertTextureInfo(RawMat.metallic_texname, RawMat.metallic_texopt);
	Mat.SheenTexture = ConvertTextureInfo(RawMat.sheen_texname, RawMat.sheen_texopt);
	Mat.EmissiveTexture = ConvertTextureInfo(RawMat.emissive_texname, RawMat.emissive_texopt);
	Mat.NormalTexture = ConvertTextureInfo(RawMat.normal_texname, RawMat.normal_texopt);

	return Mat;
}




struct FRealtimeMeshOBJLoadUniqueVertexKey
{
	int32 PositionIndex = INDEX_NONE;
	int32 NormalIndex = INDEX_NONE;
	int32 TexCoordIndex = INDEX_NONE;

	friend uint32 GetTypeHash(const FRealtimeMeshOBJLoadUniqueVertexKey& Key)
	{
		return HashCombine(HashCombine(GetTypeHash(Key.PositionIndex), GetTypeHash(Key.NormalIndex)), GetTypeHash(Key.TexCoordIndex));
	}

	friend bool operator==(const FRealtimeMeshOBJLoadUniqueVertexKey& A, const FRealtimeMeshOBJLoadUniqueVertexKey& B)
	{
		return A.PositionIndex == B.PositionIndex && A.NormalIndex == B.NormalIndex && A.TexCoordIndex == B.TexCoordIndex;
	}
	friend bool operator!=(const FRealtimeMeshOBJLoadUniqueVertexKey& A, const FRealtimeMeshOBJLoadUniqueVertexKey& B)
	{
		return A.PositionIndex != B.PositionIndex || A.NormalIndex != B.NormalIndex || A.TexCoordIndex != B.TexCoordIndex;
	}
};


FRealtimeMeshOBJLoadResult URealtimeMeshObjLoader::LoadStreamSetFromOBJFile(FRealtimeMeshStreamSet& OutStreams, TArray<FRealtimeMeshOBJMaterial>& OutMaterials, const FString& FileName, const FRealtimeMeshOBJLoadOptions& Options)
{
	OutStreams = FRealtimeMeshStreamSet();
	OutMaterials.Empty();

	std::string FileNameString = TCHAR_TO_ANSI(*FileName);

	tinyobj::ObjReaderConfig ReaderConfig;
	ReaderConfig.mtl_search_path = Options.MaterialSearchPath.Len() > 0? TCHAR_TO_ANSI(*Options.MaterialSearchPath) : "./";
	ReaderConfig.vertex_color = true;
	ReaderConfig.triangulate = true;

	tinyobj::ObjReader Reader;

	if (!Reader.ParseFromFile(FileNameString, ReaderConfig))
	{
		FRealtimeMeshOBJLoadResult Result;
		Result.bSuccess = false;
		if (!Reader.Error().empty())
		{
			Result.Message = TEXT("RealtimeMeshObjLoader: ") + FString(ANSI_TO_TCHAR(Reader.Error().c_str()));
		}
		else
		{
			Result.Message = TEXT("RealtimeMeshObjLoader: Unknown error occurred while parsing OBJ file.");
		}
		return Result;
	}

	FRealtimeMeshOBJLoadResult Result;
	Result.bSuccess = true;

	if (!Reader.Warning().empty())
	{
		Result.Message = ANSI_TO_TCHAR(Reader.Warning().c_str());
	}

	const auto& Attributes = Reader.GetAttrib();
	const auto& Shapes = Reader.GetShapes();
	const auto& RawMaterials = Reader.GetMaterials();
	const auto& RawPositions = Attributes.vertices;
	const auto& RawNormals = Attributes.normals;
	const auto& RawTexCoords = Attributes.texcoords;
	const auto& RawColors = Attributes.colors;

	// Grab all the material info
	for (const auto& Mat : RawMaterials)
	{
		OutMaterials.Add(ConvertMaterialInfo(Mat));
	}

	TMap<FRealtimeMeshOBJLoadUniqueVertexKey, uint32> VertexMap;

	TRealtimeMeshStreamBuilder<FVector3f> Positions = OutStreams.AddStream<FVector3f>(FRealtimeMeshStreams::Position);
	Positions.Reserve(RawPositions.size() / 3);	

	const auto GetVertexIndex = [&](int32 PositionIndex, int32 NormalIndex, int32 TexCoordIndex)
	{
		if (NormalIndex >= RawNormals.size() / 3 || NormalIndex < 0)
		{
			NormalIndex = INDEX_NONE;
		}
		if (TexCoordIndex >= RawTexCoords.size() / 2 || TexCoordIndex < 0)
		{
			TexCoordIndex = INDEX_NONE;
		}
		
		const FRealtimeMeshOBJLoadUniqueVertexKey Key = { PositionIndex, NormalIndex, TexCoordIndex };
		if (const auto* FoundEntry = VertexMap.Find(Key))
		{
			return *FoundEntry;
		}
		const uint32 IndexBase = PositionIndex * 3;

		const uint32 NewIndex = Positions.Add(FVector3f(RawPositions[IndexBase + 0], RawPositions[IndexBase + 1], RawPositions[IndexBase + 2]));

		VertexMap.Add(Key, NewIndex);
		return NewIndex;
	};
	
	TRealtimeMeshStreamBuilder<TIndex3<uint32>> Triangles = OutStreams.AddStream<TIndex3<uint32>>(FRealtimeMeshStreams::Triangles);
	TRealtimeMeshStreamBuilder<uint16> PolyGroups = OutStreams.AddStream<uint16>(FRealtimeMeshStreams::PolyGroups);
	
	// Loop over shapes
	for (int32 ShapeIndex = 0; ShapeIndex < Shapes.size(); ShapeIndex++)
	{
		Triangles.Reserve(Triangles.Num() + Shapes[ShapeIndex].mesh.num_face_vertices.size());
		PolyGroups.Reserve(PolyGroups.Num() + Shapes[ShapeIndex].mesh.num_face_vertices.size());
		for (int32 FaceIndex = 0; FaceIndex < Shapes[ShapeIndex].mesh.num_face_vertices.size(); FaceIndex++)
		{
			if (Shapes[ShapeIndex].mesh.num_face_vertices[FaceIndex] != 3)
			{
				Result.Message = TEXT("RealtimeMeshObjLoader: Only triangle faces are supported.");
				Result.bSuccess = false;
				return Result;
			}
			
			const auto& Indices = Shapes[ShapeIndex].mesh.indices;
			const int32 Vert0 = GetVertexIndex(Indices[FaceIndex * 3 + 0].vertex_index, Indices[FaceIndex * 3 + 0].normal_index, Indices[FaceIndex * 3 + 0].texcoord_index);
			const int32 Vert1 = GetVertexIndex(Indices[FaceIndex * 3 + 1].vertex_index, Indices[FaceIndex * 3 + 1].normal_index, Indices[FaceIndex * 3 + 1].texcoord_index);
			const int32 Vert2 = GetVertexIndex(Indices[FaceIndex * 3 + 2].vertex_index, Indices[FaceIndex * 3 + 2].normal_index, Indices[FaceIndex * 3 + 2].texcoord_index);

			Triangles.Add(Options.bReverseWinding? TIndex3<uint32>(Vert0, Vert1, Vert2) : TIndex3<uint32>(Vert2, Vert1, Vert0));
			PolyGroups.Add(Shapes[ShapeIndex].mesh.material_ids[FaceIndex]);			
		}		
	}

	// Do we have normals to copy?
	if (RawNormals.size() > 0)
	{
		TRealtimeMeshStreamBuilder<TRealtimeMeshTangents<FPackedNormal>> Tangents = OutStreams.AddStream<TRealtimeMeshTangents<FPackedNormal>>(FRealtimeMeshStreams::Tangents);
		Tangents.SetNumUninitialized(VertexMap.Num());
		
		for (const auto& Entry : VertexMap)
		{
			FVector3f Normal = FVector3f::UnitZ();
			if (Entry.Key.NormalIndex != INDEX_NONE)
			{
				const int32 NormalBaseIndex = Entry.Key.NormalIndex * 3;
				Normal = FVector3f(RawNormals[NormalBaseIndex + 0], RawNormals[NormalBaseIndex + 1], RawNormals[NormalBaseIndex + 2]);
			}			
			Tangents[Entry.Value] = FRealtimeMeshTangentsNormalPrecision(Normal, FVector3f::UnitX());
		}
	}

	// Do we have tex coords to copy?
	if (RawTexCoords.size() > 0)
	{
		TRealtimeMeshStreamBuilder<FVector2DHalf> TexCoords = OutStreams.AddStream<FVector2DHalf>(FRealtimeMeshStreams::TexCoords);
		TexCoords.SetNumUninitialized(VertexMap.Num());

		for (const auto& Entry : VertexMap)
		{
			if (Entry.Key.TexCoordIndex != INDEX_NONE)
			{
				const int32 TexCoordBaseIndex = Entry.Key.TexCoordIndex * 2;
				TexCoords[Entry.Value] = FVector2D(RawTexCoords[TexCoordBaseIndex + 0], RawTexCoords[TexCoordBaseIndex + 1]);
			}
			else
			{
				TexCoords[Entry.Value] = FVector2D::ZeroVector;
			}
		}
	}

	// Do we have colors?
	if (RawColors.size() >= VertexMap.Num() * 3)
	{
		TRealtimeMeshStreamBuilder<FColor> Colors = OutStreams.AddStream<FColor>(FRealtimeMeshStreams::Color);
		Colors.SetNumUninitialized(VertexMap.Num());
		
		for (const auto& Entry : VertexMap)
		{
			if (Entry.Key.PositionIndex != INDEX_NONE)
			{
				const int32 ColorBaseIndex = Entry.Key.PositionIndex * 3;
				Colors[Entry.Value] = FLinearColor(RawColors[ColorBaseIndex + 0], RawColors[ColorBaseIndex + 1], RawColors[ColorBaseIndex + 2]).ToFColor(false);
			}
			else
			{
				Colors[Entry.Value] = FLinearColor::Black.ToFColor(false);
			}
		}
	}

	ensure(RealtimeMeshAlgo::OrganizeTrianglesByPolygonGroup(OutStreams, FRealtimeMeshStreams::Triangles, FRealtimeMeshStreams::PolyGroups));

	if (Options.bGenerateTangents || Options.bGenerateSmoothTangents)
	{
		RealtimeMeshAlgo::GenerateTangents(OutStreams, Options.bGenerateSmoothTangents);
	}

	return Result;
}


FRealtimeMeshOBJLoadResult URealtimeMeshObjLoader::LoadStreamSetFromOBJFile(URealtimeMeshStreamSet* OutStreams, TArray<FRealtimeMeshOBJMaterial>& OutMaterials, const FString& FileName, const FRealtimeMeshOBJLoadOptions& Options)
{
	if (OutStreams == nullptr)
	{
		FRealtimeMeshOBJLoadResult Result;
		Result.bSuccess = false;
		Result.Message = TEXT("RealtimeMeshObjLoader: Invalid stream set.");
		return Result;
	}

	return LoadStreamSetFromOBJFile(OutStreams->GetStreamSet(), OutMaterials, FileName, Options);
}

