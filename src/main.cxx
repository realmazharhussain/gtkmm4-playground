#include <gtkmm/application.h>
#include <mainWindow.h>

int main(int argc, char **argv)
{
    //std::cout<< "It works!" << std::endl;
    
    auto app = Gtk::Application::create("org.gtkmm.examples.base");

    return app->make_window_and_run<MainWindow>(argc, argv);
}