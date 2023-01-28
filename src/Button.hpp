#ifndef BUTTON_HPP_
#define BUTTON_HPP_

#include <SFML/Graphics.hpp>

class Button {
    public:
        Button(const std::string textureIdle, const std::string texturePressed);
        Button(sf::Texture textureIdle, sf::Texture texturePressed);
        ~Button();
        bool _clicked;
        sf::Sprite _spritePressed;
        sf::Texture _texturePressed;
        sf::Sprite _spriteIdle;
        sf::Texture _textureIdle;
    protected:
    private:
};

#endif /* !BUTTON_HPP_ */
