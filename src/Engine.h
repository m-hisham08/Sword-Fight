#pragma once
class Engine
{
private:
	//private window and event variable
	sf::RenderWindow* window;
	sf::Event ev;

	//variables required for DeltaTime
	sf::Clock clock;
	float deltaTime;

	//intitialisation functions!
	void initWindow();
	
	//core functions
	void updateDeltaTime();
	void eventPolling();
	void update();
	void render(sf::RenderTarget& target);

public:
	Engine();

	void run();

	
};

