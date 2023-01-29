/*
** EPITECH PROJECT, 2023
** jam1
** File description:
** Person
*/

#ifndef PERSON_HPP_
#define PERSON_HPP_

#include "Object.hpp"
#include "Button.hpp"
#include <list>

namespace bmt
{
    class Person
    {
    public:
        Person(sf::Vector2f position);
        ~Person();

        bool isBot();

        bmt::Object _icon;
        bmt::Button _block;
        bmt::Button _add;
        sf::Vector2f _position;
        sf::Text _name;
        sf::Font _font;
        bool _bot;
        bool _checked;
    protected:
    private:
    };
}

#endif /* !PERSON_HPP_ */
