#include "IslandCharacter.h" 

IslandCharacter::IslandCharacter(const std::string& name, const std::string& weapon, int hitpoint, int strength, int money, int speed)
    : Character(name, weapon, hitpoint, strength, money, "������", "��������� ����", speed),
    enemy("��������", 7, -2),
    trader("����", +2, 2),
    booster("������", +1),
    obstacle("������� �����", -1),
    coins(7) {}