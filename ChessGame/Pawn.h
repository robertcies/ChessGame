#pragma once
#ifndef Pawn_h
#define Pawn_h
#include "ChessFigure.h"
#include "ChessBoard.h"
#include "UnbelievableChessgame1.h"
//#define BoardWidth
//#define BoardHeight

class Pawn : public ChessFigure
{
public:
	Pawn(string, bool, int, int);
	~Pawn();

	void Upgrade(int);					// upgrade to other figures when pawn reaches end of the board
	bool double_move;					// can be done on the first move of pawn
	bool IsMovePossible(int,int);		// validation of movement  ------->maybe highlit possible ways of selected figure?

};

#endif
