#pragma once

#include "Factory.h"
#include "Entityhandler.h"
#include "Terrainhandler.h"


class MapGenerator{
public:

	static MapGenerator& getInstance();

	void loadMap(std::string &mapname);

	void readTerrainfile(std::string &filename);
	void readEntityfile(std::string &filename);


	void createWorm(Entityhandler &entityhandler, sf::Vector2f pos);
	void createPlayer(Entityhandler &entityhandler, sf::Vector2f pos);
	void createBlock0(Terrainhandler &terrainhandler, sf::Vector2f pos);
private:
	MapGenerator();
	~MapGenerator();
	sf::Vector2f readPosition(std::string line);
};

