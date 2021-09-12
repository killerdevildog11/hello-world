// written by killerdevildog11 aka Quaylyn Rimer
// 09-12-2021


#include <SFML/Graphics.hpp>
#include <cassert>

int main(  ) {
    sf::RenderWindow Window( sf::VideoMode(600, 360), "Hello World SFML Window" );
    sf::Font font;
    if ( !font.loadFromFile( "./resources/azert.ttf" ) ) {
        return -1;
    }
    sf::Text message( "Hello, World !", font );

    while ( Window.isOpen(  ) ) {

        sf::Event event;
        while ( Window.pollEvent( event ) ) {

            switch ( event.type ) {
            case sf::Event::EventType::Closed:
             Window.close();
                break;
            }
        }

     Window.clear();
     Window.draw(message);
     Window.display();
    }
    return 0;
}

