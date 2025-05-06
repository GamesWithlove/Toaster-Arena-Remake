// Copyright 2023, EastFoxStudio. All Rights Reserved.

#include "QuickMergeSkeletalMesh.h"

#include "QuickMergeSkeletalMeshStyle.h"
#include "Misc/MessageDialog.h"
#include "Misc/FileHelper.h"
#include "ContentBrowserModule.h"
#include "SkeletalMeshMerge.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "FileHelpers.h"
#include "Engine/SkeletalMeshLODSettings.h"
#include "Rendering/SkeletalMeshModel.h"
#include "Rendering/SkeletalMeshRenderData.h"
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 1
#include "Engine/SkinnedAssetCommon.h"
#endif

static const FName QuickMergeSkeletalMeshTabName("QuickMergeSkeletalMesh");

#define LOCTEXT_NAMESPACE "FQuickMergeSkeletalMeshModule"

void FQuickMergeSkeletalMeshModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FQuickMergeSkeletalMeshStyle::Initialize();
	FQuickMergeSkeletalMeshStyle::ReloadTextures();

	if (!IsRunningCommandlet())
	{
		// 获取内容浏览器模块中的扩展委托列表
		FContentBrowserModule& ContentBrowserModule = FModuleManager::GetModuleChecked<FContentBrowserModule>("ContentBrowser");
		TArray<FContentBrowserMenuExtender_SelectedAssets>& CBMenuExtenderDelegates = ContentBrowserModule.GetAllAssetViewContextMenuExtenders(); //
		// 添加委托
		FContentBrowserMenuExtender_SelectedAssets& AddedDelegate = CBMenuExtenderDelegates.Add_GetRef(
			FContentBrowserMenuExtender_SelectedAssets::CreateRaw(this, &FQuickMergeSkeletalMeshModule::OnExtendContentBrowserAssetSelectionMenu));
	}
}

