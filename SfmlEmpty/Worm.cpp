#include "Worm.h"


Worm::Worm(sf::Vector2f pos):
mPosition(pos){
	mSprite.setTexture(Toolbox::getTexture(Toolbox::WORMTEXTURE));
	mSprite.setPosition(mPosition);
}


Worm::~Worm()
{
}

Entity* Worm::createWorm(sf::Vector2f pos){
	return new Worm(pos);
}

void Worm::render(sf::RenderWindow &window){
	window.draw(mSprite);
}

void Worm::update(){

}