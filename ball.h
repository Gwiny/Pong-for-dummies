#include <SFML/Graphics.hpp>
class Ball : public sf::Drawable, public sf::Transformable{
public:
	Ball();
	void update();
	//void onEvent(const sf::Event& event);
private:
	sf::Vector2f position;
	const float speed;
	float direction;
};
