#include "types.h"
#include "defs.h"

// Linear Congruential Generator parameters
#define A 1664525
#define C 1013904223
#define M 4294967296 // 2^32

static uint seed = 0; // Seed for LCG

// Initialize the seed
void init_random(uint new_seed) {
    seed = new_seed;
}

// Generate a random number in the range [0, n]
uint random_in_range(uint n) {
    seed = (A * seed + C) % M; // Update the seed using LCG
    return seed % (n + 1); // Return a number in the range [0, n]
}
