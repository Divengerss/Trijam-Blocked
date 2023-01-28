/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Person
*/

#include "Person.hpp"
#include<cstdlib>

bmt::Person::Person(sf::Vector2f position)
{
    srand(time(NULL));
    _position = position;
    _icon = Object("ppico" + std::to_string((rand() / 10) + 1) + ".png", _position);
    _block = Button("block.png", _position);
    _add = Button("add.png", _position);
    _font.loadFromFile("font.ttf");
    _name.setFont(_font);
    _name.setString("name");
    _name.setPosition(_position);
    _bot = rand() / 2 == 0 ? true : false;
}

bmt::Person::~Person()
{
}
