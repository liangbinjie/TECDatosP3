#include "ventanaPrincipal.h"
#include "Controller.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EDP3::ventanaPrincipal form;
	Application::Run(% form);
}