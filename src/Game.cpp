/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Game
*/

#include "Game.hpp"

bmt::Game::Game(const std::string &title, const std::size_t &x, const std::size_t &y) : _windows(title, x, y), _gameStatus(INTRO),
    _soundStart(bmt::Audio("./assets/start.wav", 70, false)), _soundGood(bmt::Audio("./assets/good.wav", 70, false)),
    _soundWrong(bmt::Audio("./assets/wrong.wav", 70, false))
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
        if (_gameStatus == GAME) {
            _windows._win.draw(_spriteBackground);
            for (int i = 0; i < 10; i++) {
                _windows._win.draw(_persons[i]._icon._sprite);
                _windows._win.draw(_persons[i]._add._sprite);
                _windows._win.draw(_persons[i]._block._sprite);
            }
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

bmt::Person &bmt::Game::getPersonAt(std::size_t i)
{
    return (_persons[i]);
}

bmt::Audio &bmt::Game::getSoundStart()
{
    return (_soundStart);
}

bmt::Audio &bmt::Game::getSoundGood()
{
    return (_soundGood);
}

bmt::Audio &bmt::Game::getSoundWrong()
{
    return (_soundWrong);
}

void bmt::Game::playStart()
{
    _soundStart.getSound().play();
}

void bmt::Game::playGood()
{
    _soundGood.getSound().play();
}

void bmt::Game::playWrong()
{
    _soundWrong.getSound().play();
}
