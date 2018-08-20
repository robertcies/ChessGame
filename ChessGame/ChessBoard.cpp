#include "ChessBoard.h"
#include "ChessFigure.h"
#include <iostream>
#include <cstdlib>
#define NULL 0

ChessBoard::ChessBoard() 
{
	CreateBoard();
	
}

ChessBoard::~ChessBoard()
{
}

void ChessBoard::CreateBoard()
{
	ChessFigure tab;
	 for (int i = 1; i<BoardHeight-2; i++)
		 for (int j = 0; j<BoardWidth; j++)
		 {
			 Board[i][j] = " ";
		 }
	 for (int i = 0; i<BoardWidth; i++)
		 Board[1][i] = 'P';
	 for (int i = 0; i<BoardWidth; i++)
		 Board[6][i] = 'p';

	 tab.CreateFigures();
	 // Board[tab.figures[16]->PositionX][tab.figures[16]->PositionY] = tab.figures[16]->Nickname  ########tak powinno byc???/????????
	 Board[0][3] = tab.figures[16]->Nickname; //Queen
	 Board[0][0] = tab.figures[20]->Nickname; // ROOK
	 Board[0][1] = tab.figures[22]->Nickname; //Knight
	 Board[0][2] = tab.figures[18]->Nickname; //Bishop
	 Board[0][4] = tab.figures[17]->Nickname; // King
	 Board[0][5] = tab.figures[19]->Nickname; //Bishop
	 Board[0][6] = tab.figures[23]->Nickname; // Knight
	 Board[0][7] = tab.figures[21]->Nickname; // Rook
	/* Board[7][0] = 'w';
	 Board[7][1] = 'k';
	 Board[7][2] = 'g';
	 Board[7][3] = 'q';
	 Board[7][4] = "ki";
	 Board[7][5] = 'g';
	 Board[7][6] = 'k';
	 Board[7][7] = 'w';*/
	 
//Show array in console
	 for (int i = 0; i < BoardHeight; i++)
	 {
		 for (int j = 0; j < BoardWidth; j++)
		 {
			 std::cout << Board[i][j] << '\t';		 
		 }
		 std::cout << std::endl;
		 std::cout << std::endl;
		 std::cout << std::endl;
	 }
	getchar();

}
 void ChessBoard::UpdateBoard()
 {
	system("cls");

	 for (int i = 0; i < BoardHeight; i++)
	 {
		 for (int j = 0; j < BoardWidth; j++)
		 {
			 std::cout << Board[i][j] << '\t';
		 }
		 std::cout << std::endl;
		 std::cout << std::endl;
		 std::cout << std::endl;
	 }
	 getchar();
 }
 void ChessBoard::SetFigures(int posx, int posy)
 {
	 /*
	 for (int i = 0; i < 32; i++)
	 {
		 ChessFigure::figures[i]
	 }
 */
 }


