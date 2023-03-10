#include "Game.hpp"
#include <cstdlib>
#include <iostream>

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
                    "your crush, so he notices you quickly!\n"
                    "Have.. fun I hope!",
                    30, {30, 30});
    bmt::Text start("Press enter to continue", 30, {230, 540});
    game.getWindow().setNewText(intro);
    game.getWindow().setNewText(start);
    bmt::Text loose("Mission failed! Jean-Yves doesn't like you", 30, {100, 200}, bmt::GAMEOVER);
    bmt::Text restartLoose("Press enter to restart", 30, {240, 290}, bmt::GAMEOVER);
    game.getWindow().setNewText(loose);
    game.getWindow().setNewText(restartLoose);
    bmt::Text score("0", 30, {690, 90}, bmt::GAME);
    game.getWindow().setNewText(score);
    bmt::Text scoreTitle("SCORE", 30, {655, 40}, bmt::GAME);
    game.getWindow().setNewText(scoreTitle);
    while (game._windows.isOpen())
    {
        sf::Event event;
        while (game._windows.pollEvent())
        {
            if (game._windows.getEvent().getType() == sf::Event::Closed)
                game._windows.close();
            if (game._windows.getEvent().getType() == sf::Event::KeyPressed)
            {
                if (game._windows.getEvent().getCode() == sf::Keyboard::Escape)
                    game._windows.close();
                if (game._windows.getEvent().getCode() == sf::Keyboard::Enter)
                {
                    if (game.getStatus() == bmt::INTRO)
                    {
                        game.playStart();
                        game.setStatus(bmt::GAME);
                    }
                    if (game.getStatus() == bmt::GAMEOVER)
                    {
                        game._timer.restart();
                        game.setStatus(bmt::GAME);
                    }
                }
            }
            if (game._windows._event.getEvent().mouseButton.button == sf::Mouse::Left && game._windows.getEvent().getType() == sf::Event::MouseButtonPressed)
            {
                sf::Vector2i mousePosition = sf::Mouse::getPosition(game._windows._win);
                for (int i = 0; i < game._persons.size(); i++)
                {
                    if (mousePosition.x > game._persons[i]._block._sprite.getGlobalBounds().left &&
                        mousePosition.x < game._persons[i]._block._sprite.getGlobalBounds().left + game._persons[i]._block._sprite.getGlobalBounds().width &&
                        mousePosition.y > game._persons[i]._block._sprite.getGlobalBounds().top &&
                        mousePosition.y < game._persons[i]._block._sprite.getGlobalBounds().top + game._persons[i]._block._sprite.getGlobalBounds().height &&
                        game._persons[i]._checked == false)
                    {
                        game._persons[i]._block._clicked = true;
                        game._persons[i]._block._sprite.setColor(sf::Color::Transparent);
                        game._persons[i]._add._sprite.setColor(sf::Color::Transparent);
                        game._persons[i]._checked = true;
                        if (game._persons[i].isBot() == false)
                        {
                            game._persons[i]._name->getText().setFillColor(sf::Color::Red);
                            game.getSoundWrong().getSound().play();
                            if (game._windows.getScore() >= 13)
                            {
                                game._windows.getScore() -= 27;
                                if (game._windows.getScore() < 0)
                                    game._windows.getScore() = 0;
                                game._windows._texts[4].setText(std::to_string(game._windows.getScore()));
                                game._windows._texts[4].getText().setString(std::to_string(game._windows.getScore()));
                            }
                        }
                        else
                        {
                            game._persons[i]._name->getText().setFillColor(sf::Color::Green);
                            game.getSoundGood().getSound().play();
                            game._windows.getScore() += 13;
                            game._windows._texts[4].setText(std::to_string(game._windows.getScore()));
                            game._windows._texts[4].getText().setString(std::to_string(game._windows.getScore()));
                        }
                    }
                    if (mousePosition.x > game._persons[i]._add._sprite.getGlobalBounds().left &&
                        mousePosition.x < game._persons[i]._add._sprite.getGlobalBounds().left + game._persons[i]._add._sprite.getGlobalBounds().width &&
                        mousePosition.y > game._persons[i]._add._sprite.getGlobalBounds().top &&
                        mousePosition.y < game._persons[i]._add._sprite.getGlobalBounds().top + game._persons[i]._add._sprite.getGlobalBounds().height &&
                        game._persons[i]._checked == false)
                    {
                        game._persons[i]._add._clicked = true;
                        game._persons[i]._block._sprite.setColor(sf::Color::Transparent);
                        game._persons[i]._add._sprite.setColor(sf::Color::Transparent);
                        game._persons[i]._checked = true;
                        if (game._persons[i].isBot() == true)
                        {
                            game._persons[i]._name->getText().setFillColor(sf::Color::Red);
                            game.getSoundWrong().getSound().play();
                            if (game._windows.getScore() >= 13)
                            {
                                game._windows.getScore() -= 27;
                                if (game._windows.getScore() < 0)
                                    game._windows.getScore() = 0;
                                game._windows._texts[4].setText(std::to_string(game._windows.getScore()));
                                game._windows._texts[4].getText().setString(std::to_string(game._windows.getScore()));
                            }
                        }
                        else
                        {
                            game._persons[i]._name->getText().setFillColor(sf::Color::Green);
                            game.getSoundGood().getSound().play();
                            game._windows.getScore() += 13;
                            game._windows._texts[4].setText(std::to_string(game._windows.getScore()));
                            game._windows._texts[4].getText().setString(std::to_string(game._windows.getScore()));
                        }
                    }
                }
            }
        }
        game._windows.clear();
        game.gameloop();
        game._windows.display();
    }
    return 0;
}
