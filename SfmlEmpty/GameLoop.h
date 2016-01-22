#pragma once

#include "Abstractgame.h"
#include <SFML/Graphics.hpp>
#include "Entityhandler.h"
#include "MapGenerator.h"
#include "Toolbox.h"

class GameLoop : public Abstractgame
{
public:
	GameLoop();
	virtual ~GameLoop();
	void run();
};

