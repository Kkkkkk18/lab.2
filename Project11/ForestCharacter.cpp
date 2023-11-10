#include "ForestCharacter.h" 

ForestCharacter::ForestCharacter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed)
    : Character(name, weapon, hitpoint, strength, money, "���", "������ ����", speed),
    enemy("����", 5, -4),
    trader("���", +3, 2),
    booster("�����", +1),
    obstacle("������", -1),
    coins(5) {}
