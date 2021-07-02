#include <gtkmm/application.h>
#include <helloworld.h>

int main(int argc, char **argv)
{
    //std::cout<< "It works!" << std::endl;
    
    auto app = Gtk::Application::create("org.gtkmm.examples.base");

    return app->make_window_and_run<MyWindow>(argc, argv);
}