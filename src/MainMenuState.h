#pragma once
#include "State.h"

class MainMenuState :
    public State
{
private:
    
public:
    MainMenuState(sf::RenderWindow& window);

    void update(const float& dt);
    void render();
};

