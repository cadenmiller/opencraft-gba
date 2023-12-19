#ifndef OPENCRAFT_GBA_CHUNK_H
#define OPENCRAFT_GBA_CHUNK_H

#include "voxel.h"
#include "vector.h"

#define CHUNK_WIDTH 16
#define CHUNK_WIDTH_SQUARED (CHUNK_WIDTH * CHUNK_WIDTH)

typedef struct chunk_t
{
    vector2_t   position;
    bool        is_dirty;
    voxel_t     data[CHUNK_WIDTH_SQUARED];
} chunk_t;

#endif /* OPENCRAFT_GBA_CHUNK_H */