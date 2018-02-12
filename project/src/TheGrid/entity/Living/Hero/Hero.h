#ifndef NONO_HERO_H
#define NONO_HERO_H

#include "../Living.h"
#include "../../Item/Weapon.h"
#include "../../Item/Armor.h"
#include "../../Item/Potion/Potion.h"
#include "Inventory.h"

class Hero : public Living
{
private:
    int magicPower;
    int strength;
    int dexterity;
    int agility;

    int magicRegen;
    int healthRegen;

    int money;
    int experience;

    Inventory inventory;

    Weapon* equipedWeapon;
    Armor* equipedArmor;

protected:
    virtual void levelUp() = 0;

public:
    Hero(const std::string &name, int strength,
         int dexterity, int agility);

    void displayStats();

    bool equipWeapon(Weapon& weapon);
    bool equipArmor(Armor& armor);

    void addItem(Item& item);
    void removeItem(Item& item);

    void use(Potion& potion);

    void gainExperience(int experiencePoints);

    int getMagicPower() const;
    void setMagicPower(int magicPower);

    int getStrength() const;
    void setStrength(int strength);

    int getDexterity() const;
    void setDexterity(int dexterity);

    int getAgility() const;
    void setAgility(int agility);

    int getMagicRegen() const;
    void setMagicRegen(int magicRegen);

    int getHealthRegen() const;
    void setHealthRegen(int healthRegen);

    int getMoney() const;
    void setMoney(int money);

    int getExperience() const;
    void setExperience(int experience);

    Weapon& getEquipedWeapon() const;
};

#endif //NONO_HERO_H