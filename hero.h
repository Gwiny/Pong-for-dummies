#include <SFML/Graphics.hpp>
class Hero : public sf::Drawable, public sf::Transformable
{
public:
	sf::Vector2f pos;
	Hero(sf::Vector2f position);
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
private:
	sf::Sprite spr_hero;
	sf::Texture tx_hero;
};