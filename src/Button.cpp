#include "Button.hpp"
#include <iostream>

bmt::Button::Button() {};

bmt::Button::Button(const std::string &texture, sf::Vector2f position)
{
    _position = position;
    _texture = new sf::Texture();
    _texture->loadFromFile(texture);
    _texture->setSmooth(true);
    _sprite.setTexture(*_texture);
    _sprite.setPosition(_position);
}

bmt::Button::Button(sf::Texture &texture, sf::Vector2f position)
{
    _position = position;
    _texture = &texture;
    _texture->setSmooth(true);
    _sprite.setTexture(*_texture);
    _sprite.setPosition(_position);
}

bmt::Button::~Button()
{
}
