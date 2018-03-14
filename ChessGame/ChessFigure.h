#pragma once
#include <iostream>
#include <string> 
#include <stdlib.h>
#include "ChessBoard.h"


using std::string;

#ifndef ChessFigure_h
#define ChessFigure_h
 class ChessFigure 
{
public:
	ChessFigure();
	~ChessFigure();
//protected:
	string Color;
	bool Status;//live or dead
	int Value; //wartoœæ figury (potrzebna przy zmianie i obliczaniu winRatio
	int PositionX; // 
	int PositionY;
	int NewPosiionX;
	int NewPositionY;
	ChessFigure** figures = new ChessFigure*[32];

	bool IsSelected(int);
	int WhereToMove(int,int); // Wprowadzane nowe wartosci x,y
	std::string GetColor(int,int);
	void CreateFigures();
	//int	 CreatePawns(int);
	bool GetFigure(int, int);


	
};

#endif