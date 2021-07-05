#include <mainWindow.h>
#include <iostream>

MainWindow::MainWindow()
:
m_checkbutton("something")
{
        set_title("Pixmap'd Buttons");
        // set_default_size(200, 200);
        set_default_icon_name("text-x-generic");

        m_checkbutton.set_margin(10);
        m_checkbutton.signal_toggled().connect(sigc::mem_fun(*this, &MainWindow::on_checkbutton_toggled));
        set_child(m_checkbutton);
}

MainWindow::~MainWindow()
{
}

void MainWindow::on_checkbutton_toggled()
{
    std::cout<< (m_checkbutton.get_active()?"ticked":"unticked")
             << std::endl;
}
