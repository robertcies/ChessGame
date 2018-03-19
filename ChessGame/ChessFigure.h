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

	bool IsSelected(int);		// Is Figure selected? (clicked with mouse) If selected then player can not select any other figure
	int WhereToMove(int,int); // Provide values x,y
	std::string GetColor(int,int);	//get color of figure on the x,y square
	void CreateFigures();		// Create figures (begining of the game)
	bool GetFigure(int, int);	//get figure on the x,y square ---------------->eventually delete this figure?/??????????????
	
	bool CheckVertical(int, int, int);
	bool CheckHorizontal(int, int, int);
	bool CheckDiagonal(int, int, int,int);


	//Czy IsMovePossible nie powinno byæ tutaj, w ChessFigure?
	
};

#endif