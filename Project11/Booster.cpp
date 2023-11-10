#include "Booster.h" 

Booster::Booster(const std::string& name, int bonus)
    : name(name), bonus(bonus) {}

Booster Booster::createBooster(const std::string& name, int bonus) {
    Booster newBooster(name, bonus);
    return newBooster;
}
