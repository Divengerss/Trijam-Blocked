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
        _persons.push_back(Person(sf::Vector2f(300, 300 + i * 50)));
    }
    _textureBackground.loadFromFile("assets/background.png");
    _spriteBackground.setTexture(_textureBackground);
}

bmt::Game::~Game()
{
}
