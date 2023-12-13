#include <stdio.h>
#include <SFML/Graphics.hpp>

int main() {

    sf::RenderWindow window(sf::VideoMode(1000, 500), "The Game");
    window.setFramerateLimit(30);

    sf::Clock clock;

    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Update
        clock.restart();

        window.clear(sf::Color::White);

        // draw

        window.display();
    }

    return 0;
}