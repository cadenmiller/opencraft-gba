#ifndef OPENCRAFT_GBA_VOXEL_H
#define OPENCRAFT_GBA_VOXEL_H

#include <stdint.h>

struct voxel_t
{
    uint8_t type : 7;   /* 127 types of blocks */
    uint8_t light : 3;  /* 8 light brightness states*/
    uint8_t color_r : 2; /* 4 red states */
    uint8_t color_g : 2; /* 4 green states */
    uint8_t color_b : 2; /* 4 blue states */
};

#endif /* OPENCRAFT_GBA_VOXEL_H */