//
// Created by Florian ALBORA on 02/02/2023.
//

#include "armor.h"
#include "player.h"
#include <string>

using namespace std;


Armor::Armor(string name, int level, int price, int power) : Item(name, level, price), armor(power) {}

void Armor::equip(Player &player) {
    if (getEquipableStatus() && !(getEquipedStatus())) {
        player.updateArmor(armor);
        equipMe();
    }
}

void Armor::unEquip(Player &player) {
    player.updateArmor(-armor);
    unEquipMe();
}

