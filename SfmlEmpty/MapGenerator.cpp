#include "MapGenerator.h"


MapGenerator::MapGenerator()
{
}


MapGenerator::~MapGenerator()
{
}


MapGenerator& MapGenerator::getInstance(){
	static MapGenerator mapGenerator;
	return mapGenerator;
}

void MapGenerator::createWorm(Entityhandler& entityhandler){
	entityhandler.addEntity(Factory::createWorm(sf::Vector2f(200, 200)));
	entityhandler.addEntity(Factory::createWorm(sf::Vector2f(100, 10)));
}