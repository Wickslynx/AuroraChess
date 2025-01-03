#ifndef CORE_H
#define CORE_H

#include <stdio.h>
#include <stdint.h>

void init_board();

// Bitboards for all pieces.
U64 white_pawns, white_rooks, white_knights, white_bishops, white_queen, white_king;
U64 black_pawns, black_rooks, black_knights, black_bishops, black_queen, black_king;

#endif
