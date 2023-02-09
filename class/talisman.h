//
// Created by Florian ALBORA on 02/02/2023.
//

#ifndef TP_NOTE_TALISMAN_H
#define TP_NOTE_TALISMAN_H

#include "item.h"
#include <string>


using namespace std;

class Talisman : public Item {
    int heal;

public:
    Talisman(string name, int level, int price, int power);

    virtual void equip(Player &player);

    virtual void unEquip(Player &player);
};


#endif //TP_NOTE_TALISMAN_H
