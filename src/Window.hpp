//
// Created by dorviande on 1/28/23.
//

#ifndef TRIJAM_BLOCKED_WINDOW_HPP
#define TRIJAM_BLOCKED_WINDOW_HPP

#include <string>
#include <tuple>

#include <SFML/Graphics.hpp>

namespace bmt
{
    class Windows {
    public:
        Windows(const std::string &title, const std::size_t &x, const std::size_t &y);
        Windows(const std::string &title, const std::tuple<std::size_t, std::size_t> &size);
        ~Windows() = default;

        void setTitle(const std::string &title);
        void setSize(const std::size_t &x, const std::size_t &y);
        void setSize(const std::tuple<std::size_t, std::size_t> &size);

        std::string &getTitle();
        std::tuple<std::size_t, std::size_t> &getSize();

        bool pollEvent(sf::Event &event);
        bool isOpen();
        void close();
        void clear();
        void display();
    private:
        sf::RenderWindow _win;
        std::string _title;
        std::tuple<std::size_t, std::size_t> _size;
    };
}


#endif //TRIJAM_BLOCKED_WINDOW_HPP
