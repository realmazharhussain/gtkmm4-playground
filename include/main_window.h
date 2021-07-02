#pragma once
#include <gtkmm/window.h>
#include <gtkmm/entry.h>
#include <gtkmm/box.h>
#include <gtkmm/checkbutton.h>

class ExampleWindow : public Gtk::Window
{
  public:
    ExampleWindow();
    virtual ~ExampleWindow();
  protected:
    //Child Objects
    Gtk::Box
      m_Box_main,
      m_Box_ChekButtons;
    Gtk::Button
      m_Button_Quit;
    Gtk::CheckButton
      m_CheckButton_Editable,
      m_CheckButton_Visible;
    Gtk::Entry
      m_Entry;

    // Signal Handlers
    void on_checkbutton_editable_toggled();
    void on_checkbutton_visible_toggled();
    void on_button_quit_clicked();
};