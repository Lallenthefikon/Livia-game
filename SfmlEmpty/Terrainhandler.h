#pragma once

#include <vector>
#include "Terrain.h"


class Terrainhandler
{
public:
	static Terrainhandler& getInstance();
private:
	Terrainhandler();
	~Terrainhandler();
	typedef std::vector<Terrain*> Terrains;
	Terrains mTerrains;
};

