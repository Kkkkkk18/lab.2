#include "ForestCharacter.h" 

ForestCharacter::ForestCharacter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed)
    : Character(name, weapon, hitpoint, strength, money, "лес", "Лесное поле", speed),
    enemy("Волк", 5, -4),
    trader("Мед", +3, 2),
    booster("Ягоды", +1),
    obstacle("Болото", -1),
    coins(5) {}
