#pragma once 
#include <string> 

struct Booster {
    std::string name;
    int bonus;

    Booster(const std::string& name, int bonus);

    static Booster createBooster(const std::string& name, int bonus);
};
