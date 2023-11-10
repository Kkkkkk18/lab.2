#pragma once 
#include <string> 

struct Enemy {
    std::string name;
    int healtf;
    int strength;

    Enemy(const std::string& name, int hitpoint, int strength);

};
