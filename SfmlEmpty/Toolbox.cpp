#include "Toolbox.h"

// Textures
static sf::Texture mWormtexture;
static sf::Texture mBlock0texture;
static sf::Texture mPlayertexture;



Toolbox& Toolbox::getInstance(){
	static Toolbox toolbox;
	return toolbox;
}

void Toolbox::loadTextures(){
	mWormtexture.loadFromFile("Resources/Worm.png");
	mBlock0texture.loadFromFile("Resources/Block0.png");
	mPlayertexture.loadFromFile("Resources/Player.png");
}

sf::Texture& Toolbox::getTexture(TEXTUREKEY textureKey){
	switch (textureKey){

	case WORMTEXTURE:
		return mWormtexture;
		break;

	case BLOCK0TEXTURE:
		return mBlock0texture;
		break;

	case PLAYERTEXTURE:
		return mPlayertexture;
		break;

	default:
		break;
	}
}
