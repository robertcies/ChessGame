#include "Queeen.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <string> 
#include <stdlib.h>


extern ChessBoard board; //object board is declared in main.cpp ->is is needed here in IsMovePossible function (extern informs compiler about that)

Queeen::Queeen(string col, bool stat, int posx, int posy)
{
	Color = col;
	Status = stat;
	Value = 120;
	PositionX = posx;
	PositionY = posy;
}

Queeen::~Queeen()
{
}

bool Queeen::IsMovePossible(int newX, int newY)	// information from on-click method???
{


	if (newX != PositionX && newY == PositionY)
	{
		return CheckHorizontal(PositionX, newX, PositionY, newY);  //return value returned by method CheckHorizontal
	}
	if (newY != PositionY && newX == PositionX)
	{
		return CheckVertical(PositionX, newX, PositionY, newY);	//return value returned by method CheckVertical
	}	
	if (PositionX != newX && PositionY != newY)
	{
		return CheckDiagonal(PositionX, PositionY, newX, newY);
	}

	return false;
}