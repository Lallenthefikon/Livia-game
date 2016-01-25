#include "MapEditor.h"


MapEditor::MapEditor(){
}


MapEditor::~MapEditor(){
}

MapEditor* MapEditor::getInstance(){
	static MapEditor mapeditor;
	return &mapeditor;
}

void MapEditor::update(){

}

void MapEditor::render(sf::RenderWindow &window){
	window.clear();

	window.display();
}