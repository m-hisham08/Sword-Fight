#pragma once



namespace mygui
{
	class GUI
	{

	};

	class Buttons
	{
	private:
		sf::RectangleShape shape;
		sf::Font* font;
		sf::Text* text;

		bool isActive;
		bool isHovered;
		bool isPressed;

	public:
		Buttons(sf::Vector2f button_size,
				float button_pos_x, float button_pos_y,
				std::string font,
				std::string text, int character_size,
				sf::Color button_color = sf::Color::Transparent, sf::Color text_color = sf::Color::White);
		~Buttons();

		void update(const float& dt);
		void render(sf::RenderTarget& target);
	};

}


