#include <SFML/Graphics.hpp>
#include "player.h"
#include "bullet.h"

float x = 390.f;
float y = 290.f;
#define width 800
#define height 600

int main()
{
    sf::RenderWindow window(sf::VideoMode(width, height,32), "SFML works!");
    sf::CircleShape shape(10.f);

    Player p(390.f, 290.f);

    // Generate starfield
    sf::Image starsImg;
    starsImg.create(width, height, sf::Color::Black);
    int numStars = rand() % 20 + 490;
    for (int i = 0; i < numStars; i++) {
        int x = rand() % (int)width;
        int y = rand() % (int)height;
        sf::Color color(255, 255, 255, rand() % 50 + 50);
        starsImg.setPixel(x, y, color);
    }
    sf::Texture starsTexture;
    starsTexture.loadFromImage(starsImg);
    sf::Sprite stars;
    stars.setTexture(starsTexture);

    sf::Clock deltaClock;
    sf::Time dt;
    while (window.isOpen()) {

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
            window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
            p.move(-500,0,dt.asSeconds());
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
            p.move(500,0,dt.asSeconds());
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            p.move(0,-500,dt.asSeconds());
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
            p.move(0,500,dt.asSeconds());
        }

        shape.setPosition(p.x,p.y);

        window.clear();
        window.draw(stars);
        window.draw(shape);
        window.display();
        dt = deltaClock.restart();
    }

    return 0;
}