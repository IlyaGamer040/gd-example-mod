#include <Geode.hpp>
#include <GDEditor.hpp>

using namespace geode::prelude;

class GeometryDashMod : public geode::Geode { 
public:
  GeometryDashMod() { 
    // Constructor of your class
  }

  void onActivate() { 
    // Mod activation event
    addMenuButton();
  }

  void addMenuButton() { 
    // Adding button code
    auto button = new Button("My Button");
    button->setPosition(100, 100); // Set button pos
    button->setSize(200, 50); // Size
    button->setCallback([]() { 
      // The action that will be performed when the button is clicked
      MessageBox("Hello from Geode!");
    });
    MainMenu::get()->add(button); // Adding button on main menu
  }
};

// Mod initialization
GEODE_INIT(GeometryDashMod);
