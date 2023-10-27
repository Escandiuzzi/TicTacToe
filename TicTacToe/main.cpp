#include <SFML/Graphics.hpp>
#include <string.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

const std::string PROJECT_PATH = "/Users/luizescandiuzzi/Desktop/TicTacToe/TicTacToe";

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Tic-Tac-Toe");
    CircleShape shape(100.f);
    shape.setFillColor(Color::Blue);
    
    Font font;
    font.loadFromFile(PROJECT_PATH + "/assets/fonts/Roboto/Roboto-Medium.ttf");
    
    Text text("Hello, World!", font);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        //window.draw(shape);
        window.draw(text);
        window.display();
    }

    return 0;
}
