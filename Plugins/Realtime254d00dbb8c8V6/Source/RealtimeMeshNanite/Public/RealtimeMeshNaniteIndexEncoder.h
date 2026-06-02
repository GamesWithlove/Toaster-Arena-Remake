// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"


namespace RealtimeMesh::Nanite
{    
    struct FRealtimeMeshNaniteEncodedIndices
    {
        TArray<uint8> FinalVertices;
        TArray<uint8> FinalIndices;
        
        TArray<uint8> PackedIndexData;
        uint32 Bitmasks[4][3]; //Bitmask.x: bIsStart, Bitmask.y: bIsLeft, Bitmask.z: bIsNewVertex
        uint32 NumPrevRefVerticesBeforeDwords;
        uint32 NumPrevNewVerticesBeforeDwords;


        FRealtimeMeshNaniteEncodedIndices()
        {
            FMemory::Memzero(&Bitmasks, sizeof(uint32[4][3]));
            NumPrevRefVerticesBeforeDwords = 0;
            NumPrevNewVerticesBeforeDwords = 0;
        }
    };


    REALTIMEMESHNANITE_API FRealtimeMeshNaniteEncodedIndices RealtimeMeshEncodeIndices(const TArray<uint8>& InputTriangles);
}