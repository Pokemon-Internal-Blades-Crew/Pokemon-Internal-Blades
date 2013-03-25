#include "MyForm.h"
#include "Testing Window.h"
using namespace Project1;
[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	Application::Run(gcnew PokemonInternalBlades::TestingWindow());
	return 0;
}