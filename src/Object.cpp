/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Object
*/

#include "Object.hpp"
#include <iostream>

bmt::Object::Object() {};
bmt::Object::Object(sf::Texture &texture, sf::Vector2f position)
{
    std::cout << "ouais la team" << std::endl;
    _texture = &texture;
    _texture->setSmooth(true);
    _sprite.setTexture(*_texture);
    _position = position;
    _sprite.setPosition(_position);
    _sprite.setScale(0.25, 0.25);
}
bmt::Object::Object(std::string &name, sf::Vector2f position)
{
    _texture = new sf::Texture();
    _texture->loadFromFile(name);
    _texture->setSmooth(true);
    _sprite.setTexture(*_texture);
    _position = position;
    _sprite.setPosition(_position);
    _sprite.setScale(0.25, 0.25);
}

bmt::Object::~Object()
{
}
