#pragma once
#include "ChessFigure.h"
#include <iostream>
#include<string>
#include <stdlib.h>


#ifndef ChessBoard_h
#define ChessBoard_h
//#define BoardWidth
//#define BoardHeight

class ChessBoard
{
public:
	ChessBoard();
	~ChessBoard();

	std::string Board[8][8]; //// NIE POWINNO BYC typ CHessFigure???
	int BoardWidth = 8;
	int BoardHeight = 8;

	void CreateBoard();
	void UpdateBoard();


};

#endif

