#pragma once
#include <SFML\Graphics.hpp>


class Entity
{
public:
	enum ENTITYTYPE {PLAYER, WORM};
	Entity();
	virtual ~Entity();
	virtual ENTITYTYPE getType() = 0;
	virtual void render(sf::RenderWindow &window) = 0;
	virtual void update() = 0;
};

