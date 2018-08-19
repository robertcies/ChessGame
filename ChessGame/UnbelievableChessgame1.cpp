#include "UnbelievableChessgame1.h"
#include "ChessBoard.h"
#include "ChessFigure.h"
#include "Pawn.h"

#include <iostream>
#include<string>
using namespace System;
using namespace System::Windows::Forms;

//ChessFigure figure;
ChessBoard board; //Global variable


[STAThread]



void main(array<String^>^ args)
{
	/*
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ChessGame::UnbelievableChessgame form;
	Application::Run(%form);// ##################################### ODPALA WINDOWS FORM #######
	//void DrawRectangleInt(PaintEventArgs^ e);
	ChessFigure CreateFigures();
	*/

	//figure.CreateFigures();
	std::cout << "TEST";
	board.UpdateBoard();
	board.Board[1][4] = ' ';
	board.Board[3][4] = 'P';
	board.UpdateBoard();
	//board.GetFigure(1, 1);
	
}
