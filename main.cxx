#include <iostream>
#include <gtkmm/application.h>
#include <main_window.h>

int main(int argc, char **argv)
{
    //std::cout<< "It works!" << std::endl;
    
    auto app = Gtk::Application::create("org.example.demo");

    ExampleWindow examplewindow;
    
    return app->run(examplewindow);
}