#ifndef OPENCRAFT_GBA_CHUNK_H
#define OPENCRAFT_GBA_CHUNK_H

#include "voxel.h"
#include "vector.h"
 
namespace opencraft {

const int ChunkWidth = 16;
const int ChunkWidthSquared = (ChunkWidth * ChunkWidth);

struct chunk
{
    vector2     position;
    bool        isDirty;
    voxel       data[ChunkWidthSquared];
} chunk;

} /* namespace opencraft */

#endif /* OPENCRAFT_GBA_CHUNK_H */