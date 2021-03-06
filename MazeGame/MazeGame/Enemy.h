#pragma once
#include "Entity.h"
class Enemy :
	public Entity
{
public:
	Enemy(sf::Vector2f pos, sf::Vector2f size, float speed, sf::Texture tex);
	virtual ~Enemy();

	void Move(float delta);
	void SetDirection(sf::Vector2f newDir);
private:
	sf::RectangleShape m_drawShape;
	sf::Vector2f m_direction;
	sf::Texture enemy_tex;
	float m_speed;
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

