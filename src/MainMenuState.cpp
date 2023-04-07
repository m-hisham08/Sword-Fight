#include "stdafx.h"
#include "MainMenuState.h"

void MainMenuState::initButtons()
{
	this->button = new mygui::Buttons(
		sf::Vector2f(300.f, 150.f),
		this->window.getSize().x / 4, this->window.getSize().y / 1.5,
		"res/fonts/ARCADECLASSIC.TTF", "PRESS  ANY  BUTTON  TO  START!",
		36
	);
}

void MainMenuState::initBackgrounds()
{
	bg1Text = new sf::Texture();
	bg1Text->loadFromFile("res/backgrounds/oakwood/background/1366x768/background_layer_1.png");
	bg1Sprite = new sf::Sprite(*bg1Text);

	bg2Text = new sf::Texture();
	bg2Text->loadFromFile("res/backgrounds/oakwood/background/1366x768/background_layer_2.png");
	bg2Sprite = new sf::Sprite(*bg2Text);

	bg3Text = new sf::Texture();
	bg3Text->loadFromFile("res/backgrounds/oakwood/background/1366x768/background_layer_3.png");
	bg3Sprite = new sf::Sprite(*bg3Text);

}

MainMenuState::MainMenuState(sf::RenderWindow& window):State(window)
{
	std::cout << "Main menu state pushed! \n";
	this->initBackgrounds();
	this->initButtons();
}

MainMenuState::~MainMenuState()
{
	delete this->bg1Text;
	delete this->bg2Text;
	delete this->bg3Text;

	delete this->bg1Sprite;
	delete this->bg2Sprite;
	delete this->bg3Sprite;

	delete this->button;
}

void MainMenuState::update(const float& dt)
{
	
}

void MainMenuState::render()
{
	this->window.draw(*bg1Sprite);
	this->window.draw(*bg2Sprite);
	this->window.draw(*bg3Sprite);
	this->button->render(this->window);
}
