#pragma once

#include "Abstractgame.h"
#include <SFML/Graphics.hpp>
#include "Entityhandler.h"
#include "MapGenerator.h"
#include "Toolbox.h"
#include "GameRun.h"
#include "MapEditor.h"

class GameLoop : public Abstractgame
{
public:
	GameLoop();
	virtual ~GameLoop();
	void run();
	void update();
	void render();
private:
	GameState* mCurrentState;
	sf::RenderWindow mWindow;
	std::string mCurrentMap;
	sf::CircleShape shape;
};

