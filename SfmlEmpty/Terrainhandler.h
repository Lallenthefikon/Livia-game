#pragma once

#include <vector>
#include "Terrain.h"


class Terrainhandler
{
public:
	static Terrainhandler& getInstance();
	void addTerrain(Terrain* terrain);
	void renderTerrains(sf::RenderWindow &window);
private:
	Terrainhandler();
	~Terrainhandler();
	typedef std::vector<Terrain*> Terrains;
	Terrains mTerrains;
};

