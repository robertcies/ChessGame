#pragma once
#ifndef Bishop_h
#define Bishop_h
#include "ChessFigure.h"
#include "ChessBoard.h"
#include "UnbelievableChessgame1.h"

class Bishop : public ChessFigure
{
public:
	Bishop(string, bool, int, int);
	~Bishop();

	bool IsMovePossible(int, int);		// validation of movement  ------->maybe highlit possible ways of selected figure?

};

#endif