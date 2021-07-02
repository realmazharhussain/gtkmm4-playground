#include <helloworld.h>

MyWindow::MyWindow()
:
m_button("Hello World")
{
        set_title("Basic Application");
        // set_default_size(200, 200);
        set_default_icon_name("text-x-generic");

        m_button.set_margin(10);
        // m_button.set_size_request(200,100);
        m_button.signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::on_button_clicked));
        set_child(m_button);
}

MyWindow::~MyWindow()
{
}

void MyWindow::on_button_clicked()
{
    g_print("hello world\n");
}
