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

	//Check if move is possible
	bool is_move_possible = false;

	if (newX != PositionX)
	{
		return CheckHorizontal(PositionX, PositionY, newX);  //return value returned by method CheckHorizontal
	}
	if (newY != PositionY)
	{
		return CheckVertical(PositionX, PositionY, newY);	//return value returned by method CheckVertical
	}

	return CheckDiagonal(PositionX, PositionY, newX, newY);


	return is_move_possible; //retrun flag after validation of the move
}