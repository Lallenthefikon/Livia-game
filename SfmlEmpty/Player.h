#pragma once

#include <SFML\System.hpp>
#include "Entity.h"

class Player : public Entity
{
public:
	virtual ~Player();
	virtual Entity::ENTITYTYPE getType(){ return PLAYER; }
	static Entity* createPlayer(sf::Vector2f pos);
	virtual void render(sf::RenderWindow &window);
private:
	Player(sf::Vector2f pos);
	sf::Vector2f mPosition;
};

