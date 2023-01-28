#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include "SFML/Graphics.hpp"
namespace bmt
{
    class Object
    {
    public:
        Object();
        Object(sf::Texture texture, sf::Vector2f position);
        Object(std::string name, sf::Vector2f position);
        ~Object();

    protected:
    private:
        sf::Texture _texture;
        sf::Sprite _sprite;
        sf::Vector2f _position;
    };
}

#endif /* !OBJECT_HPP_ */
