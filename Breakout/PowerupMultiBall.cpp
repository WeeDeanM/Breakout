#include "PowerupMultiBall.h"

PowerupMultiBall::PowerupMultiBall(sf::RenderWindow* window, Paddle* paddle, std::vector<Ball*>& balls, float x_pos)
    : PowerupBase(window, paddle, balls, x_pos)
{
    _sprite.setFillColor(extraBallEffectsColour);
}

PowerupMultiBall::~PowerupMultiBall()
{
}

std::pair<POWERUPS, float> PowerupMultiBall::applyEffect()
{
    
    return { multiBall, 5.0f };
}