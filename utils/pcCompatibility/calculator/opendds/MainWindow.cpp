#include "MainWindow.h"

using namespace CalculatorClient;

[STAThreadAttribute]
int cmain(array<System::String ^> ^args)
{
    ACE::init();
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew MainWindow());

    if(MainWindow::m_openproxy != NULL)
        delete MainWindow::m_openproxy;

    if(MainWindow::m_rtiproxy != NULL)
        delete MainWindow::m_rtiproxy;
   
    return 0;
}