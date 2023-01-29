#include "Window.hpp"

int main(int argc, const char *argv[])
{
    bmt::Windows gameWin("BlockMeThat", 800, 600);
    bmt::Text intro("Hello and welcome to BlockMeThat, your goal is to\n"
                    "access and decline friend invites on your favorite\n"
                    "social media! Watch out tho, some people really\n"
                    "want to be your friend but others are just bots\n"
                    "trying to send you unexpected stuff!\n"
                    "You play as a young person, you have just reached\n"
                    "high school yesterday, and you are already famous!\n"
                    "You only have one thing in mind, impress Jean-Yves,\n"
                    "your crush, so he notices you quicky!\n"
                    "Have.. fun I hope!", 30, {30, 30});
    gameWin.setNewText(intro);

    while (gameWin.isOpen()) {
        sf::Event event;
        while (gameWin.pollEvent()) {
            if (gameWin.getEvent().getType() == sf::Event::Closed)
                gameWin.close();
        }
        gameWin.clear();
        gameWin.drawTexts();
        gameWin.display();
    }
    return 0;
}
