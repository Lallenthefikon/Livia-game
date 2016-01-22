#pragma once

#include "Factory.h"
#include "Entityhandler.h"
#include "Terrainhandler.h"

class MapGenerator
{
public:
	
	static MapGenerator& getInstance();
	void createWorm(Entityhandler& entityhandler);
private:
	MapGenerator();
	~MapGenerator();
};

