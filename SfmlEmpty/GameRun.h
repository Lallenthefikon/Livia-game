#pragma once

#include "GameState.h"
#include "Entityhandler.h"
#include "Terrainhandler.h"
#include "MapGenerator.h"
#include "Toolbox.h"

class GameRun : public GameState
{
public:
	static GameRun* getInstance(std::string &mapname);
	virtual void update();
	virtual void render(sf::RenderWindow &window);
private:
	GameRun(std::string &mapname);
	~GameRun();
	Entityhandler& mEntityHandler;
	Terrainhandler& mTerrainHandler;
	MapGenerator& mMapGenerator;
};

