#include "Game.hpp"
#include <cstdlib>
int main(int argc, const char *argv[])
{
    srand(time(NULL));
    bmt::Game game("BlockMeThat", 800, 600);
    game._framerate.restart();
    while (game._windows.isOpen()) {
        sf::Event event;
        while (game._windows.pollEvent()) {
            if (game._windows.getEvent().getType() == sf::Event::Closed)
                game._windows.close();
        }
        game._windows.clear();
        game.gameloop();
        game._windows.display();
    }
    return 0;
}