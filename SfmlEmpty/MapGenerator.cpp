#include "MapGenerator.h"
#include <fstream>

MapGenerator::MapGenerator(Terrainhandler *terrainhandler, Entityhandler *entityhandler) :
mTerrainhandler(terrainhandler),
mEntityhandler(entityhandler){
}


MapGenerator::~MapGenerator()
{
}


MapGenerator& MapGenerator::getInstance(Terrainhandler *terrainhandler, Entityhandler *entityhandler){
	static MapGenerator mapGenerator(terrainhandler, entityhandler);
	return mapGenerator;
}

void MapGenerator::loadMap(std::string mapname){

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
			case 'B':
				switch (line[1]){
				case '0':
					line.erase(0);
					line.erase(0);
					MapGenerator::createBlock0(MapGenerator::readPosition(line));
					break;
				default:
					break;
				}

			default:
				break;

			}
		}
	}
}

void MapGenerator::readEntityfile(std::string &filename){
	std::string line;
	std::ifstream entityfile(filename);

	if (entityfile.is_open()){
		while (getline(entityfile, line)){
			switch (line[0]){
			case 'P':
				switch (line[1]){
				case '0':
					line.erase(0);
					line.erase(0);
					MapGenerator::createPlayer(MapGenerator::readPosition(line));
					break;
				default:
					break;
				}

			case 'W':
				switch (line[1]){
				case '0':
					line.erase(0);
					line.erase(0);
					MapGenerator::createWorm(MapGenerator::readPosition(line));
				default:
					break;
				}

			default:
				break;

			}
		}
	}
}


// Create entities

void MapGenerator::createWorm(sf::Vector2f pos){
	mEntityhandler->addEntity(Factory::createWorm(pos));
}

void MapGenerator::createPlayer(sf::Vector2f pos){
	mEntityhandler->addEntity(Factory::createPlayer(pos));
}


// Create terrains

void MapGenerator::createBlock0(sf::Vector2f pos){
	mTerrainhandler->addTerrain(Factory::createBlock0(pos));
}

sf::Vector2f MapGenerator::readPosition(std::string line){


	// Translates string of two cordinates too floats of corndinates

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

		case ',':
			ySum /= deciDivider;
			yDone = true;
			deciDone = false;
			multiplier = 1;
			deciDivider = 1;
			break;

		default:
			break;
		}
	}
	return sf::Vector2f(xSum, ySum);
}
