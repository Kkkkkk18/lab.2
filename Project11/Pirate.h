#pragma once 
#include "Character.h" 

struct Pirate : public Character {
    Pirate(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed);
};
