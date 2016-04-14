
#include "ball.h"
const float Ball::speed = 5.0;

Ball::Ball() :

	position(50, 50),
	direction = 0.0 {
	setPosition(position);
		
}


Ball::update(){
	sf::Vector2f distance(direction * speed);
	move(distance);
	
}
