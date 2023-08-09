#include "pch.h"
#include "MyForm.h"
#include "Gubr.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;
using namespace GubrWindow;

[STAThread]
int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    MyForm form;
    Application::Run(%form);

    return 0;
}
