#pragma once 
#include "Character.h" 
#include "Enemy.h"
#include "Trader.h"
#include "Booster.h"
#include "Obstacle.h"
#include "Reward.h"

struct IslandCharacter : public Character {
    Enemy enemy;    
    Trader trader;
    Booster booster;    
    Obstacle obstacle;
    Reward coins;

    IslandCharacter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed);
};
