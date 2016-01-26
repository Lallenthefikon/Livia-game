#pragma once

#include <SFML\System.hpp>
#include "Entity.h"
#include "Toolbox.h"

class Player : public Entity
{
public:
	virtual ~Player();
	virtual Entity::ENTITYTYPE getType(){ return PLAYER; }
	static Entity* createPlayer(sf::Vector2f pos);
	virtual void render(sf::RenderWindow &window);
	virtual void update();
private:
	Player(sf::Vector2f pos);
	void move();
	float lerp(float goal, float current, float delta);
	sf::Vector2f mPosition;
	sf::Sprite mSprite;
};

