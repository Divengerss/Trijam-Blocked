#include "Window.hpp"

int main(int argc, const char *argv[])
{
    bmt::Windows gameWin("BlockMeThat", 800, 600);

    while (gameWin.isOpen()) {
        sf::Event event;
        while (gameWin.pollEvent()) {
            if (gameWin.getEvent().getType() == sf::Event::Closed)
                gameWin.close();
        }
        gameWin.clear();
        gameWin.display();
    }
    return 0;
}