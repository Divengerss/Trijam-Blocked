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
    const std::vector<std::string> names = {"Paul", "Alexander", "Theo", "Alexa", "Frank", "Bob", "Clara",
                                            "Antonio", "Fred", "John", "Max", "Ulysse", "Julian", "Julien",
                                            "Enzo", "Maxime", "Daniel", "Theodor", "Anna", "Alice", "Manon",
                                            "Emily", "Victor", "Marius", "Claude", "Claire", "Clemence"};
    _position = position;
    std::string filename = "assets/ppico" + std::to_string((rand() % 10) + 1) + ".png";
    _icon = Object(filename, (sf::Vector2f) {_position.x, _position.y});
    _block = Button("assets/block.png", (sf::Vector2f) {_position.x + 520, _position.y});
    _add = Button("assets/add.png", (sf::Vector2f) {_position.x + 450, _position.y});
    _font.loadFromFile("assets/font.ttf");
    _name = new bmt::Text((names[rand() % names.size()] + std::to_string(rand() % 10000)), 30, {70, _position.y + 9.5}, bmt::GAME);
    _bot = rand() % 2 == 0 ? true : false;
    if (_bot == true) {
        _name->getText().setString("bot" + std::to_string(rand() % 10000));
    }
    _block._sprite.setScale(0.1, 0.1);
    _add._sprite.setScale(0.1, 0.1);
    _checked = false;
}

bmt::Person::~Person()
{
}

bool bmt::Person::isBot()
{
    return (_bot);
}
