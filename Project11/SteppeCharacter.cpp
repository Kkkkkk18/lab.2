#include "SteppeCharacter.h" 

SteppeCharacter::SteppeCharacter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed)
    : Character(name, weapon, hitpoint, strength, money, "�����", "������� ����", speed),
    enemy("����", 6, -3),
    trader("������", +4, 2),
    booster("�����", +2),
    obstacle("�������", -1),
    coins(10) {}
