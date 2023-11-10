#include "Character.h"

Character::Character(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, const std::string& location, const std::string& gameField, int speed)
    : name(name), weapon(weapon), hitpoint(hitpoint), strength(strength), money(money), location(location), gameField(gameField), speed(speed) {}

Character Character::createCharacter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, const std::string& location, const std::string& gameField, int speed) {
    Character newCharacter(name, weapon, hitpoint, strength, money, location, gameField, speed);
    return newCharacter;
}
