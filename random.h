#ifndef RANDOM_H
#define RANDOM_H

// Linear Congruential Generator parameters
#define A 1664525
#define C 1013904223
#define M 4294967296 // 2^32

// Initialize the seed
void init_random(uint new_seed);

// Generate a random number in the range [0, n]
uint getrandom(uint n);


#endif
