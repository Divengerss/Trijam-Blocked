#include "Window.hpp"

bmt::Windows::Windows(const std::string &title, const std::size_t &x, const std::size_t &y) :
    _win(sf::RenderWindow(sf::VideoMode(x, y), title)),
    _event(Event())
{
    setTitle(title);
    setSize(x, y);
}

bmt::Windows::Windows(const std::string &title, const std::tuple<std::size_t, std::size_t> &size) :
    _win(sf::RenderWindow(sf::VideoMode(std::get<0>(size), std::get<1>(size)), title)),
    _event(Event())
{
    setTitle(title);
    setSize(size);
}

void bmt::Windows::setTitle(const std::string &title)
{
    _title = title;
}

void bmt::Windows::setSize(const std::size_t &x, const std::size_t &y)
{
    std::get<0>(_size) = x;
    std::get<1>(_size) = y;
}

void bmt::Windows::setSize(const std::tuple<std::size_t, std::size_t> &size)
{
    _size = size;
}

std::string &bmt::Windows::getTitle()
{
    return (_title);
}

std::tuple<std::size_t, std::size_t> &bmt::Windows::getSize()
{
    return (_size);
}

bmt::Event &bmt::Windows::getEvent()
{
    return (_event);
}

bool bmt::Windows::pollEvent()
{
    return (_win.pollEvent(_event.getEvent()));
}

bool bmt::Windows::isOpen()
{
    return (_win.isOpen());
}

void bmt::Windows::close()
{
    _win.close();
}

void bmt::Windows::clear()
{
    _win.clear();
}

void bmt::Windows::display()
{
    _win.display();
}
