
#include "ball.h"

Ball::Ball()
{
	position(APP_WIDTH/2,APP_HEIGHT/2)
	speed = 5.0;
	direction = 0;
	SetPosition(position)
}

Ball::update(){
	sf::Vector2f distance = direction * speed;
	move(distance);
	
}