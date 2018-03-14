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
	 for (int i = 1; i<BoardHeight-2; i++)
		 for (int j = 0; j<BoardWidth; j++)
		 {
			 Board[i][j] = " ";
		 }
	 for (int i = 0; i<BoardWidth; i++)
		 Board[1][i] = 'P';
	 for (int i = 0; i<BoardWidth; i++)
		 Board[6][i] = 'P';

	 Board[0][3] = 'Q';
	 Board[0][0] = 'W';
	 Board[0][1] = 'K';
	 Board[0][2] = 'G';
	 Board[0][4] = "Ki";
	 Board[0][5] = 'G';
	 Board[0][6] = 'K';
	 Board[0][7] = 'W';
	 Board[7][0] = 'W';
	 Board[7][1] = 'K';
	 Board[7][2] = 'G';
	 Board[7][3] = 'Q';
	 Board[7][4] = "Ki";
	 Board[7][5] = 'G';
	 Board[7][6] = 'K';
	 Board[7][7] = 'W';
	 
/* OPENCV wymagane
	 int blockSize = 75;
	 int imageSize = blockSize * 8;
	 Mat chessBoard(imageSize, imageSize, CV_8UC3, Scalar::all(0));
	 unsigned char color = 0;

	 for (int i = 0; i<imageSize; i = i + blockSize) {
		 color = ~color;
		 for (int j = 0; j<imageSize; j = j + blockSize) {
			 Mat ROI = chessBoard(Rect(i, j, blockSize, blockSize));
			 ROI.setTo(Scalar::all(color));
			 color = ~color;
		 }
	 }
	 imshow("Chess board", chessBoard);
*/

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



