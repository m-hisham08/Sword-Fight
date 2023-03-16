#include "stdafx.h"
#include "Engine.h"

void Engine::initWindow()
{
	sf::VideoMode resolution(800, 600);
	std::string title = "untitled";

	std::ifstream in_file;
	in_file.open("config/window.ini");

		if (in_file.is_open()) 
		{
			in_file >> resolution.width >> resolution.height;

			in_file.ignore(); //the getline function stop reading when it comes across a \n  

			std::getline(in_file, title);
		}
		else
		{
			std::cout<<"ERROR::INVALID FILE::WINDOW.INI::ENGINE.CPP \n";
		}

	in_file.close();

	this->window = new sf::RenderWindow(resolution, title, sf::Style::Close | sf::Style::Titlebar);


}

void Engine::updateDeltaTime()
{
	this->deltaTime = this->clock.restart().asSeconds();
}

void Engine::eventPolling()
{
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case sf::Event::Closed:
			 this->window->close();
			 break;

		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;

		default:break;

		}
	}
}

void Engine::update()
{
	
}

void Engine::render(sf::RenderTarget& target)
{

}

Engine::Engine()
{
	this->initWindow();

}

void Engine::run()
{
	while (this->window->isOpen())
	{
		this->updateDeltaTime();
		this->eventPolling();
		this->update();

		this->window->clear();

		this->render(*this->window);

		this->window->display();

	}
}