void FQuickMergeSkeletalMeshModule::RegenerateImportedModel(USkeletalMesh* SkeletalMesh)
{
	if (!SkeletalMesh)
	{
		return;
	}

#if WITH_EDITORONLY_DATA
	FSkeletalMeshRenderData* SkelResource = SkeletalMesh->GetResourceForRendering();
	if (!SkelResource)
	{
		return;
	}

	FSkeletalMeshModel* ImportedModel = SkeletalMesh->GetImportedModel();
	ImportedModel->bGuidIsHash = false;
	ImportedModel->SkeletalMeshModelGUID = FGuid::NewGuid();

	ImportedModel->LODModels.Empty();

	int32 OriginalIndex = 0;
	for (int32 LODIndex = 0; LODIndex < SkelResource->LODRenderData.Num(); ++LODIndex)
	{
		ImportedModel->LODModels.Add(new FSkeletalMeshLODModel());

		FSkeletalMeshLODRenderData& LODModel = SkelResource->LODRenderData[LODIndex];
		int32 CurrentSectionInitialVertex = 0;

		// Indices
		int indexCount = LODModel.MultiSizeIndexContainer.GetIndexBuffer()->Num();
		ImportedModel->LODModels[LODIndex].IndexBuffer.SetNum(indexCount);
		for (int i = 0; i < indexCount; ++i)
		{
			ImportedModel->LODModels[LODIndex].IndexBuffer[i] = LODModel.MultiSizeIndexContainer.GetIndexBuffer()->Get(i);
		}

		ImportedModel->LODModels[LODIndex].Sections.SetNum(LODModel.RenderSections.Num());

		for (int SectionIndex = 0; SectionIndex < LODModel.RenderSections.Num(); ++SectionIndex)
		{
			const FSkelMeshRenderSection& RenderSection = LODModel.RenderSections[SectionIndex];
			FSkelMeshSection& ImportedSection = ImportedModel->LODModels[LODIndex].Sections[SectionIndex];

			ImportedSection.CorrespondClothAssetIndex = RenderSection.CorrespondClothAssetIndex;
			ImportedSection.ClothingData = RenderSection.ClothingData;
			ImportedSection.ClothMappingDataLODs = RenderSection.ClothMappingDataLODs;

			// Vertices
			ImportedSection.NumVertices = RenderSection.NumVertices;
			//ImportedSection.SoftVertices.Empty(RenderSection.NumVertices);
			//ImportedSection.SoftVertices.AddUninitialized(RenderSection.NumVertices);
			//ImportedSection.bUse16BitBoneIndex = LODModel.DoesVertexBufferUse16BitBoneIndex();

			// Triangles
			ImportedSection.NumTriangles = RenderSection.NumTriangles;
			ImportedSection.BaseIndex = RenderSection.BaseIndex;
			ImportedSection.BaseVertexIndex = RenderSection.BaseVertexIndex;
			ImportedSection.BoneMap = RenderSection.BoneMap;
			ImportedSection.MaterialIndex = RenderSection.MaterialIndex;
			//ImportedSection.MaxBoneInfluences = RenderSection.MaxBoneInfluences;
			ImportedSection.MaxBoneInfluences = LODModel.GetSkinWeightVertexBuffer()->GetMaxBoneInfluences();
			ImportedSection.OriginalDataSectionIndex = OriginalIndex++;

			//other
			ImportedSection.bCastShadow = RenderSection.bCastShadow;
			ImportedSection.bDisabled = RenderSection.bDisabled;
			ImportedSection.bRecomputeTangent = RenderSection.bRecomputeTangent;
			ImportedSection.bSelected = false;
			ImportedSection.GenerateUpToLodIndex = -1;

			TArray<FSoftSkinVertex>& dstVertices{ImportedSection.SoftVertices};
			for (auto vertexIndex = RenderSection.BaseVertexIndex; vertexIndex < RenderSection.BaseVertexIndex + RenderSection.GetNumVertices(); ++vertexIndex)
			{
				dstVertices.Emplace();
				auto& dstVertex = dstVertices.Last();

				dstVertex.Position = LODModel.StaticVertexBuffers.PositionVertexBuffer.VertexPosition(vertexIndex);
				dstVertex.TangentX = LODModel.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentX(vertexIndex);
				dstVertex.TangentY = LODModel.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentY(vertexIndex);
				dstVertex.TangentZ = LODModel.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentZ(vertexIndex);
				FMemory::Memzero(dstVertex.UVs);
				for (uint32 j = 0; j < LODModel.StaticVertexBuffers.StaticMeshVertexBuffer.GetNumTexCoords(); j++)
				{
					dstVertex.UVs[j] = LODModel.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(vertexIndex, j);
				}
				dstVertex.Color = FColor::White; //LODModel.StaticVertexBuffers.ColorVertexBuffer.VertexColor(vertexIndex);
				FMemory::Memzero(dstVertex.InfluenceBones);
				FMemory::Memzero(dstVertex.InfluenceWeights);

				const auto& SrcSkinWeights{LODModel.GetSkinWeightVertexBuffer()->GetVertexSkinWeights(vertexIndex)};

				for (uint32 l = 0; l < MAX_TOTAL_INFLUENCES; ++l)
				{
					dstVertex.InfluenceBones[l] = SrcSkinWeights.InfluenceBones[l];
					dstVertex.InfluenceWeights[l] = SrcSkinWeights.InfluenceWeights[l];
				}
			}

			FSkelMeshSourceSectionUserData& SectionUserData = ImportedModel->LODModels[LODIndex].UserSectionsData.FindOrAdd(ImportedSection.OriginalDataSectionIndex);

			SectionUserData.CorrespondClothAssetIndex = RenderSection.CorrespondClothAssetIndex;
			SectionUserData.ClothingData.AssetGuid = RenderSection.ClothingData.AssetGuid;
			SectionUserData.ClothingData.AssetLodIndex = RenderSection.ClothingData.AssetLodIndex;
		}

		ImportedModel->LODModels[LODIndex].ActiveBoneIndices = LODModel.ActiveBoneIndices;
		ImportedModel->LODModels[LODIndex].NumTexCoords = LODModel.GetNumTexCoords();
		ImportedModel->LODModels[LODIndex].RequiredBones = LODModel.RequiredBones;
		ImportedModel->LODModels[LODIndex].NumVertices = LODModel.GetNumVertices();
		ImportedModel->LODModels[LODIndex].MaxImportVertex = LODModel.GetNumVertices();

		// DDC keys
		const USkeletalMeshLODSettings* LODSettings = SkeletalMesh->GetLODSettings();
		const bool bValidLODSettings = LODSettings && LODSettings->GetNumberOfSettings() > LODIndex;
		const FSkeletalMeshLODGroupSettings* SkeletalMeshLODGroupSettings = bValidLODSettings ? &LODSettings->GetSettingsForLODLevel(LODIndex) : nullptr;

		FSkeletalMeshLODInfo* LODInfo = SkeletalMesh->GetLODInfo(LODIndex);
		LODInfo->BuildGUID = LODInfo->ComputeDeriveDataCacheKey(SkeletalMeshLODGroupSettings);

		ImportedModel->LODModels[LODIndex].BuildStringID = ImportedModel->LODModels[LODIndex].GetLODModelDeriveDataKey();

		LODInfo->ReductionSettings.NumOfTrianglesPercentage = 1.0f;
		LODInfo->ReductionSettings.NumOfVertPercentage = 1.0f;
	}
#endif
}

