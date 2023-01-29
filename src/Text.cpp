#include "Text.hpp"

bmt::Text::Text()
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

bmt::Text::Text(const std::string &str)
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

bmt::Text::Text(const std::string &str, const std::size_t &charSize)
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

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Color &col)
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

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Color &col, const std::string &fontPath)
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

bmt::Text::Text(const std::string &str, const sf::Vector2f &pos)
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

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Vector2f &pos)
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

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Color &col, const sf::Vector2f &pos)
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

bmt::Text::Text(const std::string &str, const std::size_t &charSize, const sf::Color &col, const std::string &fontPath, const sf::Vector2f &pos)
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
    _txt.setPosition(pos);
}

sf::Text &bmt::Text::getText()
{
    return (_txt);
}
