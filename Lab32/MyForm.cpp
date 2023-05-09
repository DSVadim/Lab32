#include"MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab32::MyForm Form; //назва створеного проекту
	Application::Run(% Form); //запуск форми
}
