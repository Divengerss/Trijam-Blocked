/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Game
*/

#ifndef GAME_HPP_
#define GAME_HPP_

#include <vector>
#include <memory>
#include "Window.hpp"
#include "Person.hpp"

namespace bmt
{
    enum gameStatus {
        INTRO,
        GAME
    };

    class Game
    {
    public:
        Game(const std::string &title, const std::size_t &x, const std::size_t &y);
        void gameloop();
        ~Game();

        Windows &getWindow();
        gameStatus getStatus();
        void setStatus(gameStatus status);

        Windows _windows;
        std::vector<bmt::Person> _persons;
        sf::Clock _timer;
        sf::Clock _framerate;
        sf::Texture _textureBackground;
        sf::Sprite _spriteBackground;
    protected:
    private:
        gameStatus _gameStatus;
    };
}
#endif /* !GAME_HPP_ */
