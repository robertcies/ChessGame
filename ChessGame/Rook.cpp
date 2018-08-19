#include "Rook.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <string> 
#include <stdlib.h>


extern ChessBoard board; //object board is declared in main.cpp ->is is needed here in IsMovePossible function (extern informs compiler about that)

Rook::Rook(string col, bool stat, int posx, int posy,string nickname)
{
	Color = col;
	Status = stat;
	Nickname = nickname;
	Value = 50;
	PositionX = posx;
	PositionY = posy;
}

Rook::~Rook()
{
}

bool Rook::IsMovePossible(int newX, int newY)	// information from on-click method???
{
	if (newX != PositionX)
	{
		return CheckHorizontal(PositionX, newX, PositionY, newY);  //return value returned by method CheckHorizontal
	}
	if (newY != PositionY)
	{
		return CheckVertical(PositionX, newX, PositionY, newY);	//return value returned by method CheckVertical
	}
}



