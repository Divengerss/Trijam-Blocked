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
#include "Text.hpp"
#include "Audio.hpp"

namespace bmt
{
    class Game
    {
    public:
        Game(const std::string &title, const std::size_t &x, const std::size_t &y);
        void gameloop();
        ~Game();

        Windows &getWindow();
        gameStatus getStatus();
        void setStatus(gameStatus status);
        Person &getPersonAt(std::size_t i);
        Audio &getSoundStart();
        Audio &getSoundGood();
        Audio &getSoundWrong();

        void playStart();
        void playGood();
        void playWrong();

        Windows _windows;
        std::vector<bmt::Person> _persons;
        sf::Clock _timer;
        sf::Clock _framerate;
        sf::Texture _textureBackground;
        sf::Sprite _spriteBackground;
        float _timeLeft = 7;
        int _currentLevel = 0;
        sf::Text _timerText;
        sf::Font _timerFont;
    protected:
    private:
        gameStatus _gameStatus;
        Audio _soundStart;
        Audio _soundGood;
        Audio _soundWrong;
    };
}
#endif /* !GAME_HPP_ */
