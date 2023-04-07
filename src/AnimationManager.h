#pragma once
class AnimationManager
{
private:
	class Animation
	{
	private:
		sf::IntRect startRect, endRect;
		float animationSpeed;
	public:
		Animation()
		{
			
		}
	};

	sf::Sprite sprite;

	//Multiple variables for texture sheet to allow textures to be imported as a signle sheet or as multiple sheets!
	sf::Texture singleTextureSheet;
	std::map<std::string, sf::Texture> textureMap;

public:
	/*
	Multiple constructors to allow the class to be instantiated with either:
		  1. A single texture sheet 
	      2. No texture sheet at all so mutiple texture sheets can be loaded later on using addTexture() function
	*/
	AnimationManager(sf::Sprite& sprite);
	AnimationManager(sf::Sprite& sprite, std::string texture_file_path);

	~AnimationManager();

	//function to add texture along with an appropriate label (such as ATTACK, IDLE, MOVE)
	void addTexture(std::string label, std::string texture_file_path);
};

