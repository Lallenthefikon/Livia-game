#include "Player.h"


Player::Player(sf::Vector2f pos) :
mPosition(pos){
	mSprite.setTexture(Toolbox::getTexture(Toolbox::PLAYERTEXTURE));
	mSprite.setPosition(mPosition);
}


Player::~Player(){
}

Entity* Player::createPlayer(sf::Vector2f pos){
	return new Player(pos);
}

void Player::render(sf::RenderWindow &window){
	window.draw(mSprite);
}