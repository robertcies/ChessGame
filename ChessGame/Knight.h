#pragma once
#ifndef Knight_h
#define Knight_h
#include "ChessFigure.h"
#include "ChessBoard.h"
#include "UnbelievableChessgame1.h"

class Knight : public ChessFigure
{
public:
	Knight(string, bool, int, int);
	~Knight();

	bool IsMovePossible(int, int);		// validation of movement  ------->maybe highlit possible ways of selected figure?

};

#endif