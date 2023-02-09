#ifndef ITEM_H
#define ITEM_H


#include <iostream>
#include <string>

using namespace  std;

class Player;

//class Player;

class Item {
    string item_name;
    int item_level;
    int item_price;
    bool is_equiped;
    bool is_equipable;

public:
    Item(string name, int level, int price);

    virtual void equip(Player &player) = 0;

    virtual void unEquip(Player &player) = 0;

    int getPrice();

    string getName();

    int getLevel();

    int getEquipableStatus();

    int getEquipedStatus();

    void changeEquipableStatus(bool status);

    void equipMe();

    void unEquipMe();
};


#endif // ITEM_H
