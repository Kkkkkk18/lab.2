#include "IslandCharacter.h" 

IslandCharacter::IslandCharacter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed)
    : Character(name, weapon, hitpoint, strength, money, "остров", "Островное поле", speed),
    enemy("Абориген", 7, -2),
    trader("Рыба", +2, 2),
    booster("Кокосы", +1),
    obstacle("Зыбучие пески", -1),
    coins(7) {}