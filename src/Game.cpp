/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Game
*/

#include "Game.hpp"

bmt::Game::Game(const std::string &title, const std::size_t &x, const std::size_t &y) : _windows(title, x, y)
{
    for (int i = 0; i < 10; i++) {
        _persons.push_back(Person(sf::Vector2f(10, 3.5 + (i * 60))));
    }
    _textureBackground.loadFromFile("assets/background.png");
    _spriteBackground.setTexture(_textureBackground);
}

bmt::Game::~Game()
{
}

void bmt::Game::gameloop() {
    if (_framerate.getElapsedTime() > sf::seconds(1/60))
    {
        _framerate.restart();
        _windows._win.draw(_spriteBackground);
        for (int i = 0; i < 10; i++) {
            _windows._win.draw(_persons[i]._icon._sprite);
            _windows._win.draw(_persons[i]._add._sprite);
            _windows._win.draw(_persons[i]._block._sprite);
        }
    }
}

bmt::Windows &bmt::Game::getWindow()
{
    return (_windows);
}
