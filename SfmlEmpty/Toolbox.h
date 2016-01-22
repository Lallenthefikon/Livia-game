#pragma once
#include <SFML\Graphics.hpp>
struct Toolbox{
	enum TEXTUREKEY {WORMTEXTURE};
	static Toolbox& getInstance();
	static void loadTextures();
	static sf::Texture& getTexture(TEXTUREKEY textureKey);
	
};

