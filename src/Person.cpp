/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Person
*/

#include "Person.hpp"
#include <cstdlib>

bmt::Person::Person(sf::Vector2f position)
{
    _position = position;
    std::string name = "assets/ppico" + std::to_string((rand() % 10) + 1) + ".png";
    _icon = Object(name, (sf::Vector2f) {_position.x, _position.y});
    _block = Button("assets/block.png", (sf::Vector2f) {_position.x + 520, _position.y});
    _add = Button("assets/add.png", (sf::Vector2f) {_position.x + 450, _position.y});
    _font.loadFromFile("assets/font.ttf");
    _name.setFont(_font);
    _name.setString("name");
    _name.setPosition(_position);
    _bot = rand() % 2 == 0 ? true : false;
    _block._sprite.setScale(0.1, 0.1);
    _add._sprite.setScale(0.1, 0.1);
    _checked = false;
}

bmt::Person::~Person()
{
}
