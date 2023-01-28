#include "Button.hpp"

bmt::Button::Button() {};

bmt::Button::Button(const std::string texture, sf::Vector2f position)
{
    _position = position;
    _texture.loadFromFile(texture);
    _texture.setSmooth(true);
    _sprite.setTexture(_texture);
}

bmt::Button::Button(sf::Texture texture, sf::Vector2f position)
{
    _position = position;
    _texture = texture;
    _texture.setSmooth(true);
    _sprite.setTexture(_texture);
}

bmt::Button::~Button()
{
}
