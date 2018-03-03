#include "ChessBoard.h"
#include <iostream>
ChessBoard::ChessBoard() 
{
	int BoardWidth = 8;
	int BoardHeight = 8;
//Should be changed to constant value BoardHeight and BoardWidth	
}
 int ChessBoard::CreateBoard(int BoardWidth,int BoardHeight)
{
	 int z = 0;
	 int Board[8][8];

	 for (int i = 0; i<BoardHeight; i++)
		 for (int j = 0; j<BoardWidth; j++)
		 {
			 Board[i][j] = z;
			 z++;
		 }

//Show array in console
	 for (int i = 0; i < BoardHeight; i++)
	 {
		 for (int j = 0; j < BoardWidth; j++)
		 {
			 std::cout << Board[i][j] << '\t';
		 }
		 std::cout << std::endl;
	 }
	getchar();
	return 0;
}

