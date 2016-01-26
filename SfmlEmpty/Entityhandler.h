#pragma once

#include "Entity.h"
#include "Collisionhandler.h"
#include <vector>

class Entityhandler
{
public:
	static Entityhandler& getInstance();
	void addEntity(Entity* entity);
	void renderEntities(sf::RenderWindow &window);
	void updateEntities();
private:
	Entityhandler();
	~Entityhandler();
	typedef std::vector<Entity*> Entities;
	Entities mEntities;
};
