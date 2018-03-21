#include "King.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <string> 
#include <stdlib.h>


extern ChessBoard board; //object board is declared in main.cpp ->is is needed here in IsMovePossible function (extern informs compiler about that)

King::King(string col, bool stat, int posx, int posy)
{
	Color = col;
	Status = stat;
	Value = 60;
	PositionX = posx;
	PositionY = posy;
}

King::~King()
{
}

bool King::IsMovePossible(int newX, int newY)	// information from on-click method???
{
	/*
	int move;
	//Check if move is possible
	bool is_move_possible = false;

	move = 1;

	// move up on board
	if (newY == PositionY - move)
	{
		//move right
		if (newX == PositionX + move1 && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			return is_move_possible = true;
		}
		//move left
		if (newX == PositionX - move1 && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			return is_move_possible = true;
		}
	}
	// move right on board
	if (newX == PositionX + move2)
	{
		//move up
		if (newY == PositionY - move1 && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			return is_move_possible = true;
		}
		//move down
		if (newY == PositionY + move1 && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			return is_move_possible = true;
		}
	}
	// move down on board
	if (newY == PositionY + move2)
	{
		//move right
		if (newX == PositionX + move1 && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			return is_move_possible = true;
		}
		//move left
		if (newX == PositionX - move1 && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			return is_move_possible = true;
		}
	}
	// move left on board
	if (newX == PositionX - move2)
	{
		//move up
		if (newY == PositionY - move1 && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			return is_move_possible = true;
		}
		//move down
		if (newY == PositionY + move1 && GetFigure(newX, newY) == false && GetColor(newX, newY) != this->Color)
		{
			return is_move_possible = true;
		}
	}
	*/
	return false;
}

bool King::IsChecked()	// information from ??????????
{
	return false;
}