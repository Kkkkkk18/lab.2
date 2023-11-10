#pragma once 
#include "Character.h" 

	struct Warrior : public Character {
		Warrior(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed);
	};


