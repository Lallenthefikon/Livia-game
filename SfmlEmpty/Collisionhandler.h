#pragma once

#include "Entity.h"
#include "Terrainhandler.h"

class Collisionhandler
{
public:
	static Collisionhandler& getInstance();
	~Collisionhandler();
private:
	Collisionhandler();

};

