#include "Entityhandler.h"


Entityhandler::Entityhandler(){
}


Entityhandler::~Entityhandler(){
	while (!mEntities.empty()){
		delete mEntities.back();
		mEntities.pop_back();
	}
}

Entityhandler& Entityhandler::getInstance(){
	static Entityhandler entityhandler;
	return entityhandler;
}

void Entityhandler::renderEntities(sf::RenderWindow &window){
	for (Entities::size_type i = 0; i < mEntities.size(); i++){
		mEntities[i]->render(window);
	}
}

void Entityhandler::updateEntities(){
	for (Entities::size_type i = 0; i < mEntities.size(); i++){
		mEntities[i]->update();
	}
	// Collisionhandler stuff...
}

void Entityhandler::addEntity(Entity* entity){
	mEntities.push_back(entity);
}
