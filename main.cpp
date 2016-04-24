#include "ball.cpp"
#include <SFML/Graphics.hpp>

int main()
{
	///SOMETHING LIKE INITIALISATION
	sf::Texture tx_pongstick;

	sf::RectangleShape rect;
	Ball ball(90);
	float rect_width = 16.0;
	float rect_height = 64.0;
	rect.setFillColor(sf::Color::White);
	rect.setSize(sf::Vector2f(rect_width, rect_height));


	

	sf::Vector2f position(20, 50);
	float s_speed = 0;
	int move = 0;



	sf::RenderWindow window(sf::VideoMode(800, 600), "HelloWorld");
		while (window.isOpen()){
			sf::Event event;
			while (window.pollEvent(event)){
				if (event.type == sf::Event::Closed)
					window.close();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
					s_speed = -0.2;
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
					s_speed = 0.2;
				else
					s_speed = 0;
					
			}
			///SOMETHING LIKE AN UPDATE CYCLE
			position.y += s_speed;
			rect.setPosition(position);
			ball.update();
			if (ball.position.x = position.x && (ball.position.y < position.y + rect_height/2 && ball.position.y > position.y - rect_height/2 ) ){
				ball.direction = 360 - ball.direction - position.y - ball.position.y;
			}
			


			///SOMETHING LIKE DRAW CYCLE
			window.clear(sf::Color::Black);
			window.draw(rect);
			window.draw(ball);
			window.display();
			
		}

		



		return(0);
}