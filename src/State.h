#pragma once
class State
{
protected:
	sf::RenderWindow& window;
public:
	State(sf::RenderWindow& window);

	virtual void update(const float& dt) = 0;
	virtual void render() = 0;
};

