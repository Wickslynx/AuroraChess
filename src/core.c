#include <stdio.h>
#include <stdint.h>
#include "core.h"

typedef uint64_t U64;

// Bitboards for white pieces
U64 white_pawns = 0x000000000000FF00;
U64 white_rooks = 0x0000000000000081;
U64 white_knights = 0x0000000000000042;
U64 white_bishops = 0x0000000000000024;
U64 white_queen = 0x0000000000000008;
U64 white_king = 0x0000000000000010;

// Bitboards for black pieces
U64 black_pawns = 0x00FF000000000000;
U64 black_rooks = 0x8100000000000000;
U64 black_knights = 0x4200000000000000;
U64 black_bishops = 0x2400000000000000;
U64 black_queen = 0x0800000000000000;
U64 black_king = 0x1000000000000000;

