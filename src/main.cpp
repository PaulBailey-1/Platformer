#include <stdio.h>
#include <SFML/Graphics.hpp>

#include "Player.h"

int main() {

    sf::RenderWindow window(sf::VideoMode(1000, 500), "The Game");
    window.setFramerateLimit(30);

    sf::Clock clock;

    Player player;

    while (window.isOpen()) {

        // Event handleing
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Update
        float dt = clock.getElapsedTime().asMilliseconds() / 1000.0;
        player.update(dt);
        clock.restart();

        window.clear(sf::Color::White);

        // draw
        player.draw(window);
        window.display();
    }

    return 0;
}