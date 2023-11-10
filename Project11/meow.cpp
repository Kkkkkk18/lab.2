#include <iostream>
#include <string>
#include "Character.h"
#include "Hunter.h"
#include "Warrior.h"
#include "Pirate.h"
#include "Enemy.h"
#include "Trader.h"
#include "Booster.h"
#include "Obstacle.h"
#include "Reward.h"
#include "ForestCharacter.h"
#include "SteppeCharacter.h"
#include "IslandCharacter.h"

using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int choice;
    cout << "Choose a character (1, 2, or 3): ";
    cin >> choice;

    Hunter character1("охотник", "ружье", 5, 5, 2, 5);
    Warrior character2("воин", "меч", 7, 4, 4, 4);
    Pirate character3("пират", "сабля", 4, 4, 4, 3);

    Character chosenCharacter = Character::createCharacter("K", "a", 0, 0, 0,"", "", 0);

    switch (choice) {
    case 1:
        chosenCharacter = character1;
        break;
    case 2:
        chosenCharacter = character2;
        break;
    case 3:
        chosenCharacter = character3;
        break;
    default:
        cout << "Invalid choice. Defaulting to character 1." << endl;
        chosenCharacter = character1;
        break;
    }


    if (chosenCharacter.location == "лес") {
        chosenCharacter.gameField = "";
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                if (i == 0 && j == 0) {
                    chosenCharacter.gameField += "\n- ";
                }
                else {
                    chosenCharacter.gameField += "- ";
                }
            }
            chosenCharacter.gameField += "\n";
        }
    }
    else if (chosenCharacter.location == "степь") {
        chosenCharacter.gameField = "";
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                if (i == 0 && j == 0) {
                    chosenCharacter.gameField += "\n- ";
                }
                else {
                    chosenCharacter.gameField += "- ";
                }
            }
            chosenCharacter.gameField += "\n";
        }
    }
    else if (chosenCharacter.location == "остров") {
        chosenCharacter.gameField = "";
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                if (i == 0 && j == 0) {
                    chosenCharacter.gameField += "\n- ";
                }
                else {
                    chosenCharacter.gameField += "- ";
                }
            }
            chosenCharacter.gameField += "\n";
        }
    }
    else {
        cout << "Invalid location. Defaulting to forest." << endl;
        chosenCharacter.location = "лес";
        chosenCharacter.gameField = "";
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j) {
                if (i == 0 && j == 0) {
                    chosenCharacter.gameField += "\n- ";
                }
                else {
                    chosenCharacter.gameField += "- ";
                }
            }
            chosenCharacter.gameField += "\n";
        }
    }

    /*/ Отобразим начальное игровое поле
   for (int i = 0; i < 20; ++i) {
       for (int j = 0; j < 20; ++j) {
           if (i == chosenCharacter.posY && j == chosenCharacter.posX) {
               cout << "K ";
           }
           else {
               cout << "- ";
           }
       }
       cout << endl;
   }

   while (true) {
       char move;
       cout << "Enter a move (w/a/s/d to move, q to quit): ";
       cin >> move;

       int dx = 0, dy = 0;
       switch (move) {
       case 'w':
           dy = -1;
           break;
       case 'a':
           dx = -1;
           break;
       case 's':
           dy = 1;
           break;
       case 'd':
           dx = 1;
           break;
       case 'q':
           return 0; // Выход из программы при нажатии 'q'
       }


       int newPosX = chosenCharacter.posX + dx;
       int newPosY = chosenCharacter.posY + dy;

       // Проверяем, не выходим ли за границы поля
       if (newPosX >= 0 && newPosX < 20 && newPosY >= 0 && newPosY < 20) {
           // Очищаем предыдущую позицию персонажа
           chosenCharacter.gameField[chosenCharacter.posY * 41 + chosenCharacter.posX * 2] = '-';
           // Устанавливаем новую позицию персонажа
           chosenCharacter.posX = newPosX;
           chosenCharacter.posY = newPosY;
           chosenCharacter.gameField[newPosY * 41 + newPosX * 2] = 'K';
           // Отображаем обновленное игровое поле
           for (int i = 0; i < 20; ++i) {
               for (int j = 0; j < 20; ++j) {
                   if (i == chosenCharacter.posY && j == chosenCharacter.posX) {
                       cout << "K ";
                   }
                   else {
                       cout << "- ";
                   }
               }
               cout << endl;
           }
       }
   }*/


    cout << "Chosen character: " << chosenCharacter.name << endl;
    cout << "Weapon:" << chosenCharacter.weapon << endl;
    cout << "HP:" << chosenCharacter.hitpoint << endl;
    cout << "Strength:" << chosenCharacter.strength << endl;
    cout << "Money:" << chosenCharacter.money << endl;
    cout << "Speed:" << chosenCharacter.speed << endl;
    cout << "Location: " << chosenCharacter.location << endl;

    if (chosenCharacter.location == "лес") {
        ForestCharacter forestCharacter(chosenCharacter.name, chosenCharacter.weapon, chosenCharacter.hitpoint, chosenCharacter.strength, chosenCharacter.money, chosenCharacter.speed);
        cout << "Enemy in the forest: " << forestCharacter.enemy.name << " (HP: " << forestCharacter.enemy.healtf << ")" << " (Strength: " << forestCharacter.enemy.strength << ")" << endl;
        cout << "Trader in the forest: " << forestCharacter.trader.food << " (BonusHP: " << forestCharacter.trader.healtf << ")" << " (Price: " << forestCharacter.trader.money << ")" << endl;
        cout << "Booster in the forest: " << forestCharacter.booster.name << " (BonusHP: " << forestCharacter.booster.bonus << ")" << endl;
        cout << "Obstacle in the forest: " << forestCharacter.obstacle.name << " (Damage Speed: " << forestCharacter.obstacle.damagespeed << ")" << endl;
        cout << "Reward in the forest: " << forestCharacter.coins.coins << endl;
    }
    else if (chosenCharacter.location == "степь") {
        SteppeCharacter steppeCharacter(chosenCharacter.name, chosenCharacter.weapon, chosenCharacter.hitpoint, chosenCharacter.strength, chosenCharacter.money, chosenCharacter.speed);
        cout << "Enemy in the steppe: " << steppeCharacter.enemy.name << " (HP: " << steppeCharacter.enemy.healtf << ")" << " (Strength: " << steppeCharacter.enemy.strength << ")" << endl;
        cout << "Trader in the steppe: " << steppeCharacter.trader.food << " (BonusHP: " << steppeCharacter.trader.healtf << ")" << " (Price: " << steppeCharacter.trader.money << ")" << endl;
        cout << "Booster in the steppe: " << steppeCharacter.booster.name << " (BonusHP: " << steppeCharacter.booster.bonus << ")" << endl;
        cout << "Obstacle in the steppe: " << steppeCharacter.obstacle.name << " (Damage: " << steppeCharacter.obstacle.damagespeed << ")" << endl;
        cout << "Reward in the steppe: " << steppeCharacter.coins.coins << endl;
    }
    else if (chosenCharacter.location == "остров") {
        IslandCharacter islandCharacter(chosenCharacter.name, chosenCharacter.weapon, chosenCharacter.hitpoint, chosenCharacter.strength, chosenCharacter.money, chosenCharacter.speed);
        cout << "Enemy on the island: " << islandCharacter.enemy.name << " (Strength: " << islandCharacter.enemy.strength << ")" << endl;
        cout << "Trader in the island: " << islandCharacter.trader.food << " (BonusHP: " << islandCharacter.trader.healtf << ")" << " (Price: " << islandCharacter.trader.money << ")" << endl;
        cout << "Booster on the island: " << islandCharacter.booster.name << " (Bonus: " << islandCharacter.booster.bonus << ")" << endl;
        cout << "Obstacle on the island: " << islandCharacter.obstacle.name << " (Damage Speed: " << islandCharacter.obstacle.damagespeed << ")" << endl;
        cout << "Reward in the island: " << islandCharacter.coins.coins << endl;
    }
    else {
        cout << "Invalid location. Defaulting to forest." << endl;
    }

    cout << "Game field: " << chosenCharacter.gameField << endl;

    return 0;
}

