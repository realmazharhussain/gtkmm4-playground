#pragma once
#include <gtkmm/window.h>
#include <gtkmm/togglebutton.h>
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
    void on_togglebutton_toggled();

    // child widgets
    Gtk::ToggleButton     m_togglebutton;
};
