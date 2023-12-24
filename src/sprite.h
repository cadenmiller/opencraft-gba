#ifndef OPENCRAFT_GBA_SPRITE_H
#define OPENCRAFT_GBA_SPRITE_H

#include "vector.h"

namespace opencraft {

struct sprite
{
    vector2 position;
    uint16_t rotation;
};

} /* namespace opencraft */

#endif /* OPENCRAFT_GBA_SPRITE_H */