/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Object
*/

#include "Object.hpp"

Object::Object(sf::Texture texture, float x, float y)
{
    _texture = texture;
    _texture.setSmooth(true);
    _sprite.setTexture(_texture);
    _position.x = x;
    _position.y = y;
    _sprite.setPosition(_position);
}
Object::Object(std::string name, float x, float y)
{
    _texture.loadFromFile(name);
    _texture.setSmooth(true);
    _sprite.setTexture(_texture);
    _position.x = x;
    _position.y = y;
    _sprite.setPosition(_position);
}

Object::~Object()
{
}
