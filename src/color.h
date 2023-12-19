#ifndef OPENCRAFT_GBA_COLOR_H
#define OPENCRAFT_GBA_COLOR_H

#include "standard.h"

#define RGB15(red, green, blue) (uint16_t)((red) | ((green) << 5) | ((blue) << 10))

typedef uint16_t color_t;

#endif /* OPENCRAFT_GBA_COLOR_H */