#pragma once 
#include <string> 

struct Character {
    std::string name;
    std::string weapon;
    int hitpoint;
    int strength;
    int money;
    std::string location;
    std::string gameField;
    int speed;

    Character(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, const std::string& location, const std::string& gameField, int speed);

    static Character createCharacter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, const std::string& location, const std::string& gameField, int speed);
};

