#include "InsertarPais.h"


using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EDP3::InsertarPais form;
	Application::Run(% form);
}
