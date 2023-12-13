
#include "Player.h"

Player::Player() {

	_shape.setSize({50, 50});
	_shape.setFillColor(sf::Color::Green);

	_pos = { 0.0, 0.0 };

}

void Player::update(float dt) {
	_pos.x += dt * 100.0;
}

void Player::draw(sf::RenderWindow& window) {
	_shape.setPosition(_pos);
	window.draw(_shape);
}
