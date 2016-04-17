#include <SFML/Graphics.hpp>
#include "constants.h"
class Ball : public sf::Drawable, public sf::Transformable{
	static const float speed;
public:
	Ball(float angle);
	void update();
	void draw(/*sf::RenderTarget& target, sf::RenderStates state*/);
	//void onEvent(const sf::Event& event);
private:
	sf::Vector2f position;
	sf::Vector2f direction;
};
