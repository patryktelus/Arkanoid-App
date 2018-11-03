#include "Game.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Arkanoid::Game form;
	Application::Run(%form);
}