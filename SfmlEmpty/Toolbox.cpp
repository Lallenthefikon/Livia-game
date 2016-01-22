#include "Toolbox.h"

static sf::Texture mWormtexture;


Toolbox& Toolbox::getInstance(){
	static Toolbox toolbox;
	return toolbox;
}

void Toolbox::loadTextures(){
	mWormtexture.loadFromFile("Worm.png");
}

sf::Texture& Toolbox::getTexture(TEXTUREKEY textureKey){
	switch (textureKey){
	case WORMTEXTURE:
		return mWormtexture;
		break;
	default:
		break;
	}
}