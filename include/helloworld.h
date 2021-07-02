#include <gtkmm/window.h>
#include <gtkmm/button.h>

class MyWindow : public Gtk::Window
{
  public:
    MyWindow();
    ~MyWindow() override;

  protected:
    // signal handlers
    void on_button_clicked();

    // child widgets
    Gtk::Button     m_button;
};
