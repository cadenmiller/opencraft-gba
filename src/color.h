#include "standard.h"

namespace opencraft {

using color = uint16_t;

inline constexpr color RGB15(uint32_t red, uint32_t green, uint32_t blue)
{
    return ((red) | ((green) << 5) | ((blue) << 10));
} 

} /* namespace opencraft */
