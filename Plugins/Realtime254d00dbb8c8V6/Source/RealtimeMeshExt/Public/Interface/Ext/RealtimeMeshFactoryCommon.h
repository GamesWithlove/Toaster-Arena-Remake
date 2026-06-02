// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "Core/RealtimeMeshConfig.h"
#include "Core/RealtimeMeshKeys.h"
#include "Core/RealtimeMeshLODConfig.h"
#include "Core/RealtimeMeshSectionConfig.h"
#include "Core/RealtimeMeshDataStream.h"
#include "Core/RealtimeMeshSectionGroupConfig.h"
#include "HAL/PlatformAtomics.h"
#include "CoreMinimal.h"
#if RMC_ENGINE_ABOVE_5_5
#include "StructUtils/InstancedStruct.h"
#else
#include "InstancedStruct.h"
#endif

namespace RealtimeMesh
{
	class FRealtimeMeshConstructed;
	/*
	 *	This is a way of uniquely identifying a RMC that was created by this factory
	 *	So that you can use it to send messages to the factory, or to respond for the correct mesh from the provider
	 */
	struct FRealtimeMeshID
	{
	private:
		int64 ID;
	
		FRealtimeMeshID(int64 InID) : ID(InID) { }

	public:
		FRealtimeMeshID() : ID(INDEX_NONE) { }

		int64 GetID() const { return ID; }
		bool IsValid() const { return ID != INDEX_NONE; }
		FString ToString() const { return FString::FromInt(ID); }

		static FRealtimeMeshID CreateNew()
		{
			static volatile int64 IDCounter = 0;
			return FRealtimeMeshID(FPlatformAtomics::InterlockedIncrement(&IDCounter));
		}

		static FRealtimeMeshID Invalid()
		{
			return FRealtimeMeshID();
		}

		bool operator==(const FRealtimeMeshID& Other) const
		{
			return ID == Other.ID;
		}
		bool operator!=(const FRealtimeMeshID& Other) const
		{
			return ID != Other.ID;
		}

