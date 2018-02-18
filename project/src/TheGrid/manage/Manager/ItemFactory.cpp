
#include "ItemFactory.h"
#include "../../entity/Item/Potion/AgilityPotion.h"
#include "../../entity/Item/Potion/DexterityPotion.h"
#include "../../entity/Item/Potion/HealthPotion.h"
#include "../../entity/Item/Potion/MagicPotion.h"
#include "../../entity/Item/Potion/StrengthPotion.h"
#include "../../entity/Spell/FireSpell.h"
#include "../../entity/Spell/LightingSpell.h"
#include "../../entity/Spell/IceSpell.h"

Item *ItemFactory::createItem()
{
    int itemType = randomInt(3);

    switch (itemType)
    {
        case 0:
            return createArmor();
        case 1:
            return createWeapon();
        case 2:
            return createPotion();
    }

    return nullptr;
}

Weapon *ItemFactory::createWeapon()
{
    return new Weapon(nameFactory->createName("Weapon"));
}

Armor *ItemFactory::createArmor()
{
    return new Armor(nameFactory->createName("Armor"));
}

Potion *ItemFactory::createPotion()
{
    int potionType = randomInt(5);

    switch(potionType)
    {
        case 0:
            return new AgilityPotion(nameFactory->createName("Agility Potion"));
        case 1:
            return new DexterityPotion(nameFactory->createName("Dexterity Potion"));
        case 2:
            return new HealthPotion(nameFactory->createName("Health Potion"));
        case 3:
            return new MagicPotion(nameFactory->createName("Magic Potion"));
        case 4:
            return new StrengthPotion(nameFactory->createName("Strength Potion"));
    }

    return nullptr;
}

Spell *ItemFactory::createSpell()
{
    int spellType = randomInt(3);

    switch(spellType)
    {
        case 0:
            return new FireSpell(nameFactory->createName("Fire Spell"));
        case 1:
            return new IceSpell(nameFactory->createName("Ice Spell"));
        case 2:
            return new LightingSpell(nameFactory->createName("Lighting Spell"));
    }

    return nullptr;
}