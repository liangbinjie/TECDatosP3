#include "InsertarCiudad.h"


using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EDP3::InsertarCiudad form;
	Application::Run(% form);
}