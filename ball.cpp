
#include "ball.h"
const float Ball::speed = 5;

Ball::Ball(float angle) :
direction(angle),
radius(10),
position(500, 500){
	setPosition(position);
	circle.setFillColor(sf::Color::White);
	circle.setRadius(radius);
}


void Ball::update(){
	position.x += cos(DEG2RAD*direction)*speed;
	position.y += sin(DEG2RAD*direction)*speed;
	setPosition(position);

	if (position.y >= APP_HEIGHT-radius) {
		direction = 360 - direction;
	}
	if (position.y <= 0+radius){
		direction = 360 - direction;
	}
}

void Ball::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	states.transform *= getTransform();
	target.draw(circle, states);
}

/*
bool Ball::checkPoint(sf::Vector2f point) {
	float ax = getPosition().x;
	float ay = getPosition().y;

	float px = point.x;
	float py = point.y;

	float sqrDistance = ((ax - px) * (ax - px)) + ((ay - py) * (ay - py));
	return (sqrDistance <= radius * radius);
}*/