		friend uint32 GetTypeHash(const FRealtimeMeshID& Id)
		{
			return ::GetTypeHashHelper(Id.ID);
		}		
	};

#define RMC_


	
	/*// TODO: VERY SOON --- This is technically unsafe as we're not really handling destructors or anything with this
	// It's simply to get rolling fast,  probably need to mimic the behavior of FInstancedStruct
	// I wish we could just use FInstancedStruct, but that require UStructs which woul require the base to be accessible
	// which we cannot guarantee with the optional binding interface
	struct FRealtimeMeshFactoryParams
	{
	private:
		FGuid StructTypeGuid;
		uint8* StructMemory = nullptr;
		TFunction<void(uint8*)> DestructObjectFunc;
		
	public:		
		FRealtimeMeshFactoryParams() = default;
		~FRealtimeMeshFactoryParams() { Reset(); }

		FRealtimeMeshFactoryParams(const FRealtimeMeshFactoryParams& Other) = delete;
		FRealtimeMeshFactoryParams(FRealtimeMeshFactoryParams&& Other)
		{
			StructTypeGuid = Other.StructTypeGuid;
			StructMemory = Other.StructMemory;
			DestructObjectFunc = Other.DestructObjectFunc;

			Other.StructMemory = nullptr;
			Other.StructTypeGuid.Invalidate();
			Other.DestructObjectFunc.Reset();
		}

		template<typename T, typename... TArgs>
		void InitializeAs(TArgs&&... InArgs)
		{
			// Clear any existing data
			Reset();

			// Allocate memory for the struct
			StructMemory = static_cast<uint8*>(FMemory::Malloc(sizeof(T), alignof(T)));
			check(StructMemory);

			// Placement new the struct on the memory region
			new (StructMemory) T(Forward<TArgs>(InArgs)...);

			// Store the type GUID
			StructTypeGuid = T::StaticTypeGuid();
			
			// Store a destructor function to destroy the object when we're done with it
			DestructObjectFunc = [](uint8* Memory) { reinterpret_cast<T*>(Memory)->~T(); };
		}
		
		void Reset()
		{
			if (StructMemory)
			{
				DestructObjectFunc(StructMemory);
				FMemory::Free(StructMemory);
				StructMemory = nullptr;
				StructTypeGuid.Invalidate();
				DestructObjectFunc.Reset();
			}
		};
		
		// Creates a new FRealtimeMeshFactoryParams from templated struct type.
		template<typename T>
		static FRealtimeMeshFactoryParams Make()
		{
			FRealtimeMeshFactoryParams Params;
			Params.InitializeAs<T>();
			return Params;
		}

		// Creates a new FRealtimeMeshFactoryParams from templated struct.
		template<typename T>
		static FRealtimeMeshFactoryParams Make(const T& Struct)
		{
			FRealtimeMeshFactoryParams Params;
			Params.InitializeAs<T>(Struct);
			return Params;
		}

		// Creates a new FRealtimeMeshFactoryParams from the templated type and forward all arguments to constructor.
		template<typename T, typename... TArgs>
		static FRealtimeMeshFactoryParams Make(TArgs&&... InArgs)
		{
			FRealtimeMeshFactoryParams InstancedStruct;
			InstancedStruct.InitializeAs<T>(Forward<TArgs>(InArgs)...);
			return InstancedStruct;
		}

		// Checks if this contains any data
		bool IsValid() const { return StructMemory != nullptr; }
		
		// Checks if the type of the data contained is of type
		template<typename T>
		bool IsA() const { return StructTypeGuid == T::StaticTypeGuid(); }

		// Returns const pointer to the struct, or nullptr if cast is not valid.
		template<typename T>
		const T* GetPtr() const
		{
			check(IsA<T>());
			check(StructMemory != nullptr);

			return reinterpret_cast<const T*>(StructMemory);
		}
		
		// Returns pointer to the struct, or nullptr if cast is not valid.
		template<typename T>
		T* GetPtr()
		{
			check(IsA<T>());
			check(StructMemory != nullptr);

			return reinterpret_cast<T*>(StructMemory);
		}

		// Returns const reference to the struct, this getter assumes that all data is valid.
		template<typename T>
		const T& Get() const
		{
			return *GetPtr<T>();
		}

		// Returns reference to the struct, this getter assumes that all data is valid.
		template<typename T>
		T& Get()
		{
			return *GetPtr<T>();
		}
	};*/

	struct FRealtimeMeshFactoryInitializationParams
	{
	private:
		FInstancedStruct ExtraParams;
		FString BaseName;
		
		FRealtimeMeshFactoryInitializationParams(FInstancedStruct&& InParams, const FString& InBaseName)
			: ExtraParams(MoveTemp(InParams)), BaseName(InBaseName) { }
		
	public:
		FRealtimeMeshFactoryInitializationParams() = default;
		~FRealtimeMeshFactoryInitializationParams() = default;
		
		template<typename ParamType>
		static TSharedRef<FRealtimeMeshFactoryInitializationParams> Make(const FString& InBaseName, const ParamType& InExtraParams)
		{
			return MakeShareable(new FRealtimeMeshFactoryInitializationParams(FInstancedStruct::Make(InExtraParams),  InBaseName));
		}
		
		static TSharedRef<FRealtimeMeshFactoryInitializationParams> Make(const FString& InBaseName)
		{
			return MakeShareable(new FRealtimeMeshFactoryInitializationParams(FInstancedStruct(),  InBaseName));
		}

		const FString& GetBaseName() const { return BaseName; }

		bool HasExtraParams() const { return ExtraParams.IsValid(); }
		
		template<typename T>
		const T& Get() const
		{
			return ExtraParams.Get<T>();
		}
		
		template <typename T>
		bool IsExtraParamsOfType() const { return ExtraParams.GetScriptStruct() == T::StaticStruct(); }
	};

	struct FRealtimeMeshInitializationResult
	{
		FString ComponentName;
		bool bIsValid;

		FRealtimeMeshInitializationResult() : bIsValid(false) { }
		FRealtimeMeshInitializationResult(const FString& InComponentName) : ComponentName(InComponentName), bIsValid(true) { }
	};
	

