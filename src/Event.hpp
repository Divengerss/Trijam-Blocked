//
// Created by dorviande on 1/28/23.
//

#ifndef TRIJAM_BLOCKED_EVENT_HPP
#define TRIJAM_BLOCKED_EVENT_HPP

#include <SFML/Graphics.hpp>

namespace bmt
{
    class Event {
    public:
        Event();
        ~Event() = default;

        sf::Event::EventType &getType();
        sf::Event &getEvent();

    private:
        sf::Event _event;
    };
}

#endif //TRIJAM_BLOCKED_EVENT_HPP
