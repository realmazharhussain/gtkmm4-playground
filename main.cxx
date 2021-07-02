#include <gtkmm/application.h>
#include <gtkmm/window.h>

class MyWindow : public Gtk::Window
{
  public:
    MyWindow()
    {
        set_title("Basic Application");
        set_default_size(200, 200);
        set_default_icon_name("text-x-generic");
    }
};

int main(int argc, char **argv)
{
    //std::cout<< "It works!" << std::endl;
    
    auto app = Gtk::Application::create("org.gtkmm.examples.base");

    return app->make_window_and_run<MyWindow>(argc, argv);
}