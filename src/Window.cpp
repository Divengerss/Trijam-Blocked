#include "Window.hpp"

bmt::Windows::Windows(const std::string &title, const std::size_t &x, const std::size_t &y) :
    _win(sf::RenderWindow(sf::VideoMode(x, y), title)),
    _event(Event()), _score(0)
{
    setTitle(title);
    setSize(x, y);
}

bmt::Windows::Windows(const std::string &title, const std::tuple<std::size_t, std::size_t> &size) :
    _win(sf::RenderWindow(sf::VideoMode(std::get<0>(size), std::get<1>(size)), title)),
    _event(Event()), _score(0)
{
    setTitle(title);
    setSize(size);
}

bmt::Windows::~Windows()
{
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

void bmt::Windows::setNewText(const Text &txt)
{
    _texts.push_back(txt);
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

void bmt::Windows::drawTexts(const bmt::gameStatus &status)
{
    std::size_t textsLen = _texts.size();
    for (std::size_t i = 0; i < textsLen; ++i) {
        if (_texts[i].getStatus() == status)
            _win.draw(_texts[i].getText());
    }
}

sf::RenderWindow &bmt::Windows::getWindow()
{
    return (_win);
}

int &bmt::Windows::getScore()
{
    return (_score);
}
