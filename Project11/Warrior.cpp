
#include "Warrior.h" 

Warrior::Warrior(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed)
    : Character(name, weapon, hitpoint, strength, money, "степь", "Степное поле", speed) {}
