#include <mainWindow.h>
#include <iostream>

MainWindow::MainWindow()
:
m_RadioButton1("Option 1"),
m_RadioButton2("Option 2"),
m_RadioButton3("Option 3"),
m_Box_Main(Gtk::Orientation::VERTICAL),
m_Box_RadioButtons(Gtk::Orientation::VERTICAL),
m_Box_QuitButton(Gtk::Orientation::VERTICAL),
m_Button_Quit("Quit")
{
        set_title("Radio Buttons");
        // set_default_size(200, 200);
        // set_default_icon_name("text-x-generic");

        // Set Margin for Container Boxes
        m_Box_RadioButtons.set_margin(10);
        m_Box_QuitButton.set_margin(10);

        // Ordering Container Widgets
        m_Box_Main.append(m_Box_RadioButtons);
        m_Box_Main.append(m_Separator);
        m_Box_Main.append(m_Box_QuitButton);

        // Grouping RadioButtons together
        m_RadioButton2.set_group(m_RadioButton1);
        m_RadioButton3.set_group(m_RadioButton1);

        // Selecting RadioButton2 by default
        m_RadioButton2.set_active(true);

        // Filling m_Box_RadioButtons with RadioButtons
        m_Box_RadioButtons.append(m_RadioButton1);
        m_Box_RadioButtons.append(m_RadioButton2);
        m_Box_RadioButtons.append(m_RadioButton3);

        // Filling m_Box_QuitButton with m_Button_Quit
        m_Box_QuitButton.append(m_Button_Quit);

        // Connect Signal Handlers
        m_Button_Quit.signal_clicked().connect(sigc::mem_fun(*this, &MainWindow::on_button_quit_clicked));
        // m_RadioButton1.signal_toggled().connect(sigc::mem_fun(*this, &MainWindow::on_radiobuttons_toggled));
        // m_RadioButton2.signal_toggled().connect(sigc::mem_fun(*this, &MainWindow::on_radiobuttons_toggled));
        // m_RadioButton3.signal_toggled().connect(sigc::mem_fun(*this, &MainWindow::on_radiobuttons_toggled));

        // Finally, Add Main Container Box to the window
        set_child(m_Box_Main);
}

MainWindow::~MainWindow()
{
}


void MainWindow::on_button_quit_clicked()
{
    hide();
}

/*
void MainWindow::on_radiobuttons_toggled()
{
}
*/