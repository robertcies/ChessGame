#include "Pawn.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <string> 
#include <stdlib.h>



extern ChessBoard board; //object board is declared in main.cpp ->is is needed here in IsMovePossible function (extern informs compiler about that)

Pawn::Pawn(string col, bool stat, int posx, int posy)
{
	Color = col;
	Status = stat;
	Value = 10;
	PositionX = posx;
	PositionY = posy;
	double_move = true;
}

Pawn::~Pawn()
{
}

void Pawn::Upgrade(int desired_value) //CHANGE PAWN TO ANY OTHER FIGURE
{
	//Change pawn value to desired value
	//delete pawn and create new object (queen/rook/bishop etc.)
}

bool Pawn::IsMovePossible(int newX, int newY)
{
	int move1;
	int move2;
	//Check if move is possible
	bool is_move_possible = false;
	if (Color == "white")
	{
		move1 = 1;
		move2 = 2;
	}
	else
	{
		move1 = -1;
		move2 = -2;
	}
	
	// 1 square forward
	if (newY == PositionY + move1 && newX == PositionX && GetFigure(newX,newY) == false)
	{
		is_move_possible = true;

		// When true, the pawn will be moved
		// set double_move variable to false -> pawn can double_move only on opening move
		double_move = false;
	}
	
	// 2 squares forward (only fisrt move of specific pawn)
	else if (double_move == true && newY == (PositionY + move2) && newX == PositionX && GetFigure(newX, newY) == false) 
	{
		is_move_possible = true;	
	}

	// Diagonal left or right(only attack)
	else if (newY == PositionY + move1 && (newX == PositionX - 1 || newX == PositionX + 1)) 
	{
		// Check if there is a opposite color piece in the diagonal position
		if (GetFigure(newX,newY) != false && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			is_move_possible = true;
		}
	}
	return is_move_possible; //retrun flag after validation of the move
}


