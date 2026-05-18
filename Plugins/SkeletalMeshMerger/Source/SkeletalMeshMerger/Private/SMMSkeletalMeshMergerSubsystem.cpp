// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2022. All Rights Reserved.

#include "SMMSkeletalMeshMergerSubsystem.h"

#include "Animation/Skeleton.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "ClothingAsset.h"
#include "ClothingAssetBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/SkeletalMeshLODSettings.h"
#include "FileHelpers.h"
#include "Interfaces/ITargetPlatformManagerModule.h"
#include "MeshDescription.h"
#include "Misc/CoreMisc.h"
#include "RenderCommandFence.h"
#include "Rendering/SkeletalMeshLODModel.h"
#include "Rendering/SkeletalMeshModel.h"
#include "SkeletalMergingLibrary.h"
#include "SkeletalMeshCompiler.h"
#include "SkeletalMeshMerge.h"
#include "StaticMeshAttributes.h"
#include "UObject/Package.h"
#include "UObject/SavePackage.h"

#include "BoneWeights.h"
#include "SkeletalMeshAttributes.h"
#include "MeshAttributeArray.h"
#include "Rendering/SkeletalMeshLODRenderData.h"
#include "Engine/SkinnedAssetCommon.h"
#include "Rendering/SkeletalMeshRenderData.h"

