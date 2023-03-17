#pragma once
#include"MainMenuState.h"

class Engine
{
private:
	//private window and event variable
	sf::RenderWindow* window;
	sf::Event ev;

	//State Container
	std::stack<State*> stateContainer;

	//State variables
	MainMenuState* mainMenuState;

	//variables required for DeltaTime
	sf::Clock clock;
	float deltaTime;

	//intitialisation functions!
	void initWindow();
	void initStates();
	
	//core functions
	void updateDeltaTime();
	void eventPolling();
	void update(const float& dt);
	void render(sf::RenderTarget& target);

	//miscellaneous functions
	void updateStates(const float& dt);
	void renderStates();

public:
	Engine();
	~Engine();

	void run();

	
};

