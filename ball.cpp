
#include "ball.h"
const float Ball::speed = 5.0;

Ball::Ball(float angle) :

	position(50, 50),
	direction(cos(angle * DEG2RAD), sin(angle * DEG2RAD)) {
	setPosition(position);
		
}


void Ball::update(){
	sf::Vector2f distance = direction * speed;
	move(distance);
	
}
