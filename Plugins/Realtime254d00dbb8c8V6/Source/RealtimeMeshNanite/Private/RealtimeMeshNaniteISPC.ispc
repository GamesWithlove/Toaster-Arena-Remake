// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

// ISPC kernels for RealtimeMeshNanite cluster building optimization

// Suppress performance warnings - gather operations are expected for indexed mesh data
#pragma ignore warning(perf)
    
// MaxEdgeLength calculation for a single cluster - vectorized across triangles
export uniform float CalculateMaxEdgeLengthSquaredSingle(
    const uniform float Positions[],      // Flat array: [x0,y0,z0, x1,y1,z1, ...] (FVector3f layout)
    const uniform unsigned int8 Indices[],        // Triangle indices (uint8 from TArray<uint8>)
    const uniform int32 NumTriangles)
{
    float maxEdgeSq = 0.0f;

    // Process triangles in parallel across SIMD lanes
    foreach(tri = 0 ... NumTriangles)
    {
        const int base = tri * 3;
        const int i0 = Indices[base + 0];
        const int i1 = Indices[base + 1];
        const int i2 = Indices[base + 2];

        // Load vertices (FVector3f is 3 floats: x,y,z)
        const float ax = Positions[i0 * 3 + 0];
        const float ay = Positions[i0 * 3 + 1];
        const float az = Positions[i0 * 3 + 2];

        const float bx = Positions[i1 * 3 + 0];
        const float by = Positions[i1 * 3 + 1];
        const float bz = Positions[i1 * 3 + 2];

        const float cx = Positions[i2 * 3 + 0];
        const float cy = Positions[i2 * 3 + 1];
        const float cz = Positions[i2 * 3 + 2];

        // Edge AB squared length
        float dx = bx - ax, dy = by - ay, dz = bz - az;
        float edgeSq = dx*dx + dy*dy + dz*dz;
        maxEdgeSq = max(maxEdgeSq, edgeSq);

        // Edge BC squared length
        dx = cx - bx; dy = cy - by; dz = cz - bz;
        edgeSq = dx*dx + dy*dy + dz*dz;
        maxEdgeSq = max(maxEdgeSq, edgeSq);

        // Edge CA squared length
        dx = ax - cx; dy = ay - cy; dz = az - cz;
        edgeSq = dx*dx + dy*dy + dz*dz;
        maxEdgeSq = max(maxEdgeSq, edgeSq);
    }

    // Reduce max across all SIMD lanes
    return reduce_max(maxEdgeSq);
}

// Color bounds - find min/max RGBA across all vertices
export void CalculateColorBounds(
    uniform unsigned int8 OutMinRGBA[],
    uniform unsigned int8 OutMaxRGBA[],
    const uniform unsigned int8 Colors[],  // BGRA interleaved (FColor layout)
    const uniform int32 NumColors)
{
    // Use int32 for SIMD operations (reduce_min/max don't support uint8)
    int32 minB = 255, minG = 255, minR = 255, minA = 255;
    int32 maxB = 0, maxG = 0, maxR = 0, maxA = 0;

    foreach(i = 0 ... NumColors)
    {
        const int base = i * 4;
        const int32 b = Colors[base + 0];
        const int32 g = Colors[base + 1];
        const int32 r = Colors[base + 2];
        const int32 a = Colors[base + 3];

        minB = min(minB, b); minG = min(minG, g);
        minR = min(minR, r); minA = min(minA, a);
        maxB = max(maxB, b); maxG = max(maxG, g);
        maxR = max(maxR, r); maxA = max(maxA, a);
    }

    // Reduce across lanes and cast back to uint8
    OutMinRGBA[0] = (unsigned int8)reduce_min(minB); OutMinRGBA[1] = (unsigned int8)reduce_min(minG);
    OutMinRGBA[2] = (unsigned int8)reduce_min(minR); OutMinRGBA[3] = (unsigned int8)reduce_min(minA);
    OutMaxRGBA[0] = (unsigned int8)reduce_max(maxB); OutMaxRGBA[1] = (unsigned int8)reduce_max(maxG);
    OutMaxRGBA[2] = (unsigned int8)reduce_max(maxR); OutMaxRGBA[3] = (unsigned int8)reduce_max(maxA);
}

// Position bounds - find AABB
export void CalculatePositionBounds(
    uniform float OutMin[],
    uniform float OutMax[],
    const uniform float Positions[],
    const uniform int32 NumVertices)
{
    float minX = 1e30f, minY = 1e30f, minZ = 1e30f;
    float maxX = -1e30f, maxY = -1e30f, maxZ = -1e30f;

    foreach(i = 0 ... NumVertices)
    {
        const int base = i * 3;
        const float x = Positions[base + 0];
        const float y = Positions[base + 1];
        const float z = Positions[base + 2];

        minX = min(minX, x); minY = min(minY, y); minZ = min(minZ, z);
        maxX = max(maxX, x); maxY = max(maxY, y); maxZ = max(maxZ, z);
    }

    // Reduce across lanes
    OutMin[0] = reduce_min(minX); OutMin[1] = reduce_min(minY); OutMin[2] = reduce_min(minZ);
    OutMax[0] = reduce_max(maxX); OutMax[1] = reduce_max(maxY); OutMax[2] = reduce_max(maxZ);
}
