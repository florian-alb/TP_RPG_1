//
// Created by Florian ALBORA on 02/02/2023.
//

#ifndef TP_NOTE_PLAYER_H
#define TP_NOTE_PLAYER_H

#include <vector>
#include <string>
#include "item.h"

using namespace std;

class Player {
    string pl_name;
    int pl_level;
    int pl_strength, pl_armor, pl_heal;
    int pl_money;
    vector<Item *> inventory;
    int max_chest=1, max_weapons=2, max_talisman=1;

public:
    Player(string name, int level, int strength, int armor, int heal, int money);

    int getlevel();

    void updateHeal(int value);

    void addToInventory(Item *item);

    void updateStrength(int value);

    void updateArmor(int value);

    void equipableStatus(Item *item);

    string equipable(Item *item);

    void equip(Item *item);

    void showInventory();

    void showStats();

};


#endif //TP_NOTE_PLAYER_H