void GetMeshDescription(FMeshDescription& MeshDescription, const USkeletalMesh *Owner, FSkeletalMeshLODModel* LODModel)
{
	using UE::AnimationCore::FBoneWeights;

	MeshDescription.Empty();
	
	FSkeletalMeshAttributes MeshAttributes(MeshDescription);			
	
	// Register extra attributes for us.
	MeshAttributes.Register();

	TVertexAttributesRef<FVector3f> VertexPositions = MeshAttributes.GetVertexPositions();
	FSkinWeightsVertexAttributesRef VertexSkinWeights = MeshAttributes.GetVertexSkinWeights();
	TVertexInstanceAttributesRef<FVector3f> VertexInstanceNormals = MeshAttributes.GetVertexInstanceNormals();
	TVertexInstanceAttributesRef<FVector3f> VertexInstanceTangents = MeshAttributes.GetVertexInstanceTangents();
	TVertexInstanceAttributesRef<float> VertexInstanceBinormalSigns = MeshAttributes.GetVertexInstanceBinormalSigns();
	TVertexInstanceAttributesRef<FVector4f> VertexInstanceColors = MeshAttributes.GetVertexInstanceColors();
	TVertexInstanceAttributesRef<FVector2f> VertexInstanceUVs = MeshAttributes.GetVertexInstanceUVs();

	TPolygonGroupAttributesRef<FName> PolygonGroupMaterialSlotNames = MeshAttributes.GetPolygonGroupMaterialSlotNames();
	
	const int32 NumTriangles = LODModel->IndexBuffer.Num() / 3;

	MeshDescription.ReserveNewPolygonGroups(LODModel->Sections.Num());
	MeshDescription.ReserveNewTriangles(NumTriangles);
	MeshDescription.ReserveNewVertexInstances(NumTriangles * 3);
	MeshDescription.ReserveNewVertices(static_cast<int32>(LODModel->NumVertices));

	TArray<FVertexID> VertexIDs;
	VertexIDs.Reserve(LODModel->NumVertices);
	for (int32 VertexIndex = 0; VertexIndex < int32(LODModel->NumVertices); VertexIndex++)
	{
		VertexIDs.Add(MeshDescription.CreateVertex());
	}

	VertexInstanceUVs.SetNumChannels(LODModel->NumTexCoords);
	
	const TArray<FSkeletalMaterial>& Materials = Owner->GetMaterials();
	const bool bHasVertexColors = (Owner->GetVertexBufferFlags() == ESkeletalMeshVertexFlags::HasVertexColors);

	// Convert sections to polygon groups, each with their own material.
	for (int32 SectionIndex = 0; SectionIndex < LODModel->Sections.Num(); SectionIndex++)
	{
		const FSkelMeshSection& Section = LODModel->Sections[SectionIndex];

		// Convert positions and bone weights
		const TArray<FSoftSkinVertex>& SourceVertices = Section.SoftVertices;
		for (int32 VertexIndex = 0; VertexIndex < SourceVertices.Num(); VertexIndex++)
		{
			const FVertexID VertexID = VertexIDs[VertexIndex + Section.BaseVertexIndex];

			VertexPositions.Set(VertexID, SourceVertices[VertexIndex].Position);

			// Skeleton bone indexes translated from the render mesh compact indexes.
			FBoneIndexType	InfluenceBones[MAX_TOTAL_INFLUENCES];

			for (int32 InfluenceIndex = 0; InfluenceIndex < MAX_TOTAL_INFLUENCES && SourceVertices[VertexIndex].InfluenceWeights[InfluenceIndex]; InfluenceIndex++)
			{
				const int32 BoneId = SourceVertices[VertexIndex].InfluenceBones[InfluenceIndex];

				InfluenceBones[InfluenceIndex] = Section.BoneMap[BoneId];
			}

			VertexSkinWeights.Set(VertexID, FBoneWeights::Create(InfluenceBones, SourceVertices[VertexIndex].InfluenceWeights));
		}


		const FPolygonGroupID PolygonGroupID(Section.MaterialIndex);

		if (!MeshDescription.IsPolygonGroupValid(PolygonGroupID))
		{
			MeshDescription.CreatePolygonGroupWithID(PolygonGroupID);
		}

		if (ensure(Materials.IsValidIndex(Section.MaterialIndex)))
		{
			PolygonGroupMaterialSlotNames.Set(PolygonGroupID, Materials[Section.MaterialIndex].ImportedMaterialSlotName);
		}

		for (int32 TriangleID = 0; TriangleID < int32(Section.NumTriangles); TriangleID++)
		{
			const int32 VertexIndexBase = TriangleID * 3 + Section.BaseIndex;

			TArray<FVertexInstanceID> TriangleVertexInstanceIDs;
			TriangleVertexInstanceIDs.SetNum(3);

			for (int32 Corner = 0; Corner < 3; Corner++)
			{
				const int32 SourceVertexIndex = LODModel->IndexBuffer[VertexIndexBase + Corner];
				const FVertexID VertexID = VertexIDs[SourceVertexIndex];
				const FVertexInstanceID VertexInstanceID = MeshDescription.CreateVertexInstance(VertexID);

				const FSoftSkinVertex& SourceVertex = SourceVertices[SourceVertexIndex - Section.BaseVertexIndex];

				VertexInstanceNormals.Set(VertexInstanceID, SourceVertex.TangentZ);
				VertexInstanceTangents.Set(VertexInstanceID, SourceVertex.TangentX);
				VertexInstanceBinormalSigns.Set(VertexInstanceID, FMatrix44f(
					SourceVertex.TangentX.GetSafeNormal(),
					SourceVertex.TangentY.GetSafeNormal(),
					(FVector3f)(SourceVertex.TangentZ.GetSafeNormal()),
					FVector3f::ZeroVector).Determinant() < 0.0f ? -1.0f : +1.0f);

				for (int32 UVIndex = 0; UVIndex < int32(LODModel->NumTexCoords); UVIndex++)
				{
					VertexInstanceUVs.Set(VertexInstanceID, UVIndex, SourceVertex.UVs[UVIndex]);
				}

				if (bHasVertexColors)
				{
					VertexInstanceColors.Set(VertexInstanceID, FVector4f(FLinearColor(SourceVertex.Color)));
				}

				TriangleVertexInstanceIDs[Corner] = VertexInstanceID;
			}

			MeshDescription.CreateTriangle(PolygonGroupID, TriangleVertexInstanceIDs);
		}
	}
}


