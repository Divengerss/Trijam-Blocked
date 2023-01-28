#include "Window.hpp"

int main(int argc, const char *argv[])
{
    bmt::Windows gameWin("BlockMeThat", 800, 600);
    sf::Font font;
    if (!font.loadFromFile("./assets/font.ttf"))
        return EXIT_FAILURE;
    sf::Text text("Hello SFML", font, 50);

    while (gameWin.isOpen()) {
        sf::Event event;
        while (gameWin.pollEvent()) {
            if (gameWin.getEvent().getType() == sf::Event::Closed)
                gameWin.close();
        }
        gameWin.clear();
        gameWin.getWindow().draw(text);
        gameWin.display();
    }
    return 0;
}
