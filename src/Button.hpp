#ifndef BUTTON_HPP_
#define BUTTON_HPP_

#include <SFML/Graphics.hpp>

namespace bmt
{
    class Button
    {
    public:
        Button(const std::string &texture, sf::Vector2f position);
        Button(sf::Texture &texture, sf::Vector2f position);
        Button();
        ~Button();
        bool _clicked;
        sf::Sprite _sprite;
        sf::Texture *_texture;
        sf::Vector2f _position;

    protected:
    private:
    };
}
#endif /* !BUTTON_HPP_ */
