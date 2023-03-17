#include "stdafx.h"
#include "MainMenuState.h"

MainMenuState::MainMenuState(sf::RenderWindow& window):State(window)
{
	std::cout << "Main menu state pushed! \n";
	
}

void MainMenuState::update(const float& dt)
{
	
}

void MainMenuState::render()
{
	this->window.clear(sf::Color::Red);
}
