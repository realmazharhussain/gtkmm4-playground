#pragma once
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>

class ButtonWindow : public Gtk::Window
{
  public:
    ButtonWindow();
    ~ButtonWindow() override;

  protected:
    // signal handlers
    void on_button_clicked();

    // child widgets
    Gtk::Button     m_button;
    Gtk::Box        m_button_hbox;
    Gtk::Image      m_button_image;
    Gtk::Label      m_button_lable;
};
