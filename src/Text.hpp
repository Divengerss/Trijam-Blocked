//
// Created by dorviande on 1/28/23.
//

#ifndef TRIJAM_BLOCKED_TEXT_HPP
#define TRIJAM_BLOCKED_TEXT_HPP

#include <SFML/Graphics.hpp>

namespace bmt
{
    enum gameStatus {
        INTRO,
        GAME,
        GAMEOVER
    };

    class Text
    {
    public:
        Text();
        Text(const std::string &str);
        Text(const std::string &str, const std::size_t &charSize);
        Text(const std::string &str, const std::size_t &charSize, const sf::Color &col);
        Text(const std::string &str, const std::size_t &charSize, const sf::Color &col, const std::string &fontPath);
        Text(const std::string &str, const sf::Vector2f &pos);
        Text(const std::string &str, const std::size_t &charSize, const sf::Vector2f &pos);
        Text(const std::string &str, const std::size_t &charSize, const sf::Color &col, const sf::Vector2f &pos);
        Text(const std::string &str, const std::size_t &charSize, const sf::Color &col, const std::string &fontPath, const sf::Vector2f &pos);
        Text(const std::string &str, const std::size_t &charSize, const sf::Vector2f &pos, gameStatus status);
        ~Text() = default;

        sf::Text &getText();
        gameStatus &getStatus();
        std::string &getString();

        void setText(const std::string &txt);
        sf::Color _col;

    private:
        sf::Text _txt;
        sf::Font _font;
        std::string _str;
        std::size_t _charSize;
        sf::Vector2f _pos;
        gameStatus _status;
    };
}

#endif //TRIJAM_BLOCKED_TEXT_HPP
