#include "mainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	dasturlash060524::mainForm form;
	Application::Run(% form);
	return 0;
}