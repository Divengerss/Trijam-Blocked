#include "Button.hpp"

Button::Button(const std::string textureIdle, const std::string texturePressed)
{
    _textureIdle.loadFromFile(textureIdle);
    _texturePressed.loadFromFile(texturePressed);
    _textureIdle.setSmooth(true);
    _texturePressed.setSmooth(true);
    _spriteIdle.setTexture(_textureIdle);
    _spritePressed.setTexture(_texturePressed);
}

Button::Button(sf::Texture textureIdle, sf::Texture texturePressed)
{
    _textureIdle = textureIdle;
    _texturePressed = texturePressed;
    _textureIdle.setSmooth(true);
    _texturePressed.setSmooth(true);
    _spriteIdle.setTexture(_textureIdle);
    _spritePressed.setTexture(_texturePressed);
}

Button::~Button()
{
}
