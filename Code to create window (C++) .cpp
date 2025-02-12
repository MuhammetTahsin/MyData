#include <iostream>
sf::Graphics
sf::Window

using namespace std;

int main()

RenderWindow app(VideoMode(640,480), "WindowName");  // This code creates the window.

Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
      }
      
                 window.clear();
                 
                 window.display();
    }

return 0;