#pragma once
#ifndef Rook_h
#define Rook_h
#include "ChessFigure.h"
#include "ChessBoard.h"
#include "UnbelievableChessgame1.h"

class Rook : public ChessFigure
{
public:
	Rook(string, bool, int, int);
	~Rook();

	bool IsMovePossible(int, int);		// validation of movement  ------->maybe highlit possible ways of selected figure?

};

#endif