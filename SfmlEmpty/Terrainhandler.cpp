#include "Terrainhandler.h"


Terrainhandler::Terrainhandler()
{
}


Terrainhandler::~Terrainhandler()
{
}

Terrainhandler& Terrainhandler::getInstance(){
	static Terrainhandler terrainhandler;
	return terrainhandler;
}

void Terrainhandler::addTerrain(Terrain* terrain){
	mTerrains.push_back(terrain);
}

void Terrainhandler::renderTerrains(sf::RenderWindow &window){
	for (Terrains::size_type i = 0; i < mTerrains.size(); i++){
		mTerrains[i]->render(window);
	}
}