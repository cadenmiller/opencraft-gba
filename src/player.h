#pragma once

#include "sprite.h"

namespace opencraft {

const int MaxPlayers = 4;

struct player : public sprite
{
    char name[20];
};

} /* namespace opencraft */
