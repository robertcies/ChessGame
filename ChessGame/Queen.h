#pragma once
#ifndef Queen_h
#define Queen_h
#include "ChessFigure.h"
#include "ChessBoard.h"
#include "UnbelievableChessgame1.h"

class Queen : public ChessFigure
{
public:
	Queen(string, bool, int, int);
	~Queen();

	bool IsMovePossible(int, int);		// validation of movement  ------->maybe highlit possible ways of selected figure?

};

#endif