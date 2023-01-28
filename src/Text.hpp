//
// Created by dorviande on 1/28/23.
//

#ifndef TRIJAM_BLOCKED_TEXT_HPP
#define TRIJAM_BLOCKED_TEXT_HPP

#include <SFML/Graphics.hpp>

namespace bmt
{
    class Text
    {
    public:
        Text();
        Text(const std::string &str);
        Text(const std::string &str, const std::size_t &charSize);
        Text(const std::string &str, const std::size_t &charSize, const sf::Color &col);
        Text(const std::string &str, const std::size_t &charSize, const sf::Color &col, const std::string &fontPath);
        ~Text() = default;

        sf::Text &getText();

    private:
        sf::Text _txt;
        sf::Font _font;
        std::string _str;
        std::size_t _charSize;
        sf::Color _col;
    };
}

#endif //TRIJAM_BLOCKED_TEXT_HPP