void GenerateImportedModel(USkeletalMesh* SkeletalMesh)
{
#if WITH_EDITORONLY_DATA
    FSkeletalMeshRenderData* SkelResource = SkeletalMesh->GetResourceForRendering();
    if (!SkelResource) {
        return;
    }

    for (UClothingAssetBase* ClothingAssetBase : SkeletalMesh->GetMeshClothingAssets()) {
        if (!ClothingAssetBase) {
            continue;
        }

        UClothingAssetCommon* ClothAsset = Cast<UClothingAssetCommon>(ClothingAssetBase);

        if (!ClothAsset) {
            continue;
        }

        if (!ClothAsset->LodData.Num()) {
            continue;
        }

        for (FClothLODDataCommon& ClothLodData : ClothAsset->LodData) {
            ClothLodData.PointWeightMaps.Empty(16);
            for (TPair<uint32, FPointWeightMap>& WeightMap : ClothLodData.PhysicalMeshData.WeightMaps) {
                if (WeightMap.Value.Num()) {
                    FPointWeightMap& PointWeightMap = ClothLodData.PointWeightMaps.AddDefaulted_GetRef();
                    PointWeightMap.Initialize(WeightMap.Value, WeightMap.Key);
                }
            }
        }
    }

    FSkeletalMeshModel* ImportedModel = SkeletalMesh->GetImportedModel();
    ImportedModel->bGuidIsHash = false;
    ImportedModel->SkeletalMeshModelGUID = FGuid::NewGuid();

    ImportedModel->LODModels.Empty();

    int32 OriginalIndex = 0;
    for (int32 LODIndex = 0; LODIndex < SkelResource->LODRenderData.Num(); ++LODIndex) {
        ImportedModel->LODModels.Add(new FSkeletalMeshLODModel());

        FSkeletalMeshLODRenderData& LODModel = SkelResource->LODRenderData[LODIndex];
        const int32 UVTexNum = LODModel.GetNumTexCoords();
        ImportedModel->LODModels[LODIndex].ActiveBoneIndices = LODModel.ActiveBoneIndices;
        ImportedModel->LODModels[LODIndex].NumTexCoords = LODModel.GetNumTexCoords();
        ImportedModel->LODModels[LODIndex].RequiredBones = LODModel.RequiredBones;
        ImportedModel->LODModels[LODIndex].NumVertices = LODModel.GetNumVertices();

        int indexCount = LODModel.MultiSizeIndexContainer.GetIndexBuffer()->Num();
        ImportedModel->LODModels[LODIndex].IndexBuffer.SetNum(indexCount);
        for (int i = 0; i < indexCount; ++i) {
            ImportedModel->LODModels[LODIndex].IndexBuffer[i] = LODModel.MultiSizeIndexContainer.GetIndexBuffer()->Get(i);
        }

        ImportedModel->LODModels[LODIndex].Sections.SetNum(LODModel.RenderSections.Num());

        // sections
        for (int SectionIndex = 0; SectionIndex < LODModel.RenderSections.Num(); ++SectionIndex) {
            const FSkelMeshRenderSection& RenderSection = LODModel.RenderSections[SectionIndex];
            FSkelMeshSection& ImportedSection = ImportedModel->LODModels[LODIndex].Sections[SectionIndex];

            ImportedSection.CorrespondClothAssetIndex = RenderSection.CorrespondClothAssetIndex;
            ImportedSection.ClothingData = RenderSection.ClothingData;

            if (RenderSection.ClothMappingDataLODs.Num()) {
                ImportedSection.ClothMappingDataLODs.SetNum(1);
                ImportedSection.ClothMappingDataLODs[0] = RenderSection.ClothMappingDataLODs[0];
            }

            ImportedSection.NumVertices = RenderSection.NumVertices;
            ImportedSection.NumTriangles = RenderSection.NumTriangles;
            ImportedSection.BaseIndex = RenderSection.BaseIndex;
            ImportedSection.BaseVertexIndex = RenderSection.BaseVertexIndex;
            ImportedSection.BoneMap = RenderSection.BoneMap;
            ImportedSection.MaterialIndex = RenderSection.MaterialIndex;
            ImportedSection.MaxBoneInfluences = RenderSection.MaxBoneInfluences;
            ImportedSection.SoftVertices.Empty(RenderSection.NumVertices);
            ImportedSection.SoftVertices.AddUninitialized(RenderSection.NumVertices);
            ImportedSection.bUse16BitBoneIndex = LODModel.DoesVertexBufferUse16BitBoneIndex();

            ImportedSection.OriginalDataSectionIndex = OriginalIndex++;
            FSkelMeshSourceSectionUserData& SectionUserData = ImportedModel->LODModels[LODIndex].UserSectionsData.FindOrAdd(ImportedSection.OriginalDataSectionIndex);

            SectionUserData.CorrespondClothAssetIndex = RenderSection.CorrespondClothAssetIndex;
            SectionUserData.ClothingData.AssetGuid = RenderSection.ClothingData.AssetGuid;
            SectionUserData.ClothingData.AssetLodIndex = RenderSection.ClothingData.AssetLodIndex;
        }

        // vertex data
        for (int SectionIndex = 0; SectionIndex < LODModel.RenderSections.Num(); ++SectionIndex) {
            const FSkelMeshRenderSection& RenderSection = LODModel.RenderSections[SectionIndex];
            FSkelMeshSection& ImportedSection = ImportedModel->LODModels[LODIndex].Sections[SectionIndex];

            for (uint32 SectionTriangleIndex = 0; SectionTriangleIndex < RenderSection.NumTriangles; ++SectionTriangleIndex) {
                for (int32 CornerIndex = 0; CornerIndex < 3; ++CornerIndex) {
                    const int32 Index = RenderSection.BaseIndex + ((SectionTriangleIndex * 3) + CornerIndex);
                    const int32 WedgeIndex = LODModel.MultiSizeIndexContainer.GetIndexBuffer()->Get(Index);

                    int32 SectionID = 0;
                    int32 LocalVertIndex = 0;
                    ImportedModel->LODModels[LODIndex].GetSectionFromVertexIndex(WedgeIndex, SectionID, LocalVertIndex);
                    FSoftSkinVertex& Vertex = ImportedSection.SoftVertices[LocalVertIndex];

                    Vertex.Position = LODModel.StaticVertexBuffers.PositionVertexBuffer.VertexPosition(WedgeIndex);
                    Vertex.TangentX = LODModel.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentX(WedgeIndex);
                    Vertex.TangentY = LODModel.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentY(WedgeIndex);
                    Vertex.TangentZ = LODModel.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentZ(WedgeIndex);

                    if (static_cast<uint32>(WedgeIndex) < LODModel.StaticVertexBuffers.ColorVertexBuffer.GetNumVertices()) {
                        Vertex.Color = LODModel.StaticVertexBuffers.ColorVertexBuffer.VertexColor(WedgeIndex);
                    } else {
                        Vertex.Color = FColor::White;
                    }

                    for (int32 UVIndex = 0; UVIndex < UVTexNum; ++UVIndex) {
                        Vertex.UVs[UVIndex] = LODModel.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(WedgeIndex, UVIndex);
                    }

                    for (int32 j = 0; j < RenderSection.MaxBoneInfluences; ++j) {
                        Vertex.InfluenceBones[j] = LODModel.SkinWeightVertexBuffer.GetBoneIndex(WedgeIndex, j);
                        Vertex.InfluenceWeights[j] = LODModel.SkinWeightVertexBuffer.GetBoneWeight(WedgeIndex, j);
                    }

                    for (int32 j = RenderSection.MaxBoneInfluences; j < MAX_TOTAL_INFLUENCES; ++j) {
                        Vertex.InfluenceBones[j] = 0;
                        Vertex.InfluenceWeights[j] = 0;
                    }
                    //Added vertex map. this is used internally everywhere in the engine. It maps LOD Model vertex data to import data.
                    ImportedModel->LODModels[LODIndex].MeshToImportVertexMap.Add(Index);
                }
            }
        }

        ImportedModel->LODModels[LODIndex].SyncronizeUserSectionsDataArray();

        const USkeletalMeshLODSettings* LODSettings = SkeletalMesh->GetLODSettings();
        const bool bValidLODSettings = LODSettings && LODSettings->GetNumberOfSettings() > LODIndex;
        const FSkeletalMeshLODGroupSettings* SkeletalMeshLODGroupSettings = bValidLODSettings ? &LODSettings->GetSettingsForLODLevel(LODIndex) : nullptr;

        FSkeletalMeshLODInfo* LODInfo = SkeletalMesh->GetLODInfo(LODIndex);
        LODInfo->BuildGUID = LODInfo->ComputeDeriveDataCacheKey(SkeletalMeshLODGroupSettings);

        ImportedModel->LODModels[LODIndex].BuildStringID = ImportedModel->LODModels[LODIndex].GetLODModelDeriveDataKey();

        FMeshDescription MeshDescription;
        GetMeshDescription(MeshDescription, SkeletalMesh, &ImportedModel->LODModels[LODIndex]);

        FSkeletalMeshImportData MeshImportData = FSkeletalMeshImportData::CreateFromMeshDescription(MeshDescription);
        SkeletalMesh->SaveLODImportedData(LODIndex, MeshImportData);
    
    }
#endif
}

