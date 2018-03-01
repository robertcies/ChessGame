#include "UnbelievableChessgame.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ChessGame::UnbelievableChessgame form;
	Application::Run(%form);
}