
#include "ball.h"
const float Ball::speed = 5.0;

Ball::Ball(float angle) :
	direction(angle),
	position(50, 50){
	setPosition(position);
	circle.setFillColor(sf::Color::White);
	circle.setRadius(10);		
}


void Ball::update(){
	position.x += cos(direction)*speed;
	position.y += sin(direction)*speed;
	setPosition(position);
}

void Ball::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(circle, states);
}