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
	Entityhandler& entityhandler = Entityhandler::getInstance();
	MapGenerator& mapGenerator = MapGenerator::getInstance();
	Toolbox::loadTextures();
	mapGenerator.createWorm(entityhandler);

	while (window.isOpen()){

		sf::Event event;
		while (window.pollEvent(event)){

			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		entityhandler.renderEntities(window);
		window.display();
	}
}