	struct FRealtimeMeshLODStructure
	{
		TSet<FRealtimeMeshSectionGroupKey> SectionGroups;

		FRealtimeMeshLODConfig Config;
	};

	struct FRealtimeMeshStructure
	{	
		TFixedLODArray<FRealtimeMeshLODStructure> LODs;

		FRealtimeMeshConfig Config;
	};

	struct FRealtimeMeshSectionGroupData
	{
		FRealtimeMeshStreamSet Streams;

		TMap<FRealtimeMeshSectionKey, FRealtimeMeshSectionConfig> SectionConfigs;
		TMap<FRealtimeMeshSectionKey, FRealtimeMeshStreamRange> SectionRanges;

		TArray<UMaterialInterface*> Materials;

		ERealtimeMeshSectionDrawType DrawType;

		bool bReplaceAllExistingStreams;
		bool bReplaceAllExistingSections;
		bool bAutoCreatePolygroupSections;

		FRealtimeMeshSectionGroupData()
			: DrawType(ERealtimeMeshSectionDrawType::Static)
			, bReplaceAllExistingStreams(true)
			, bReplaceAllExistingSections(true)
			, bAutoCreatePolygroupSections(true)
		{
			
		}
	};

	
	struct FRealtimeMeshDirtyFlags
	{
	private:
		TSet<FRealtimeMeshSectionGroupKey> DirtySectionGroups;
		TSet<FRealtimeMeshLODKey> DirtyLODs;
		uint32 bStructureDirty : 1;
		uint32 bNaniteDataDirty : 1;
		uint32 bBoundsDirty : 1;
		uint32 bCollisionDirty : 1;
		uint32 bMeshNotValid : 1;

	public:
		FRealtimeMeshDirtyFlags()
			: bStructureDirty(false)
			, bNaniteDataDirty(false)
			, bBoundsDirty(false)
			, bCollisionDirty(false)
			, bMeshNotValid(false)
		{
		}

		FRealtimeMeshDirtyFlags operator|(const FRealtimeMeshDirtyFlags& Other) const
		{
			FRealtimeMeshDirtyFlags Result;
			Result.DirtySectionGroups = DirtySectionGroups.Union(Other.DirtySectionGroups);
			Result.DirtyLODs = DirtyLODs.Union(Other.DirtyLODs);
			Result.bStructureDirty = bStructureDirty || Other.bStructureDirty;
			Result.bNaniteDataDirty = bNaniteDataDirty || Other.bNaniteDataDirty;
			Result.bBoundsDirty = bBoundsDirty || Other.bBoundsDirty;
			Result.bCollisionDirty = bCollisionDirty || Other.bCollisionDirty;
			Result.DirtySectionGroups = DirtySectionGroups;
			Result.bMeshNotValid = Other.bMeshNotValid;
			return Result;
		}

		static FRealtimeMeshDirtyFlags MeshNotValid()
		{
			FRealtimeMeshDirtyFlags Result;
			Result.bMeshNotValid = true;
			return Result;
		}

		static FRealtimeMeshDirtyFlags AllDirty(bool bMarkCollision = true)
		{
			FRealtimeMeshDirtyFlags Result;
			Result.bStructureDirty = true;
			Result.bNaniteDataDirty = true;
			Result.bBoundsDirty = true;
			Result.bCollisionDirty = bMarkCollision;
			return Result;
		}

		bool IsMeshInvalid() const { return bMeshNotValid; }
		bool IsStructureDirty() const { return bStructureDirty; }
		bool IsBoundsDirty() const { return bBoundsDirty; }
		bool IsNaniteDataDirty() const { return bNaniteDataDirty;}
		bool IsCollisionDirty() const { return bCollisionDirty; }
		bool IsSectionGroupDirty(const FRealtimeMeshSectionGroupKey& SectionGroupKey) const
		{
			return bStructureDirty || DirtyLODs.Contains(SectionGroupKey.LOD()) || DirtySectionGroups.Contains(SectionGroupKey);
		}
		bool IsAnyRenderDataDirty() const
		{
			return bStructureDirty || !DirtyLODs.IsEmpty() || !DirtySectionGroups.IsEmpty();
		}

