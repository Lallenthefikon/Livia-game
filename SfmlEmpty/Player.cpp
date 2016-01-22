#include "Player.h"


Player::Player(sf::Vector2f pos):
mPosition(pos){
}


Player::~Player(){
}

Entity* Player::createPlayer(sf::Vector2f pos){
	return new Player(pos);
}

void Player::render(sf::RenderWindow &window){
	// KOMMENTAR 
}