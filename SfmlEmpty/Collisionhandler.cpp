#include "Collisionhandler.h"


Collisionhandler::Collisionhandler(){
}


Collisionhandler::~Collisionhandler(){
}

Collisionhandler& Collisionhandler::getInstance(){
	static Collisionhandler collisionhandler;
	return collisionhandler;
}