//
// Created by dorviande on 1/28/23.
//

#ifndef TRIJAM_BLOCKED_WINDOW_HPP
#define TRIJAM_BLOCKED_WINDOW_HPP

#include <string>
#include <tuple>

#include "Event.hpp"
#include "Text.hpp"

namespace bmt
{
    class Windows {
    public:
        Windows(const std::string &title, const std::size_t &x, const std::size_t &y);
        Windows(const std::string &title, const std::tuple<std::size_t, std::size_t> &size);
        Windows() = default;
        ~Windows();

        void setTitle(const std::string &title);
        void setSize(const std::size_t &x, const std::size_t &y);
        void setSize(const std::tuple<std::size_t, std::size_t> &size);

        void setNewText(const Text &txt);

        std::string &getTitle();
        std::tuple<std::size_t, std::size_t> &getSize();
        Event &getEvent();
        sf::RenderWindow &getWindow();

        bool pollEvent();
        bool isOpen();
        void close();
        void clear();
        void display();

        void drawTexts(const bmt::gameStatus &status);
        sf::RenderWindow _win;
        std::string _title;
        std::tuple<std::size_t, std::size_t> _size;
        Event _event;
        std::vector<Text> _texts;
    private:
    };
}


#endif //TRIJAM_BLOCKED_WINDOW_HPP
