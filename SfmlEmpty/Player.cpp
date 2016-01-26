#include "Player.h"

static float SPEED = 30;
static float timeElapsed = 0.1666666666666667;
static float jumpVelocity = -300;
static sf::Vector2f velocity(0, 0);
static sf::Vector2f velocityGoal(0, 0);
static sf::Vector2f gravity(0, 150);

Player::Player(sf::Vector2f pos) :
mPosition(pos){
	mSprite.setTexture(Toolbox::getTexture(Toolbox::PLAYERTEXTURE));
	mSprite.setPosition(mPosition);
}


Player::~Player(){
}

Entity* Player::createPlayer(sf::Vector2f pos){
	return new Player(pos);
}

void Player::render(sf::RenderWindow &window){
	window.draw(mSprite);
}

void Player::update(){
	move();
}

void Player::move() {

	// Adds velocity in four directions
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		velocityGoal.y = SPEED * -1;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		velocityGoal.y = SPEED * 1;
	}
	// Left and right
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		velocityGoal.x = SPEED * -1;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		velocityGoal.x = SPEED * 1;
	}

	// Jump
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		velocity.y = jumpVelocity;
	}

	velocity.x = lerp(velocityGoal.x, velocity.x, timeElapsed * 100);
	velocity.y = lerp(velocityGoal.y, velocity.y, timeElapsed * 100);

	// Updates the player's position
	mSprite.move(velocity * timeElapsed + gravity * timeElapsed);

	if (mSprite.getPosition().y > 400){
		mSprite.setPosition(mSprite.getPosition().x, 400);
	}

	// Resets the velocity to zero
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		velocityGoal.y = 0;
	}
	else if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		velocityGoal.y = 0;
	}
	// Left and right
	if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		velocityGoal.x = 0;
	}
	else if (!sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		velocityGoal.x = 0;
	}
}

float Player::lerp(float goal, float current, float delta) {
	float difference = goal - current;

	// Interpolates the velocity up from stationary
	if (difference > delta) {
		return current + delta;
	}
	// Interpolates the velocity down to stationary
	if (difference < -delta) {
		return current - delta;
	}

	return goal;
}