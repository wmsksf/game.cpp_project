
#ifndef NONO_ITEMFACTORY_H
#define NONO_ITEMFACTORY_H


#include "NameFactory.h"
#include "../../entity/Item/Item.h"
#include "../../entity/Item/Potion/Potion.h"

class ItemFactory
{
private:
    NameFactory* ItemNameFactory;
    NameFactory* SpellNameFactory;

    Weapon* createWeapon();
    Armor* createArmor();
    Potion* createPotion();

public:
    ItemFactory();

    Item* createItem();
    Spell* createSpell();
};

#endif //NONO_ITEMFACTORY_H