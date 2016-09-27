#include "ball.cpp"
#include "hero.cpp"

int main()
{
	///SOMETHING LIKE INITIALISATION
	sf::Texture tx_pongstick;

	sf::RectangleShape rect;
	sf::RectangleShape wall;
	Ball ball(130);
	Hero hero(sf::Vector2f(20,20));
	float rect_width = 16.0;
	float rect_height = 100.0;
	rect.setFillColor(sf::Color::White);
	wall.setFillColor(sf::Color::White);
	wall.setSize(sf::Vector2f(2.0, APP_HEIGHT));
	wall.setPosition(sf::Vector2f(400,0));
	rect.setSize(sf::Vector2f(rect_width, rect_height));


	

	sf::Vector2f position(20, 50);
	float s_speed = 0;
	int move = 0;



	sf::RenderWindow window(sf::VideoMode(800, 600), "HelloWorld");
	window.setVerticalSyncEnabled(true);
		while (window.isOpen()){
			sf::Event event;
			while (window.pollEvent(event)){
				if (event.type == sf::Event::Closed)
					window.close();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
					s_speed = -5;
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
					s_speed = 5;
				else
					s_speed = 0;
					
			}
			///SOMETHING LIKE AN UPDATE CYCLE
			position.y += s_speed;
			rect.setPosition(position);
			ball.update();

			if ((ball.position.x - ball.radius <= position.x) && (ball.position.y+ball.radius < position.y + rect_height) && (ball.position.y - ball.radius > position.y - rect_height) || (ball.position.x + ball.radius >= APP_WIDTH) ) {
				ball.direction = 180 - ball.direction;
			}
			///SOMETHING LIKE DRAW CYCLE
			window.clear(sf::Color::Black);
			window.draw(rect);
			window.draw(ball);
			window.draw(wall);
			window.draw(hero);
			window.display();
			
		}

		



		return(0);
}