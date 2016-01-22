#pragma once

#include <SFML\System.hpp>
#include "Terrain.h"
#include "Toolbox.h"

class Block0 : public Terrain{
public:
	virtual ~Block0();
	virtual Terrain::TERRAINTYPE getType(){ return Terrain::BLOCK0; }
	static Terrain* createBlock0(sf::Vector2f pos);
	virtual void render(sf::RenderWindow &window);
private:
	Block0(sf::Vector2f pos);
	sf::Vector2f mPosition;
	sf::Sprite mSprite;
};

