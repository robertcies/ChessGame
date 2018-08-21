#include "Game.h"
#include "Player.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <cstdlib>
#define NULL 0

Game::Game()
{


}

Game::~Game()
{
}

void Game::ManageGame()
{
	CreatePlayer();
	GoWithGame();
}


void Game::CreatePlayer()
{
	string name;
	string color;

	Player player();
	for (int i = 1; i <= 2; i++)
	{
		std::cout << "Please provide Name for Player " << i;
		if (i == 1)
			color = "white";
		else
			color = "black";
	std::cin >> name;
	system("cls");
	
	Player player(name,color);
	}
}

void Game::GoWithGame()
{
	string input1,input2;
	bool stopGame = false;
	string movement;

	std::cout<<"Figure from which place would you like to move?";
	std::cin >> input1;
	system("cls");
	std::cout << "Where do you want to move this figure?";
	std::cin >> input2;
	MoveFigure(std::stoi(FirstFromInput(input1)), std::stoi(SecondFromInput(input1)), (std::stoi(FirstFromInput(input2))), std::stoi(SecondFromInput(input2)));


}

string Game::FirstFromInput(string input)
{
	if (input.substr(0, 1) == "a" || input.substr(0, 1) == "A")
		return  "0";
	if (input.substr(0, 1) == "b" || input.substr(0, 1) == "B")
		return  "1";
	if (input.substr(0, 1) == "c" || input.substr(0, 1) == "C")
		return  "2";
	if (input.substr(0, 1) == "d" || input.substr(0, 1) == "D")
		return  "3";
	if (input.substr(0, 1) == "e" || input.substr(0, 1) == "E")
		return  "4";
	if (input.substr(0, 1) == "f" || input.substr(0, 1) == "F")
		return  "5";
	if (input.substr(0, 1) == "g" || input.substr(0, 1) == "G")
		return  "6";
	if (input.substr(0, 1) == "h" || input.substr(0, 1) == "H")
		return  "7";
	else
		std::cout << "Invalid input, try again";
		return "wrong";
}

string Game::SecondFromInput(string input)
{
	if (input.substr(1, 2) == "1")
		return  "0";
	if (input.substr(1, 2) == "2")
		return  "1";
	if (input.substr(1, 2) == "3")
		return  "2";
	if (input.substr(1, 2) == "4")
		return  "3";
	if (input.substr(1, 2) == "5")
		return  "4";
	if (input.substr(1, 2) == "6")
		return  "5";
	if (input.substr(1, 2) == "7")
		return  "6";
	if (input.substr(1, 2) == "8")
		return  "7";
	else
		std::cout << "Invalid input, try again";
		return "wrong";
}

void Game::MoveFigure(int startPosX, int startPosY, int endPosX, int endPosY)
{
	ChessFigure figure;
	
	for (int i = 0; i < 32; i++) ////// WARTOSC DYNAMICZNA - NIE 32
	{
		if (figure.figures[i]->PositionX == startPosX && figure.figures[i]->PositionY == startPosY)
		{
			if (figure.figures[i])
			{
				figure.figures[i]->PositionX = endPosX;
				figure.figures[i]->PositionY = endPosY;
			}
		}
	}

}