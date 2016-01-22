#include "Terrainhandler.h"


Terrainhandler::Terrainhandler()
{
}


Terrainhandler::~Terrainhandler()
{
}

Terrainhandler& Terrainhandler::getInstance(){
	static Terrainhandler terrainhandler;
	return terrainhandler;
}