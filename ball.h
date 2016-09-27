#include <SFML/Graphics.hpp>
#include "constants.h"
class Ball : public sf::Drawable, public sf::Transformable{
	static const float speed;
	
public:
	Ball(float angle);
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	//void onEvent(const sf::Event& event);
	bool checkPoint(sf::Vector2f point);
	float direction; 
	const float radius;
	sf::Vector2f position;
private:
	sf::Sprite ballsprite;
	sf::CircleShape circle;
};
