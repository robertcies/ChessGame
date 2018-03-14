#include "ChessFigure.h"
#include "Pawn.h"
#include <iostream>
#include <string> 
#include <stdlib.h>

ChessFigure::ChessFigure()
{

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
/*
int ChessFigure::CreatePawns(int i)
{
	Pawn pion1("white", true, 1, 0);
	return 0;
}
*/

void ChessFigure::CreateFigures()
{
	//figures jest wskaünikiem na wskaünik do elementu tablicy 32 elementowej
	for (int i = 0; i < 8; i++)
	{
		figures[i] = new Pawn("black",true,1,i); //przypisanie pamiÍci do kaødej komÛrki 32 elementowej		
	}
	for (int i = 8; i < 16; i++)
	{
		figures[i] = new Pawn("white", true, 7, i); //przypisanie pamiÍci do kaødej komÛrki 32 elementowej		
	}
	// + dorobic reszte figur
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