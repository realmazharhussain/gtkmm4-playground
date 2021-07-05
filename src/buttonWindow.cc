#include <buttonWindow.h>

ButtonWindow::ButtonWindow()
:
m_button_hbox(Gtk::Orientation::HORIZONTAL, 5),
m_button_image("info.xpm"),
m_button_lable("cool button")
{
        set_title("Pixmap'd Buttons");
        // set_default_size(200, 200);
        set_default_icon_name("text-x-generic");

        m_button.set_margin(10);
        m_button_lable.set_expand(true);

        m_button_hbox.append(m_button_image);
        m_button_hbox.append(m_button_lable);
        m_button.set_child(m_button_hbox);
        m_button.set_expand(false);
        // m_button.set_size_request(200,100);
        m_button.signal_clicked().connect(sigc::mem_fun(*this, &ButtonWindow::on_button_clicked));
        set_child(m_button);
}

ButtonWindow::~ButtonWindow()
{
}

void ButtonWindow::on_button_clicked()
{
    g_print("hello world\n");
}
