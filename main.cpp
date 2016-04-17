#include "ball.cpp"
#include <SFML/Graphics.hpp>

int main()
{
	///SOMETHING LIKE INITIALISATION
	sf::Texture tx_pongstick;

	sf::RectangleShape rect;
	Ball ball(90);
	rect.setFillColor(sf::Color::White);
	rect.setSize(sf::Vector2f(16, 64));


	

	float position_x = 20;
	float position_y = 50;
	int s_speed = 0;
	int move = 0;



	sf::RenderWindow window(sf::VideoMode(800, 600), "HelloWorld");
		while (window.isOpen()){
			sf::Event event;
			while (window.pollEvent(event)){
				if (event.type == sf::Event::Closed)
					window.close();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
					s_speed = -10;
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
					s_speed = 10;
					
			}
			///SOMETHING LIKE AN UPDATE CYCLE
			position_y = +s_speed;
			rect.setPosition(position_x, position_y);
			


			///SOMETHING LIKE DRAW CYCLE
			window.clear(sf::Color::Black);
			window.draw(rect);
			window.display();
		}

		



		return(0);
}