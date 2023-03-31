#include "stdafx.h"
#include "MainMenuState.h"

void MainMenuState::initButtons()
{
	this->button = new mygui::Buttons(
		sf::Vector2f(300.f, 150.f),
		this->window.getSize().x / 2, this->window.getSize().y / 2,
		"res/fonts/ARCADECLASSIC.TTF", "PRESS ANY BUTTON TO START!",
		50, sf::Color::Black
	);
}

MainMenuState::MainMenuState(sf::RenderWindow& window):State(window)
{
	std::cout << "Main menu state pushed! \n";
	this->initButtons();
	
}

void MainMenuState::update(const float& dt)
{
	
}

void MainMenuState::render()
{
	this->window.clear(sf::Color::Red);
	this->button->render(this->window);
}
