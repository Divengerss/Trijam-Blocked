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
    std::list<std::string> iconFiles{
        "ppico1.png",
        "ppico2.png",
        "ppico3.png",
        "ppico4.png",
        "ppico5.png",
        "ppico6.png",
        "ppico7.png",
        "ppico8.png",
        "ppico9.png",
        "ppico10.png"};

    class Person
    {
    public:
        Person(sf::Vector2f position);
        ~Person();

    protected:
    private:
        bmt::Object _icon;
        bmt::Button _block;
        bmt::Button _add;
        sf::Vector2f _position;
        sf::Text _name;
        sf::Font _font;
        bool _bot;
    };
}

#endif /* !PERSON_HPP_ */
