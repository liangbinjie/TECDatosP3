#include "LoginForm.h"
#include "Controller.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EDP3::LoginForm form;
	Application::Run(% form);
}