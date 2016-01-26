#pragma once

#include "Entity.h"
#include <SFML\System.hpp>
#include "Toolbox.h"

class Worm : public Entity
{
public:
	
	virtual ~Worm();
	virtual ENTITYTYPE getType(){ return WORM; }
	static Entity* createWorm(sf::Vector2f pos);
	virtual void render(sf::RenderWindow &window);
	virtual void update();
private:
	sf::Sprite mSprite;
	Worm(sf::Vector2f pos);
	sf::Vector2f mPosition;
};