USkeletalMesh* FQuickMergeSkeletalMeshModule::MergeSkeletalMesh(TArray<USkeletalMesh*> MeshList)
{
	if (MeshList.Num() <= 1) return nullptr;

	TArray<USkeletalMesh*>& SourceMeshList = MeshList;
	FString fileName = FPaths::GetBaseFilename(MeshList[0]->GetName()) + TEXT("_Merge");
	FString pathName = FPaths::GetPath(MeshList[0]->GetPathName()) + TEXT("/") + fileName;
	int count = 1;
	while (LoadPackage(nullptr, *pathName, LOAD_None) != nullptr)
	{
		fileName = FPaths::GetBaseFilename(MeshList[0]->GetName()) + TEXT("_Merge") + FString::FromInt(count);
		pathName = FPaths::GetPath(MeshList[0]->GetPathName()) + TEXT("/") + fileName;
		count++;
	}
	UPackage* NewMeshPack = CreatePackage(*pathName);
	USkeletalMesh* CompositeMesh = NewObject<USkeletalMesh>(NewMeshPack, *fileName, RF_Public | RF_Standalone);
	TArray<FSkelMeshMergeSectionMapping> InForceSectionMapping;
	FSkeletalMeshMerge MeshMergeUtil(CompositeMesh, SourceMeshList, InForceSectionMapping, 0);
	if (!MeshMergeUtil.DoMerge())
	{
		return nullptr;
	}
	CompositeMesh->SetSkeleton(MeshList[0]->GetSkeleton()); //设置新的 *SkeletalMesh* 的骨架
	RegenerateImportedModel(CompositeMesh);
	CompositeMesh->Build();

	//FAssetRegistryModule::AssetCreated(CompositeMesh);

	TArray<UPackage*> PackagesToSave;
	PackagesToSave.Add(NewMeshPack);
	FEditorFileUtils::PromptForCheckoutAndSave(PackagesToSave, /*bCheckDirty=*/ true, /*bPromptToSave=*/ false);

	CompositeMesh->MarkPackageDirty();
	return CompositeMesh;
}

