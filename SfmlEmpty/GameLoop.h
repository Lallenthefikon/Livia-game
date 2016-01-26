#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Abstractgame.h"
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
	void calcTimeElapsedAndFPS(sf::Clock &clock);
	GameState* mCurrentState;
	sf::RenderWindow mWindow;
	std::string mCurrentMap;
	sf::CircleShape shape;
	float mTimeElapsed;
	int FPS;
};