		bool IsAnyDirty() const { return bStructureDirty || bBoundsDirty || bCollisionDirty || !DirtyLODs.IsEmpty() || !DirtySectionGroups.IsEmpty(); }

		// Implement setters here
		void MarkMeshNotValid()
		{
			DirtySectionGroups.Empty();
			DirtyLODs.Empty();
			bStructureDirty = false;
			bBoundsDirty = false;
			bCollisionDirty = false;
			bMeshNotValid = false;
			
			bMeshNotValid = true;			
		}
		void MarkStructureDirty() { check(!bMeshNotValid); bStructureDirty = true; }
		void MarkNaniteDataDirty() { check(!bMeshNotValid); bNaniteDataDirty = true; }
		void MarkBoundsDirty() { check(!bMeshNotValid); bBoundsDirty = true; }
		void MarkCollisionDirty() { check(!bMeshNotValid); bCollisionDirty = true; }
		void MarkSectionGroupDirty(const FRealtimeMeshSectionGroupKey& SectionGroupKey) { check(!bMeshNotValid); DirtySectionGroups.Add(SectionGroupKey); }
		void MarkLODDirty(const FRealtimeMeshLODKey& LOD) { check(!bMeshNotValid); DirtyLODs.Add(LOD); }
		void MarkAllLODsDirty()
		{
			check(!bMeshNotValid); 
			for (int32 Index = 0; Index < REALTIME_MESH_MAX_LODS; Index++)
			{
				MarkLODDirty(Index);
			}
		}
	};


	

	struct FRealtimeMeshFactoryPreUpdateResult
	{
	private:
		FInstancedStruct ExtraParams;
		FRealtimeMeshDirtyFlags DirtyFlags;
		
		FRealtimeMeshFactoryPreUpdateResult(FInstancedStruct&& InParams, FRealtimeMeshDirtyFlags InDirtyFlags)
			: ExtraParams(MoveTemp(InParams)), DirtyFlags(InDirtyFlags) { }
		
	public:
		FRealtimeMeshFactoryPreUpdateResult() = default;
		~FRealtimeMeshFactoryPreUpdateResult() = default;
		
		static TSharedRef<FRealtimeMeshFactoryPreUpdateResult> Make(FRealtimeMeshDirtyFlags&& InDirtyFlags)
		{			
			return MakeShareable(new FRealtimeMeshFactoryPreUpdateResult(FInstancedStruct(), MoveTemp(InDirtyFlags)));
		}
		
		static TSharedRef<FRealtimeMeshFactoryPreUpdateResult> Make(const FRealtimeMeshDirtyFlags& InDirtyFlags)
		{			
			FRealtimeMeshDirtyFlags Temp = InDirtyFlags;
			return Make(MoveTemp(Temp));
		}
		
		template<typename ParamType, typename... TArgs>
		static TSharedRef<FRealtimeMeshFactoryPreUpdateResult> Make(FRealtimeMeshDirtyFlags&& InDirtyFlags, TArgs&&... InArgs)
		{
			return MakeShareable(new FRealtimeMeshFactoryPreUpdateResult(FInstancedStruct::Make<ParamType>(Forward<TArgs>(InArgs)...), InDirtyFlags));
		}
		
		template<typename ParamType, typename... TArgs>
		static TSharedRef<FRealtimeMeshFactoryPreUpdateResult> Make(const FRealtimeMeshDirtyFlags& InDirtyFlags, TArgs&&... InArgs)
		{
			FRealtimeMeshDirtyFlags Temp = InDirtyFlags;
			return Make<ParamType>(MoveTemp(Temp), Forward<TArgs>(InArgs)...);
		}

		const FRealtimeMeshDirtyFlags& GetDirtyFlags() const { return DirtyFlags; }


		bool HasExtraParams() const { return ExtraParams.IsValid(); }
		
		template<typename T>
		const T& Get() const
		{
			return ExtraParams.Get<T>();
		}
		
		template <typename T>
		bool IsExtraParamsOfType() const { return ExtraParams.GetScriptStruct() == T::StaticStruct(); }
		
	};
}
