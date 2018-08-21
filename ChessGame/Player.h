#pragma once
#include "ChessFigure.h"
#include "ChessBoard.h"
#include <iostream>
#include<string>
#include <stdlib.h>


#ifndef Player_h
#define Player_h

class Player
{
public:
	Player(string,string);
	~Player();

	string playerName;
	string color;
	long winRatio;

};

#endif

