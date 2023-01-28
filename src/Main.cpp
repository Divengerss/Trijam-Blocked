#include "Game.hpp"

int main(int argc, const char *argv[])
{

    bmt::Game game("BlockMeThat", 800, 600);

    while (game._windows.isOpen()) {
        sf::Event event;
        while (game._windows.pollEvent()) {
            if (game._windows.getEvent().getType() == sf::Event::Closed)
                game._windows.close();
        }
        game._windows.clear();
        game._windows.display();
    }
    return 0;
}