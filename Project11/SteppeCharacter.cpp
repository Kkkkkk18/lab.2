#include "SteppeCharacter.h" 

SteppeCharacter::SteppeCharacter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed)
    : Character(name, weapon, hitpoint, strength, money, "степь", "Степное поле", speed),
    enemy("Змея", 6, -3),
    trader("Конина", +4, 2),
    booster("Оазис", +2),
    obstacle("Колючка", -1),
    coins(10) {}
