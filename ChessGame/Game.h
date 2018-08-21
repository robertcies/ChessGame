#pragma once
#include "ChessFigure.h"
#include "ChessBoard.h"
#include <iostream>
#include<string>
#include <stdlib.h>


#ifndef Game_h
#define Game_h

class Game
{
public:
	Game();
	~Game();

	void ManageGame();
	void CreatePlayer();
	void GoWithGame();
	void MoveFigure(int,int, int,int);

	string FirstFromInput(string);
	string SecondFromInput(string);


};

#endif

