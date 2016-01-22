#pragma once

#include <SFML\System.hpp>

class Entity;
class Terrain;

struct Factory{
	static Entity* createPlayer(sf::Vector2f pos);
	static Terrain* createBlock0(sf::Vector2f pos);
	static Entity* createWorm(sf::Vector2f pos);
};