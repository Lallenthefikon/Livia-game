#include "Factory.h"

#include "Player.h"
#include "Block0.h"
#include "Worm.h"

Entity* Factory::createPlayer(sf::Vector2f pos){
	return Player::createPlayer(pos);
}

Terrain* Factory::createBlock0(sf::Vector2f pos){
	return Block0::createBlock0(pos);
}

Entity* Factory::createWorm(sf::Vector2f pos){
	return Worm::createWorm(pos);
}