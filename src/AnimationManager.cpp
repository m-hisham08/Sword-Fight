#include "stdafx.h"
#include "AnimationManager.h"

AnimationManager::AnimationManager(sf::Sprite& sprite):sprite(sprite)
{
}

AnimationManager::AnimationManager(sf::Sprite& sprite, std::string texture_file_path):sprite(sprite)
{
	if (!this->singleTextureSheet.loadFromFile(texture_file_path))
	{
		std::cout << "Couldnt load texture !";
	}
	
}

AnimationManager::~AnimationManager()
{

}

void AnimationManager::addTexture(std::string label, std::string texture_file_path)
{
	sf::Texture temp;
	if (temp.loadFromFile(texture_file_path))
	{
		textureMap.emplace(label, temp);
	}
	else
	{
		std::cout << "unable to add texture!";
	}
}

