#include "item.h"
#include <string>

using namespace std;

Item::Item(string name, int level, int price) : item_name(name), item_level(level), item_price(price) {
    is_equiped = false;
}

int Item::getPrice() {
    return item_price;
}

string Item::getName() {
    return item_name;
}

int Item::getLevel() {
    return item_level;
}

int Item::getEquipableStatus() {
    return is_equipable;
}

int Item::getEquipedStatus() {
    return is_equiped;
}

void Item::changeEquipableStatus(bool status) {
    is_equipable = status;
}

void Item::equipMe() {
    is_equiped = true;
}

void Item::unEquipMe() {
    is_equiped = false;
    cout << item_name << " unequipped" << endl;
}

