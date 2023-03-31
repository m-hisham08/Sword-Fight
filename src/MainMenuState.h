#pragma once
#include "State.h"
#include "GUI.h"

class MainMenuState :
    public State
{
private:
    mygui::Buttons* button;

    void initButtons();
    
public:
    MainMenuState(sf::RenderWindow& window);

    void update(const float& dt);
    void render();
};

