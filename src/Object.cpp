/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Object
*/

#include "Object.hpp"

bmt::Object::Object() {};
bmt::Object::Object(sf::Texture texture, sf::Vector2f position)
{
    _texture = texture;
    _texture.setSmooth(true);
    _sprite.setTexture(_texture);
    _position = position;
    _sprite.setPosition(_position);
}
bmt::Object::Object(std::string name, sf::Vector2f position)
{
    _texture.loadFromFile(name);
    _texture.setSmooth(true);
    _sprite.setTexture(_texture);
    _position = position;
    _sprite.setPosition(_position);
}

bmt::Object::~Object()
{
}
