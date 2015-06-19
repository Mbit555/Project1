#include "MyForm.h"
using namespace Calculator;
using namespace Calculator::Windows::Forms;

[STAThreadAttribute]
void main(array<System::String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Calculator::MyForm form;
	Application::Run(%form);
}
