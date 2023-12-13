#pragma once

#include <SFML/Graphics.hpp>

class Player {
public:

	Player();

	void update(float dt);
	void draw(sf::RenderWindow& window);

private:

	sf::Vector2f _pos;

	sf::RectangleShape _shape;

};