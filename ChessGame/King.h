#pragma once
#ifndef King_h
#define King_h
#include "ChessFigure.h"
#include "ChessBoard.h"
#include "UnbelievableChessgame1.h"

class King : public ChessFigure
{
public:
	King(string, bool, int, int,string);
	~King();

	bool IsMovePossible(int, int);		// validation of movement  ------->maybe highlit possible ways of selected figure?
};

#endif