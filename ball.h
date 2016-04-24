#include <SFML/Graphics.hpp>
#include "constants.h"
class Ball : public sf::Drawable, public sf::Transformable{
	static const float speed;
	const float radius;
public:
	Ball(float angle);
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	//void onEvent(const sf::Event& event);
	bool checkPoint(sf::Vector2f point);
	float direction; 
	sf::Vector2f position;
private:
	sf::CircleShape circle;
};
