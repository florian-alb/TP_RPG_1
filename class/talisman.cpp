//
// Created by Florian ALBORA on 02/02/2023.
//

#include <string>
#include "talisman.h"
#include "player.h"

using namespace std;


Talisman::Talisman(string name, int level, int price, int power) : Item(name, level, price), heal(power) {}

void Talisman::equip(Player &player) {
    if (getEquipableStatus() && !(getEquipedStatus())) {
        player.updateHeal(heal);
        equipMe();
    }
}

void Talisman::unEquip(Player &player) {
    player.updateHeal(-heal);
    unEquipMe();
}
