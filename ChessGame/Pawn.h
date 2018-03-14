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

	void Upgrade(int);
	bool double_move;
	bool IsMovePossible(int,int);

};

#endif#pragma once
