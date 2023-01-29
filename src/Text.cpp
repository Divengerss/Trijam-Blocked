#include "Text.hpp"

bmt::Text::Text() : _status(INTRO)
{
    _charSize = 30UL;
    _col = sf::Color(255, 255, 255, 255);
    if (!_font.loadFromFile("./assets/font.ttf"))
        throw std::runtime_error("Failed to load font file.");
    _str = "No text entered";
    _txt = sf::Text(_str, _font);
    _txt.setCharacterSize(_charSize);
    _txt.setFillColor(_col);
    _txt.setFont(_font);
    _txt.setString(_str);
}

bmt::Text::Text(const std::string &str) : _status(INTRO)
{
    _charSize = 30UL;
    _str = str;
    _col = sf::Color(255, 255, 255, 255);
    if (!_font.loadFromFile("./assets/font.ttf"))
        throw std::runtime_error("Failed to load font file.");
    _txt = sf::Text(_str, _font);
    _txt.setCharacterSize(_charSize);
    _txt.setFillColor(_col);
    _txt.setFont(_font);
    _txt.setString(_str);
}

bmt::Text::Text(const std::string &str, const std::size_t &charSize) : _status(INTRO)
{
    _charSize = charSize;
    _str = str;
    _col = sf::Color(255, 255, 255, 255);
    if (!_font.loadFromFile("./assets/font.ttf"))
        throw std::runtime_error("Failed to load font file.");
    _txt = sf::Text(_str, _font);
    _txt.setCharacterSize(_charSize);
    _txt.setFillColor(_col);
    _txt.setFont(_font);
    _txt.setString(_str);
}

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Color &col) : _status(INTRO)
{
    _charSize = charSize;
    _str = str;
    _col = col;
    if (!_font.loadFromFile("./assets/font.ttf"))
        throw std::runtime_error("Failed to load font file.");
    _txt = sf::Text(_str, _font);
    _txt.setCharacterSize(_charSize);
    _txt.setFillColor(_col);
    _txt.setFont(_font);
    _txt.setString(_str);
}

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Color &col, const std::string &fontPath) : _status(INTRO)
{
    _charSize = charSize;
    _str = str;
    _col = col;
    if (!_font.loadFromFile(fontPath))
        throw std::runtime_error("Failed to load font file.");
    _txt = sf::Text(_str, _font);
    _txt.setCharacterSize(_charSize);
    _txt.setFillColor(_col);
    _txt.setFont(_font);
    _txt.setString(_str);
}

bmt::Text::Text(const std::string &str, const sf::Vector2f &pos) : _status(INTRO)
{
    _charSize = 30UL;
    _str = str;
    _col = sf::Color(255, 255, 255, 255);
    if (!_font.loadFromFile("./assets/font.ttf"))
        throw std::runtime_error("Failed to load font file.");
    _txt = sf::Text(_str, _font);
    _txt.setCharacterSize(_charSize);
    _txt.setFillColor(_col);
    _txt.setFont(_font);
    _txt.setString(_str);
    _txt.setPosition(pos);
}

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Vector2f &pos) : _status(INTRO)
{
    _charSize = charSize;
    _str = str;
    _col = sf::Color(255, 255, 255, 255);
    if (!_font.loadFromFile("./assets/font.ttf"))
        throw std::runtime_error("Failed to load font file.");
    _txt = sf::Text(_str, _font);
    _txt.setCharacterSize(_charSize);
    _txt.setFillColor(_col);
    _txt.setFont(_font);
    _txt.setString(_str);
    _txt.setPosition(pos);
}

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Color &col, const sf::Vector2f &pos) : _status(INTRO)
{
    _charSize = charSize;
    _str = str;
    _col = col;
    if (!_font.loadFromFile("./assets/font.ttf"))
        throw std::runtime_error("Failed to load font file.");
    _txt = sf::Text(_str, _font);
    _txt.setCharacterSize(_charSize);
    _txt.setFillColor(_col);
    _txt.setFont(_font);
    _txt.setString(_str);
    _txt.setPosition(pos);
}

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Vector2f &pos, gameStatus status)
{
    _charSize = charSize;
    _str = str;
    _status = status;
    _col = sf::Color(255, 255, 255, 255);
    if (!_font.loadFromFile("./assets/font.ttf"))
        throw std::runtime_error("Failed to load font file.");
    _txt = sf::Text(_str, _font);
    _txt.setCharacterSize(_charSize);
    _txt.setFillColor(_col);
    _txt.setFont(_font);
    _txt.setString(_str);
    _txt.setPosition(pos);
}

bmt::gameStatus &bmt::Text::getStatus()
{
    return (_status);
}

sf::Text &bmt::Text::getText()
{
    return (_txt);
}

void bmt::Text::setText(const std::string &txt)
{
    _str = txt;
}

std::string &bmt::Text::getString()
{
    return (_str);
}