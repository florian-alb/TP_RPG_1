#include <vector>
#include "class/player.h"
#include "class/weapon.h"
#include "class/armor.h"
#include "class/talisman.h"

using namespace std;


int main() {

    Weapon *swordOfDeath = new Weapon("swordOfDeath", 10, 1000, 10);
    Weapon *baseSword = new Weapon("baseSword", 2, 200, 2);
    Armor *armorOfDeath = new Armor("armorOfDeath", 10, 1000, 4);
    Armor *peonArmor = new Armor("peonArmor", 1, 100, 1);
    Talisman *talismanOfDeath = new Talisman("talismanOfDeath", 10, 1000, 3);
    Talisman *talismanOfTotalTRegeneration = new Talisman("talismanOfTotalTRegeneration", 50, 2000, 5);

    Player bob("Bob", 5, 10, 10, 10, 2500);

    bob.addToInventory(swordOfDeath);
    bob.addToInventory(baseSword);
    bob.addToInventory(talismanOfDeath);
    bob.addToInventory(armorOfDeath);

    swordOfDeath->equip(bob);
    baseSword->equip(bob);
    talismanOfDeath->equip(bob);
    armorOfDeath->equip(bob);

    bob.showStats();

    bob.showInventory();

    baseSword->unEquip(bob);

    bob.showStats();

    return 0;
}