#include "Game.hpp"
#include <cstdlib>

int main(int argc, const char *argv[])
{
    srand(time(NULL));
    bmt::Game game("BlockMeThat", 800, 600);
    game._framerate.restart();
    bmt::Text intro("Hello and welcome to BlockMeThat, your goal is to\n"
                    "accept or decline friend invites on your favorite\n"
                    "social media! Watch out tho, some people really\n"
                    "want to be your friend but others are just bots\n"
                    "trying to send you unexpected stuff!\n"
                    "You play as a young person, you have just reached\n"
                    "high school yesterday, and you are already famous!\n"
                    "You only have one thing in mind, impress Jean-Yves,\n"
                    "your crush, so he notices you quicky!\n"
                    "Have.. fun I hope!", 30, {30, 30});
    bmt::Text start("Press enter to continue", 30, {230, 540});
    game.getWindow().setNewText(intro);
    game.getWindow().setNewText(start);

    while (game._windows.isOpen()) {
        sf::Event event;
        while (game._windows.pollEvent()) {
            if (game._windows.getEvent().getType() == sf::Event::Closed)
                game._windows.close();
            if (game._windows.getEvent().getType() == sf::Event::KeyPressed) {
                if (game._windows.getEvent().getCode() == sf::Keyboard::Escape)
                    game._windows.close();
                if (game._windows.getEvent().getCode() == sf::Keyboard::Enter)
                    game.setStatus(bmt::GAME);
            }
        }
        game._windows.clear();
        game.gameloop();
        game._windows.display();
    }
    return 0;
}
