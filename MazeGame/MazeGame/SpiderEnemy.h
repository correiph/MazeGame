#pragma once
#include "Enemy.h"
class SpiderEnemy :
	public Enemy
{
public:
	SpiderEnemy(sf::Vector2f pos, sf::Vector2f size, sf::Texture tex);
	~SpiderEnemy();
private:
};

