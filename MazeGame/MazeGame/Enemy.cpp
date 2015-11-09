#include "Enemy.h"


Enemy::Enemy(sf::Vector2f pos, sf::Vector2f size, float speed, sf::Texture tex)
: Entity(pos, size), m_drawShape(size), m_speed(speed)
{
	enemy_tex = tex;
	sprite.setTexture(enemy_tex);
	m_drawShape.setTexture(&enemy_tex);
	m_drawShape.setTextureRect(sf::IntRect(0, 0, 32, 32));
	m_drawShape.setPosition(m_position);
}


Enemy::~Enemy()
{
}

void Enemy::Move(float delta) {
	m_position += m_direction * 10.0f * delta;
	m_drawShape.setPosition(m_position);
}

void Enemy::SetDirection(sf::Vector2f newDir) {
	m_direction = newDir;
}

void Enemy::draw(sf::RenderTarget &target, sf::RenderStates states) const {
	target.draw(m_drawShape, states);
}