#include "hero.h"
Hero::Hero(sf::Vector2f position) :
pos(position)
{
	setPosition(pos);
	tx_hero.loadFromFile("Images/horn_front.png");
	spr_hero.setTexture(tx_hero);
}

void Hero::update(){
	//
}

void Hero::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	states.transform *= getTransform();
	target.draw(spr_hero, states);
}
