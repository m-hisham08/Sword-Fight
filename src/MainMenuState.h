#pragma once
#include "State.h"
#include "GUI.h"

class MainMenuState :
    public State
{
private:
    sf::Texture* bg1Text;
    sf::Sprite* bg1Sprite;

    sf::Texture* bg2Text;
    sf::Sprite* bg2Sprite;

    sf::Texture* bg3Text;
    sf::Sprite* bg3Sprite;

    mygui::Buttons* button;

    void initButtons();
    void initBackgrounds();
    
public:
    MainMenuState(sf::RenderWindow& window);

    void update(const float& dt);
    void render();
};