bool USMMSkeletalMeshMergerSubsystem::MergeMeshes(const FSkeletalMeshMergeParams& mergeParams, const FString& fileName, const FString& relativePath, FString& outMessage)
{
    const FString AssetPath = FPaths::ProjectContentDir();
    const FString PackagePath = FString("/Game/") + relativePath + fileName;

    FString FixedPackageName;
    FString FailMessage;

    if (!FPackageName::TryConvertFilenameToLongPackageName(PackagePath, FixedPackageName, &FailMessage)) {
        outMessage = "Invalid export path!";
        return false;
    }
    
    if (FPackageName::DoesPackageExist(FixedPackageName)) {
        FixedPackageName += "_New";
    }
    UPackage* Package = CreatePackage(*FixedPackageName);

    USkeletalMesh* ResultMesh = USkeletalMergingLibrary::MergeMeshes(mergeParams);

    if (!ResultMesh) {
        outMessage = "Merge Failed!";
        return false;
    }

    if (mergeParams.Skeleton && mergeParams.bSkeletonBefore) {
        ResultMesh->SetSkeleton(mergeParams.Skeleton);
    } else {
        ResultMesh->SetSkeleton(mergeParams.MeshesToMerge[0]->GetSkeleton());
    }

    GenerateImportedModel(ResultMesh);

    ResultMesh->Rename(*fileName, Package, REN_DontCreateRedirectors);
    ResultMesh->ClearFlags(RF_Transient);
    ResultMesh->SetFlags(EObjectFlags::RF_Public | EObjectFlags::RF_Standalone);
    ResultMesh->CalculateExtendedBounds();
    ResultMesh->CreateBodySetup();

#if WITH_EDITOR
    FSkinnedAssetCompilingManager& Manager = FSkinnedAssetCompilingManager::Get();
    if (Manager.IsAsyncCompilationAllowed(ResultMesh)) {
        Manager.FinishCompilation({ const_cast<USkeletalMesh*>(ResultMesh) });
    }
#endif

    Package->MarkPackageDirty();

    FAssetRegistryModule::AssetCreated(ResultMesh);
    FSavePackageArgs args;
    args.TopLevelFlags = EObjectFlags::RF_Public | EObjectFlags::RF_Standalone;
    const FString finalFilePath = FString::Printf(TEXT("%s%s%s"), *AssetPath, *fileName, *FPackageName::GetAssetPackageExtension());
    const bool saved = UPackage::SavePackage(Package, ResultMesh, *finalFilePath, args);

//     TArray<UPackage*> Packages;
// 
//     Packages.Add(Package);
//     UPackage* SkeletalMeshPkg = Cast<UPackage>(ResultMesh->GetOuter());
//     SkeletalMeshPkg->MarkPackageDirty();
//     if (SkeletalMeshPkg) {
//         Packages.Add(SkeletalMeshPkg);
//     }
 //   FEditorFileUtils::PromptForCheckoutAndSave(Packages, true, true, nullptr, false, true);
    Package->MarkPackageDirty();
    return saved;
}

