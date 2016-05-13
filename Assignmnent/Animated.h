#pragma once

class FireSprite// : public sf::Sprite
{

public:
	//Things we need to store
	sf::Sprite sprite;
	int currentFrame;
	float timeSinceLastChange;


	//constructor
	FireSprite(sf::Texture & myTexture);
	void Update(float timeSinceLastFrame);


};