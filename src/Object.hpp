#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include "SFML/Graphics.hpp"
namespace bmt
{
    class Object
    {
    public:
        Object(sf::Texture texture, float x, float y);
        Object(std::string name, float x, float y);
        ~Object();

    protected:
    private:
        sf::Texture _texture;
        sf::Sprite _sprite;
        sf::Vector2f _position;
    };
}

#endif /* !OBJECT_HPP_ */
