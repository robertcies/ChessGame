#include "Knight.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <string> 
#include <stdlib.h>


extern ChessBoard board; //object board is declared in main.cpp ->is is needed here in IsMovePossible function (extern informs compiler about that)

Knight::Knight(string col, bool stat, int posx, int posy,string nickanme)
{
	Color = col;
	Status = stat;
	Nickname = nickanme;
	Value = 60;
	PositionX = posx;
	PositionY = posy;
}

Knight::~Knight()
{
}

bool Knight::IsMovePossible(int newX, int newY)	// information from on-click method???
{
 
	//Check if move is possible
	bool is_move_possible = false;

	if (newX - PositionX > 0) // right side
	{
		if (newY - PositionY > 0) //1st æwiartka
		{
			if ( abs (newY - PositionY) == 2 && abs (newX - PositionX) == 1 && GetFigure(newX,newY) == false )
			{
				is_move_possible = true;
			}
			if(abs(newY - PositionY) == 1 && abs(newX - PositionX) == 2 && GetFigure(newX, newY) == false)
			{
				is_move_possible = true;
			}
		}			
		if (newY - PositionY < 0) //2nd æwiartka
		{
			if ( abs (newY - PositionY) == 2 && abs (newX - PositionX) == 1 && GetFigure(newX,newY) == false )
			{
				is_move_possible = true;
			}
			if(abs(newY - PositionY) == 1 && abs(newX - PositionX) == 2 && GetFigure(newX, newY) == false)
			{
				is_move_possible = true;
			}
		}	
	}	
	if (newX - PositionX < 0) // left side
	{
		if (newY - PositionY < 0) //3rd æwiartka
		{
			if (abs(newY - PositionY) == 2 && abs(newX - PositionX) == 1 && GetFigure(newX, newY) == false)
			{
				is_move_possible = true;
			}
			if (abs(newY - PositionY) == 1 && abs(newX - PositionX) == 2 && GetFigure(newX, newY) == false)
			{
				is_move_possible = true;
			}
		}
		if (newY - PositionY > 0) //4th æwiartka
		{
			if (abs(newY - PositionY) == 2 && abs(newX - PositionX) == 1 && GetFigure(newX, newY) == false)
			{
				is_move_possible = true;
			}
			if (abs(newY - PositionY) == 1 && abs(newX - PositionX) == 2 && GetFigure(newX, newY) == false)
			{
				is_move_possible = true;
			}
		}
	}
	return is_move_possible; //retrun flag after validation of the move
}