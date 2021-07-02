#include <main_window.h>

ExampleWindow::ExampleWindow()
:
  m_Box_main(Gtk::ORIENTATION_VERTICAL),
  m_Box_ChekButtons(Gtk::ORIENTATION_HORIZONTAL),
  m_CheckButton_Editable("Editable"),
  m_CheckButton_Visible("Visible"),
  m_Button_Quit("Quit")
{
  set_title("Example Window");
  set_default_size(200,100);
  set_border_width(10);


  //--------- Widget heirarchy ---------//

  add(m_Box_main); // main box

  // 1st Gen of Children Widgets 
  m_Box_main.pack_start(m_Entry);    // the entry widget
  m_Box_main.pack_start(m_Box_ChekButtons); // invisble, horizontal box for containing checkbuttons
  m_Box_main.pack_end(m_Button_Quit);  // the quit button

  // 2nd Gen of Children Widgets
  m_Box_ChekButtons.pack_start(m_CheckButton_Editable); // "Editable" Checkbox
  m_CheckButton_Editable.set_active();  // make it checked by default
  m_Box_ChekButtons.pack_start(m_CheckButton_Visible); // "Visible" Checkbox
  m_CheckButton_Visible.set_active(); // make it checked by default
  

  //-------- Default Widget Stuff ---------//

  // set default Widget
  m_Button_Quit.set_can_default();
  m_Button_Quit.grab_default();
  
  // Pressing Enter in entry widget presses/clicks default widget
  m_Entry.set_activates_default();


  //-------- signal handlers --------//

  // quit button clicked
  m_Button_Quit.signal_clicked().connect(sigc::mem_fun(*this, &ExampleWindow::on_button_quit_clicked));
  // "Visible" checkbox toggled
  m_CheckButton_Visible.signal_toggled().connect(sigc::mem_fun (*this, &ExampleWindow::on_checkbutton_visible_toggled));
  // "Editable" checkbox toggled
  m_CheckButton_Editable.signal_toggled().connect(sigc::mem_fun (*this, &ExampleWindow::on_checkbutton_editable_toggled));


  //------- Show the Window on screen --------//
  show_all_children();
}
ExampleWindow::~ExampleWindow()
{
  g_print("Exitting...\n");
}


void ExampleWindow::on_button_quit_clicked()
{
  hide();
}

void ExampleWindow::on_checkbutton_visible_toggled()
{
  m_Entry.set_visibility(m_CheckButton_Visible.get_active());
}

void ExampleWindow::on_checkbutton_editable_toggled()
{
  m_Entry.set_editable(m_CheckButton_Editable.get_active());
}