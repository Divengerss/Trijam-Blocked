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

    class Game
    {
    public:
        Game(const std::string &title, const std::size_t &x, const std::size_t &y);
        void gameloop();
        ~Game();

        Windows &getWindow();

        Windows _windows;
        std::vector<bmt::Person> _persons;
        sf::Clock _timer;
        sf::Clock _framerate;
        sf::Texture _textureBackground;
        sf::Sprite _spriteBackground;
    protected:
    private:
    };
}
#endif /* !GAME_HPP_ */
