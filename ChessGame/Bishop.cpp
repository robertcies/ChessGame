#include "Bishop.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <string> 
#include <stdlib.h>


extern ChessBoard board; //object board is declared in main.cpp ->is is needed here in IsMovePossible function (extern informs compiler about that)

Bishop::Bishop(string col, bool stat, int posx, int posy, string nickname)
{
	Color = col;
	Status = stat;
	Nickname = nickname;
	Value = 60;
	PositionX = posx;
	PositionY = posy;
}

Bishop::~Bishop()
{
}

bool Bishop::IsMovePossible(int newX, int newY)	// information from on-click method???
{
	return CheckDiagonal(PositionX, PositionY, newX, newY);
}