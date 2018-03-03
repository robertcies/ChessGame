#include "UnbelievableChessgame1.h"
#include "ChessBoard.h"

#include <iostream>
#include<string>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ChessGame::UnbelievableChessgame form;
	Application::Run(%form);

	ChessBoard::CreateBoard(8, 8);
}