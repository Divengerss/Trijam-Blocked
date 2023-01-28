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

void bmt::Windows::setNewText(const std::string &str)
{
    Text txt(str);
    _texts.push_back(txt);
}

void bmt::Windows::setNewText(const std::string &str, const std::size_t &charSize)
{
    Text txt(str, charSize);
    _texts.push_back(txt);
}

void bmt::Windows::setNewText(const std::string &str, const std::size_t &charSize, const sf::Color &col)
{
    Text txt(str, charSize, col);
    _texts.push_back(txt);
}

void bmt::Windows::setNewText(const std::string &str, const std::size_t &charSize, const sf::Color &col, const std::string &fontPath)
{
    Text txt(str, charSize, col, fontPath);
    _texts.push_back(txt);
}

void bmt::Windows::setNewText(const std::string &str, const std::size_t &charSize, const std::string &fontPath)
{
    Text txt(str, charSize, sf::Color(255, 255, 255, 255), fontPath);
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

void bmt::Windows::drawTexts()
{
    std::size_t textsLen = _texts.size();
    for (std::size_t i = 0; i < textsLen; ++i)
        _win.draw(_texts[i].getText());
}

sf::RenderWindow &bmt::Windows::getWindow()
{
    return (_win);
}