TSharedRef<FExtender> FQuickMergeSkeletalMeshModule::OnExtendContentBrowserAssetSelectionMenu(const TArray<FAssetData>& Assets)
{
	TSharedRef<FExtender> Extender(new FExtender());

	Extender->AddMenuExtension("GetAssetActions", EExtensionHook::After, nullptr, FMenuExtensionDelegate::CreateLambda([Assets](FMenuBuilder& MenuBuilder)
		                           {
			                           // 创建新的 Section
			                           MenuBuilder.BeginSection("CustomMenu", FText::FromString(TEXT("FX Actions")));

			                           MenuBuilder.AddMenuEntry(
				                           FText::FromString(TEXT("Merge Skeletal Mesh")),
				                           FText::FromString(TEXT("Merge Skeletal Mesh")),
				                           FSlateIcon(FQuickMergeSkeletalMeshStyle::GetStyleSetName(), "MERAGEASSET.ICON"),
				                           FUIAction(FExecuteAction::CreateLambda([Assets]()
					                           {
						                           TArray<USkeletalMesh*> mergeList;
						                           USkeleton* skeleton = nullptr;
						                           FString meshName = TEXT("");
						                           for (const FAssetData& AssetData : Assets)
						                           {
							                           FSoftObjectPath refPath = AssetData.GetAsset()->GetFName().ToString() + TEXT("'") + AssetData.ToSoftObjectPath().ToString() + TEXT("'");
							                           UObject* refObj = refPath.TryLoad();
							                           USkeletalMesh* skeletalMesh = Cast<USkeletalMesh>(refObj);
							                           if (skeletalMesh != nullptr)
							                           {
								                           if (skeleton != nullptr)
								                           {
									                           USkeleton* skeletonNew = skeletalMesh->GetSkeleton();
									                           if (skeleton->GetPathName() == skeletonNew->GetPathName())
									                           {
										                           mergeList.Add(skeletalMesh);
										                           meshName += TEXT("Merge : ") + skeletalMesh->GetName() + TEXT("\n");
									                           }
									                           else
									                           {
										                           meshName += TEXT("Different Skeleton : ") + skeletalMesh->GetName() + TEXT("\n");
										                           FString error = TEXT("Merge Skeletal Mesh Error: Different Skeleton  but will merge anyways : ") + skeleton->GetPathName() + TEXT(" -> ") + skeletonNew->GetPathName();
										                           UE_LOG(LogTemp, Log, TEXT("%s"), *error);
									                           	   mergeList.Add(skeletalMesh);
									                           	   meshName += TEXT("Merge : ") + skeletalMesh->GetName() + TEXT("\n");
										                           }
								                           }
								                           else
								                           {
									                           skeleton = skeletalMesh->GetSkeleton();
									                           mergeList.Add(skeletalMesh);
									                           meshName += TEXT("Base : ") + skeletalMesh->GetName() + TEXT("\n");
								                           }
							                           }
						                           }
						                           if (mergeList.Num() > 1)
						                           {
							                           if (MergeSkeletalMesh(mergeList) != nullptr)
							                           {
								                           FText const Title = FText::FromString(TEXT("Merge Complete"));
								                           FText const errorText = FText::Format(LOCTEXT("Output", "Merge Complete ！\n{0}"), FText::FromString(meshName));
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 2
								                           FMessageDialog::Open(EAppMsgType::Ok, errorText, Title);
#else
								                           FMessageDialog::Open(EAppMsgType::Ok, errorText, &Title);
#endif
							                           }
							                           else
							                           {
								                           FText const Title = FText::FromString(TEXT("Merge Failure"));
								                           FText const errorText = FText::Format(LOCTEXT("Output", "Merge Failure ！\n{0}"), FText::FromString(meshName));
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 2
								                           FMessageDialog::Open(EAppMsgType::Ok, errorText, Title);
#else
								                           FMessageDialog::Open(EAppMsgType::Ok, errorText, &Title);
#endif
							                           }
						                           }
						                           else
						                           {
							                           FText const Title = FText::FromString(TEXT("Merge Failure"));
							                           FText const errorText = FText::Format(LOCTEXT("Output", "Skeletal Mesh Count < 2 ！\n{0}"), FText::FromString(meshName));
#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION > 2
							                           FMessageDialog::Open(EAppMsgType::Ok, errorText, Title);
#else
							                           FMessageDialog::Open(EAppMsgType::Ok, errorText, &Title);
#endif
							                           return;
						                           }
					                           }
				                           ))
			                           );
			                           MenuBuilder.EndSection();
		                           }
	                           ));

	return Extender;
}

void FQuickMergeSkeletalMeshModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FQuickMergeSkeletalMeshStyle::Shutdown();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FQuickMergeSkeletalMeshModule, QuickMergeSkeletalMesh)