class USkeletalMesh* USMMSkeletalMeshMergerSubsystem::RuntimeMergeMesh(const FSkeletalMeshMergeParams& mergeParams)
{
    return USkeletalMergingLibrary::MergeMeshes(mergeParams);
}

bool USMMSkeletalMeshMergerSubsystem::MergeSkeletons(const FSkeletonMergeParams& mergeParams, const FString& fileName, const FString& relativePath, FString& outMessage)
{
    const FString AssetPath = FPaths::ProjectContentDir();
    const FString PackagePath = FString("/Game/") + relativePath + fileName;

    FString FixedPackageName;
    FString FailMessage;

    if (!FPackageName::TryConvertFilenameToLongPackageName(PackagePath, FixedPackageName, &FailMessage)) {
        outMessage = "Invalid export path!";
        return false;
    }

    UPackage* Package = CreatePackage(*FixedPackageName);

    USkeleton* ResultMesh = USkeletalMergingLibrary::MergeSkeletons(mergeParams);

    if (!ResultMesh) {
        outMessage = "Merge Failed!";
        return false;
    }

    ResultMesh->Rename(*fileName, Package, REN_DontCreateRedirectors);
    ResultMesh->ClearFlags(RF_Transient);
    ResultMesh->SetFlags(EObjectFlags::RF_Public | EObjectFlags::RF_Standalone);

    ResultMesh->MarkPackageDirty();

    FAssetRegistryModule::AssetCreated(ResultMesh);
    FSavePackageArgs args;
    args.TopLevelFlags = EObjectFlags::RF_Public | EObjectFlags::RF_Standalone;
    const FString finalFilePath = FString::Printf(TEXT("%s%s%s"), *AssetPath, *fileName, *FPackageName::GetAssetPackageExtension());

    return UPackage::SavePackage(Package, ResultMesh, *finalFilePath, args);
}

