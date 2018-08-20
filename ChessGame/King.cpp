#include "King.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <string> 
#include <stdlib.h>


extern ChessBoard board; //object board is declared in main.cpp ->is is needed here in IsMovePossible function (extern informs compiler about that)

King::King(string col, bool stat, int posx, int posy, string nickname)
{
	Color = col;
	Status = stat;
	Nickname = nickname;
	Value = 100;
	PositionX = posx;
	PositionY = posy;
}

King::~King()
{
}

bool King::IsMovePossible(int newX, int newY)	// information from on-click method???
{

	//Check if move is possible
	bool is_move_possible = false;

	if (newX - PositionX == 1) // right side
	{
		if (newY - PositionY == 1 && GetFigure(newX, newY) == false) //top 
		{
			is_move_possible = true;
		}
		if (newY - PositionY == 0 && GetFigure(newX, newY) == false) //middle
		{
			is_move_possible = true;
		}
		if (newY - PositionY == -1 && GetFigure(newX, newY) == false) //bottom
		{
			is_move_possible = true;
		}
	}
	if (newX - PositionX == 0) // central
	{
		if (newY - PositionY == -1 && GetFigure(newX, newY) == false) //top
		{
			is_move_possible = true;
		}
		if (newY - PositionY == 1 && GetFigure(newX, newY) == false) //bottom
		{
			is_move_possible = true;
		}
	}
	if (newX - PositionX == -1) // left side
	{
		if (newY - PositionY == 1 && GetFigure(newX, newY) == false) //top
		{
			is_move_possible = true;
		}
		if (newY - PositionY == 0 && GetFigure(newX, newY) == false) // middle
		{
			is_move_possible = true;
		}
		if (newY - PositionY == -1 && GetFigure(newX, newY) == false) // bottom
		{
			is_move_possible = true;
		}
	}
		
	return is_move_possible; //retrun flag after validation of the move
}