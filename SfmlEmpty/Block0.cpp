#include "Block0.h"


Block0::Block0(sf::Vector2f pos){
	mSprite.setTexture(Toolbox::getTexture(Toolbox::WORMTEXTURE));
	mSprite.setPosition(mPosition);
}


Block0::~Block0()
{
}

Terrain* Block0::createBlock0(sf::Vector2f pos){
	return new Block0(pos);
}

void Block0::render(sf::RenderWindow &window){

}