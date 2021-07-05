#pragma once
#include <gtkmm/window.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <gtkmm/box.h>

class MainWindow : public Gtk::Window
{
  public:
    MainWindow();
    ~MainWindow() override;

  protected:
    // signal handlers
    void on_checkbutton_toggled();

    // child widgets
    Gtk::CheckButton     m_checkbutton;
};
