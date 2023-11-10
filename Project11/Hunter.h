#pragma once 
#include "Character.h" 

struct Hunter : public Character {
    Hunter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed);
};


