//
// Created by Florian ALBORA on 02/02/2023.
//

#include <string>
#include "weapon.h"
#include "player.h"

using namespace std;


Weapon::Weapon(string name, int level, int price, int power) : Item(name, level, price), strength(power) {}

void Weapon::equip(Player &player) {
    if (getEquipableStatus() && !(getEquipedStatus())) {
        player.updateStrength(strength);
        equipMe();
    }
}

void Weapon::unEquip(Player &player) {
    player.updateStrength(-strength);
    unEquipMe();
}