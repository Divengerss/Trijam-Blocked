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
    const std::vector<std::string> names = {"Paul", "Alexander", "Theo", "Alexa", "Frank", "Bob", "Clara",
                                            "Antonio", "Fred", "John", "Max", "Ulysse", "Julian", "Julien",
                                            "Enzo", "Maxime", "Daniel", "Theodor", "Anna", "Alice", "Manon",
                                            "Emily", "Victor", "Marius", "Claude", "Claire", "Clemence"};
    std::size_t namesSize = names.size();
    bmt::Text name1(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 13}, bmt::GAME);
    bmt::Text name2(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 73}, bmt::GAME);
    bmt::Text name3(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 133}, bmt::GAME);
    bmt::Text name4(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 193}, bmt::GAME);
    bmt::Text name5(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 253}, bmt::GAME);
    bmt::Text name6(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 313}, bmt::GAME);
    bmt::Text name7(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 373}, bmt::GAME);
    bmt::Text name8(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 433}, bmt::GAME);
    bmt::Text name9(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 493}, bmt::GAME);
    bmt::Text name10(names[rand() % namesSize] + std::to_string(rand() % 10000), 30, {70, 553}, bmt::GAME);
    game.getWindow().setNewText(name1);
    game.getWindow().setNewText(name2);
    game.getWindow().setNewText(name3);
    game.getWindow().setNewText(name4);
    game.getWindow().setNewText(name5);
    game.getWindow().setNewText(name6);
    game.getWindow().setNewText(name7);
    game.getWindow().setNewText(name8);
    game.getWindow().setNewText(name9);
    game.getWindow().setNewText(name10);
    for (std::size_t i = 0; i < 10; ++i) {
        if (game.getPersonAt(i)._bot) {
            game._windows._texts[i + 2].setText("bot" + std::to_string(rand() % 10000));
            game._windows._texts[i + 2].getText().setString("bot" + std::to_string(rand() % 10000));
        }
    }
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
