#include "ventanaPrincipal.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EDP3::ventanaPrincipal form;
	Application::Run(% form);
}