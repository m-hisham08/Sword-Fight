#include "stdafx.h"
#include "GUI.h"

mygui::Buttons::Buttons(sf::Vector2f button_size,
						float button_pos_x, float button_pos_y,
						std::string font_file_path,
						std::string button_text, int character_size,
						sf::Color button_color, sf::Color text_color)
{
	//initialising private variables
	this->isActive = true;
	this->isHovered = false;
	this->isPressed = false;

	//initialising shape parameters
	this->shape.setSize(button_size);
	this->shape.setPosition(button_pos_x, button_pos_y);
	this->shape.setFillColor(button_color);

	//initialising font
	this->font = new sf::Font();
	this->font->loadFromFile(font_file_path);

	//initialising text
	this->text = new sf::Text();
	this->text->setFont(*this->font);
	this->text->setString(button_text);
	this->text->setFillColor(text_color);
	this->text->setCharacterSize(character_size);

	this->shape.setSize(sf::Vector2f(this->text->getGlobalBounds().width * 1.2f, this->text->getGlobalBounds().height * 2.f));
	this->text->setPosition(
		this->shape.getPosition().x + this->shape.getGlobalBounds().width / 9.f,
		this->shape.getPosition().y - this->shape.getGlobalBounds().height / 6.f
	);
}

mygui::Buttons::~Buttons()
{
	delete this->text;
	delete this->font;
}

void mygui::Buttons::update(const float& dt)
{
	
}

void mygui::Buttons::render(sf::RenderTarget& target)
{
	target.draw(this->shape);
	target.draw(*this->text);
}
