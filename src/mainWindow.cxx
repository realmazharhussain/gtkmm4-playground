#include <mainWindow.h>
#include <iostream>

MainWindow::MainWindow()
:
m_togglebutton("something")
{
        set_title("Toggle Button");
        // set_default_size(200, 200);
        set_default_icon_name("text-x-generic");

        m_togglebutton.set_margin(10);
        m_togglebutton.signal_toggled().connect(sigc::mem_fun(*this, &MainWindow::on_togglebutton_toggled));
        set_child(m_togglebutton);
}

MainWindow::~MainWindow()
{
}

void MainWindow::on_togglebutton_toggled()
{
    std::cout<< (m_togglebutton.get_active()?"enabled":"disabled")
             << std::endl;
}
