#include "InsertarRestaurante.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EDP3::InsertarRestaurante form;
	Application::Run(% form);
}