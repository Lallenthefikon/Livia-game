#include "MapGenerator.h"
#include <fstream>

MapGenerator::MapGenerator()
{
}


MapGenerator::~MapGenerator()
{
}


MapGenerator& MapGenerator::getInstance(){
	static MapGenerator mapGenerator;
	return mapGenerator;
}

void MapGenerator::loadMap(std::string &mapname){

	mapname.push_back('T');
	std::string terrainfilename = mapname;
	readTerrainfile(mapname);
	mapname.pop_back();

	mapname.push_back('E');
	std::string entityfilename = mapname;
	readEntityfile(mapname);
	mapname.pop_back();

}

void MapGenerator::readTerrainfile(std::string &filename){

	std::string line;
	std::ifstream terrainfile(filename);

	if (terrainfile.is_open()){
		while (getline(terrainfile, line)){
			switch (line[0]){

			default:
				break;

			}
		}
	}
}

void MapGenerator::readEntityfile(std::string &filename){

}


// Create entities

void MapGenerator::createWorm(Entityhandler& entityhandler, sf::Vector2f pos){
	entityhandler.addEntity(Factory::createWorm(pos));
}

void MapGenerator::createPlayer(Entityhandler& entityhandler, sf::Vector2f pos){
	entityhandler.addEntity(Factory::createPlayer(pos));
}


// Create terrains

void MapGenerator::createBlock0(Terrainhandler& terrainhandler, sf::Vector2f pos){
	terrainhandler.addTerrain(Factory::createBlock0(pos));
}

/*sf::Vector2f MapGenerator::readPosition(std::string line){


bool yDone = false;
bool deciDone = false;

float xSum = 0.0;
float ySum = 0.0;

int multiplier = 1;
int deciDivider = 1;



for (std::string::size_type i = line.size() - 1; i > -1; i--){

switch (line[i]){

case '0':
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;


case '1':
if (!yDone){
ySum += multiplier;
}
else{
xSum += multiplier;
}
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;


case '2':
if (!yDone){
ySum *= (2 * multiplier);
}
else{
xSum *= (2 * multiplier);
}
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;

case '3':
if (!yDone){
ySum *= (3 * multiplier);
}
else{
xSum *= (3 * multiplier);
}
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;

case '4':
if (!yDone){
ySum *= (4 * multiplier);
}
else{
xSum *= (4 * multiplier);
}
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;


case '5':
if (!yDone){
ySum *= (5 * multiplier);
}
else{
xSum *= (5 * multiplier);
}
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;

case '6':
if (!yDone){
ySum *= (6 * multiplier);
}
else{
xSum *= (6 * multiplier);
}
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;

case '7':
if (!yDone){
ySum *= (7 * multiplier);
}
else{
xSum *= (7 * multiplier);
}
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;


case '8':
if (!yDone){
ySum *= (8 * multiplier);
}
else{
xSum *= (8 * multiplier);
}
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;

case '9':
if (!yDone){
ySum *= (9 * multiplier);
}
else{
xSum *= (9 * multiplier);
}
if (!deciDone){
deciDivider *= 10;
}
multiplier *= 10;
break;

case '.':
deciDone = true;
break;


default:
break;
}
}
}*/
