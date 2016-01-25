#pragma once
#include <SFML\Graphics.hpp>

class GameState
{
public:
	GameState();
	~GameState();
	virtual void update() = 0;
	virtual void render(sf::RenderWindow &window) = 0;

};

