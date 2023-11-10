#include "Pirate.h" 

Pirate::Pirate(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed)
    : Character(name, weapon, hitpoint, strength, money, "остров", "Островное поле", speed) {}
