#pragma once
#ifndef Queeen_h
#define Queeen_h
#include "ChessFigure.h"
#include "ChessBoard.h"
#include "UnbelievableChessgame1.h"

class Queeen : public ChessFigure
{
public:
	Queeen(string, bool, int, int);
	~Queeen();

	bool IsMovePossible(int, int);		// validation of movement  ------->maybe highlit possible ways of selected figure?
};

#endif