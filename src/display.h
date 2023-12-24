#pragma once

#include "vector.h"
#include "color.h"

namespace opencraft {

struct display
{
    const vector2 dimensions{240, 160}; /* Gameboy Advance screen dimensions. */

    static void clear(color color);
};

} /* namespace opencraft */
