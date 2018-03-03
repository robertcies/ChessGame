#pragma once
#include <iostream>
#include<string>


#ifndef ChessBoard_h
#define ChessBoard_h
//#define BoardWidth
//#define BoardHeight

ref class ChessBoard
{
public:
	ChessBoard();
	static int CreateBoard(int, int);
	int BoardWidth=8;
	int BoardHeight=8;
	//int Board[static][static];
	
};

#endif