USkeleton* USMMSkeletalMeshMergerSubsystem::ExtractSkeletalMeshesFromBlueprint(const TSubclassOf<AActor>& actorClass, TArray<USkeletalMesh*>& outSkeletalMeshes)
{
    bool bFirstValid = true;
    USkeleton* finalSkel = nullptr;
    if (actorClass) {
        const AActor* defaultObj = Cast<AActor>(actorClass->GetDefaultObject());
        if (defaultObj) {
            TArray<UActorComponent*> comps;
            defaultObj->GetComponents(USkeletalMeshComponent::StaticClass(), comps, true);
            for (const auto& comp : comps) {
                const USkeletalMeshComponent* skeletalMesComp = Cast<USkeletalMeshComponent>(comp);
                if (skeletalMesComp && skeletalMesComp->GetSkeletalMeshAsset()) {
                    outSkeletalMeshes.Add(skeletalMesComp->GetSkeletalMeshAsset());

                    if (bFirstValid) {
                        bFirstValid = false;
                        finalSkel = skeletalMesComp->GetSkeletalMeshAsset()->GetSkeleton();
                    }
                }
            }
            return finalSkel;
        }
    }
    return nullptr;
}

bool USMMSkeletalMeshMergerSubsystem::CreatePackageFromObject(UObject* objectInstance, const FString& fileName, const FString& relativePath)
{
    if (!objectInstance) {
        return false;
    }

    const FString AssetPath = FPaths::ProjectContentDir();
    const FString PackagePath = FString("/Game/") + relativePath + fileName;

    UPackage* Package = CreatePackage(*PackagePath);
    Package->FullyLoad();
    UObject* copy = DuplicateObject(objectInstance, Package);
    copy->Rename(*fileName, Package, REN_DontCreateRedirectors);
    copy->ClearFlags(RF_Transient);
    copy->SetFlags(EObjectFlags::RF_Public | EObjectFlags::RF_Standalone);

    FAssetRegistryModule::AssetCreated(copy);
    copy->MarkPackageDirty();
    FSavePackageArgs args;
    args.TopLevelFlags = EObjectFlags::RF_Public | EObjectFlags::RF_Standalone;
    const FString finalFilePath = FString::Printf(TEXT("%s%s%s"), *AssetPath, *fileName, *FPackageName::GetAssetPackageExtension());

    return UPackage::SavePackage(Package, copy, *finalFilePath, args);
}
