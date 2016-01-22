#pragma once
#include <SFML\Graphics.hpp>

class Terrain
{
public:
	enum TERRAINTYPE {BLOCK0};
	Terrain();
	virtual ~Terrain();
	virtual TERRAINTYPE getType() = 0;
	virtual void render(sf::RenderWindow &window) = 0;
};

