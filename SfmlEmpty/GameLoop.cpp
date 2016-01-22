#include "GameLoop.h"


GameLoop::GameLoop()
{
}


GameLoop::~GameLoop()
{
}

void GameLoop::run(){

	sf::VideoMode videoMode(640, 480);
	sf::RenderWindow window(videoMode, "SFML Application");

	sf::CircleShape shape;
	shape.setRadius(80.f);
	shape.setPosition((videoMode.width / 2) - shape.getRadius(), (videoMode.height / 2) - shape.getRadius());
	shape.setFillColor(sf::Color::Red);

	// Initisiera singeltonklasser
	Terrainhandler& terrainhandler = Terrainhandler::getInstance();
	Entityhandler& entityhandler = Entityhandler::getInstance();
	MapGenerator& mapGenerator = MapGenerator::getInstance(&terrainhandler, &entityhandler);


	Toolbox::loadTextures();


	mapGenerator.createWorm(sf::Vector2f(200, 200));
	mapGenerator.createPlayer(sf::Vector2f(30, 200));
	mapGenerator.createBlock0(sf::Vector2f(400, 200));

	// Loop
	while (window.isOpen()){

		sf::Event event;
		while (window.pollEvent(event)){

			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		entityhandler.renderEntities(window);
		terrainhandler.renderTerrains(window);
		window.display();
	}
}