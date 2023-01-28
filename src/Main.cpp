#include <SFML/Graphics.hpp>

int main(int argc, const char *argv[])
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "BlockMeThat");

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.display();
    }
    return 0;
}