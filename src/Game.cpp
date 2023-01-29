/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Game
*/

#include "Game.hpp"
#include <cmath>

bmt::Game::Game(const std::string &title, const std::size_t &x, const std::size_t &y) : _windows(title, x, y), _gameStatus(INTRO)
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
    sf::Text text;
    sf::Font font;
    font.loadFromFile("assets/font.ttf");
    text.setFont(font);
    text.setPosition(680, 400);
    float timeLeft = 7;
    int currentLevel = 0;
    if (_framerate.getElapsedTime() > sf::seconds(1/60))
    {
        _framerate.restart();
        if (_gameStatus == GAME) {
            _windows._win.draw(_spriteBackground);
            for (int i = 0; i < 10; i++) {
                _windows._win.draw(_persons[i]._icon._sprite);
                _windows._win.draw(_persons[i]._add._sprite);
                _windows._win.draw(_persons[i]._block._sprite);
            }
            timeLeft -= _timer.getElapsedTime().asSeconds();
            text.setString(std::to_string(timeLeft).erase(3, 6));
            _windows._win.draw(text);
            if (std::all_of(_persons.begin(), _persons.end(), [](bmt::Person p){return p._checked == true;}))
                timeLeft = 7 - currentLevel * 0.5;
            if (timeLeft < 0 && !(std::all_of(_persons.begin(), _persons.end(), [](bmt::Person p){return p._checked == true;})))
                return;
        }
        _windows.drawTexts(_gameStatus);
    }
}

bmt::Windows &bmt::Game::getWindow()
{
    return (_windows);
}

bmt::gameStatus bmt::Game::getStatus()
{
    return (_gameStatus);
}

void bmt::Game::setStatus(bmt::gameStatus status)
{
    _gameStatus = status;
}
