#pragma once
#include "GameState.h"

class MapEditor : public GameState
{
public:
	static MapEditor* getInstance();
	virtual void update();
	virtual void render(sf::RenderWindow &window);
private:
	MapEditor();
	~MapEditor();
};

