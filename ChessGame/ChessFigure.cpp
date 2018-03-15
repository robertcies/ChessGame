#include "ChessFigure.h"
#include "Pawn.h"
#include <iostream>
#include <string> 
#include <stdlib.h>

ChessFigure::ChessFigure()
{
	//test
}

ChessFigure::~ChessFigure()
{
}

bool ChessFigure::IsSelected(int)
{
	return 0;
}

int ChessFigure::WhereToMove(int newX,int newY) 
{
	NewPosiionX = newX;
	NewPositionY = newY;
	return 0;
}

void ChessFigure::CreateFigures()
{
	//figures jest wska�nikiem na wska�nik do elementu tablicy 32 elementowej
	for (int i = 0; i < 8; i++)
	{
		figures[i] = new Pawn("black",true,1,i); //przypisanie pami�ci do ka�dej kom�rki 32 elementowej	
		//std::operator<<(std::cout, *figures[i]);
	}
	for (int i = 8; i < 16; i++)
	{
		figures[i] = new Pawn("white", true, 6, i); //przypisanie pami�ci do ka�dej kom�rki 32 elementowej		
	}
	/* #################################################### CLASSES Queen, king etc. need to be implemented first ##########################
	// WHITE
	figures[16] = new Queen("white", true, 7, 3);
	figures[17] = new King("white", true, 7, 4);
	figures[18] = new Bishop("white", true, 7, 5);
	figures[19] = new Bishop("white", true, 7, 2);
	figures[20] = new Rook("white", true, 7, 7);
	figures[21] = new Rook("white", true, 7, 0);
	figures[22] = new Knight("white", true, 7, 1);
	figures[23] = new Knight("white", true, 7, 6);
	//BLACK
	figures[24] = new Queen("black", true, 0, 3);
	figures[25] = new King("black", true, 0, 4);
	figures[26] = new Bishop("black", true, 0, 2);
	figures[27] = new Bishop("black", true, 0, 5);
	figures[28] = new Rook("black", true, 0, 0);
	figures[29] = new Rook("black", true, 0, 7);
	figures[30] = new Knight("black", true, 0, 1);
	figures[31] = new Knight("black", true, 0, 6);
	*/
}
bool ChessFigure::GetFigure(int PosX, int PosY) //check if there is any figure on specific field (check if can move to this field)
													{
	for (int i = 0; i < 32; i++) ////// WARTOSC DYNAMICZNA - NIE 32
	{
		if (figures[i]->PositionX ==PosX && figures[i]->PositionX == PosY)  
		{
			return true;
		}			
	}
	return false;
}

std::string ChessFigure::GetColor(int PosX, int PosY) //check color of this specific figure
{
	for (int i = 0; i < 32; i++) ////// WARTOSC DYNAMICZNA - NIE 32
	{
		if (figures[i]->PositionX == PosX && figures[i]->PositionX == PosY)
		return figures[i]->Color;
	}
	return "NoMatch";
}