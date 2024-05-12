#include "MenuBienvenida.h"

using namespace System::Windows::Forms;

int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew MenuBienvenida::Form());
  return 0;
}