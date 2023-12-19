#ifndef OPENCRAFT_GBA_GENERATOR_H
#define OPENCRAFT_GBA_GENERATOR_H

#include "chunk.h"

void chunk_compute_caves(chunk_t* chunk);
void chunk_compute_lighting(chunk_t* chunk);
void chunk_compute_fauna(chunk_t* chunk);

void chunk_generate(chunk_t* chunk);

#endif /* OPENCRAFT_GBA_GENERATOR_H */