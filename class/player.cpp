//
// Created by Florian ALBORA on 02/02/2023.
//

#include <iostream>
#include "player.h"
#include <vector>
#include <string>

using namespace std;


Player::Player(string name, int level, int strength, int armor, int heal, int money) {
    pl_name = name;
    pl_level = level;
    pl_strength = strength;
    pl_armor = armor;
    pl_heal = heal;
    pl_money = money;
}

int Player::getlevel(){
    return pl_level;
}

void Player::updateHeal(int value) {
    pl_heal += value;
}

void Player::updateStrength(int value) {
    pl_strength += value;
}

void Player::updateArmor(int value) {
    pl_armor += value;
}

void Player::addToInventory(Item *item) {
    // cout << pl_money << endl;
    if (item->getPrice() <= pl_money) {
        inventory.push_back(item);
        pl_money -= item->getPrice();
        equipableStatus(item);
        cout << item->getName() << " added to inventory" << endl;
    } else {
        cout << item->getName() << " not added to inventory : you don't have enough money" << endl;
    }
}

void Player::equipableStatus(Item *item) {
    item->changeEquipableStatus(item->getLevel() <= pl_level);
}

string Player::equipable(Item *item) {
    if (item->getEquipableStatus() == true) {
        return "can be equipped";
    }
    return "cannot be equipped";
}

void Player::showInventory() {
    cout << "-- INVENTORY --" << endl;
    for (int i = 0; i < inventory.size(); i++) {
        cout << inventory[i]->getName() << " " << equipable(inventory[i]) << endl << endl;
    }
}

void Player::showStats() {
    cout << " " << endl;
    cout << "Player : " << pl_name << endl;
    cout << "Strength : " << pl_strength << endl;
    cout << "Armor : " << pl_armor << endl;
    cout << "Heal : " << pl_heal << endl;
    cout << " " << endl;
}

