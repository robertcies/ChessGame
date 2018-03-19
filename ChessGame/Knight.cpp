#include "Knight.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <string> 
#include <stdlib.h>


extern ChessBoard board; //object board is declared in main.cpp ->is is needed here in IsMovePossible function (extern informs compiler about that)

Knight::Knight(string col, bool stat, int posx, int posy)
{
	Color = col;
	Status = stat;
	Value = 60;
	PositionX = posx;
	PositionY = posy;
}

Knight::~Knight()
{
}

bool Knight::IsMovePossible(int newX, int newY)	// information from on-click method???
{/*
 
	int move1;
	int move2;
	//Check if move is possible
	bool is_move_possible = false;

		move1 = 2;
		move2 = 1;


	// 1 square forward
	if (newY == PositionY + move1 && newX == PositionX && GetFigure(newX, newY) == false)
	{
		is_move_possible = true;
	}

	// 2 squares forward (only fisrt move of specific pawn)
	else if (newY == (PositionY + move2) && newX == PositionX && GetFigure(newX, newY) == false)
	{
		is_move_possible = true;
	}

	// Diagonal left or right(only attack)
	else if (newY == PositionY + move1 && (newX == PositionX - 1 || newX == PositionX + 1))
	{
		// Check if there is a opposite color piece in the diagonal position
		if (GetFigure(newX, newY) != false && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			is_move_possible = true;
		}
	}
	return is_move_possible; //retrun flag after validation of the move

	*/
	return true;
}