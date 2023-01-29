#include "Event.hpp"

bmt::Event::Event() :
    _event(sf::Event())
{
}

sf::Event &bmt::Event::getEvent()
{
    return (_event);
}

sf::Event::EventType &bmt::Event::getType()
{
    return (_event.type);
}

sf::Keyboard::Key &bmt::Event::getCode()
{
    return (_event.key.code);
}