
#include "Hunter.h" 

Hunter::Hunter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed)
    : Character(name, weapon, hitpoint, strength, money, "лес", "Лесное поле", speed) {}
