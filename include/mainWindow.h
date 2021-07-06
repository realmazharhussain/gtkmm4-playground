#pragma once
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>
#include <gtkmm/separator.h>

class MainWindow : public Gtk::Window
{
  public:
    MainWindow();
    ~MainWindow() override;

  protected:
    // signal handlers
    void on_button_quit_clicked();
    void on_radiobuttons_toggled();

    // child widgets
    Gtk::CheckButton      m_RadioButton1,
                          m_RadioButton2,
                          m_RadioButton3;
    Gtk::Box              m_Box_Main,
                          m_Box_RadioButtons,
                          m_Box_QuitButton;
    Gtk::Separator        m_Separator;
    Gtk::Button           m_Button_Quit;
};
