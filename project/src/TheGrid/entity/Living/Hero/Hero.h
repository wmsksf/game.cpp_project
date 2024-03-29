
#ifndef NONO_HERO_H
#define NONO_HERO_H

#include "../Living.h"
#include "../../Item/Weapon.h"
#include "../../Item/Armor.h"
#include "Inventory.h"
#include "../../Spell/Spell.h"

class Potion;

class Hero : public Living
{
protected:
	int maxMagicPower;
    int currentMagicPower;

    int strength;
    int dexterity;
    int agility;

    int magicRegen;

    int money;
    int experience;

    Weapon* equipedWeapon;
    Armor* equipedArmor;

	int experienceForLevel;

	Inventory inventory;

protected:
    virtual void levelUp();

public:
    Hero(const std::string &name);

	Inventory &getInventory();

	void addItem(Item* item);
	Item* getItem(const std::string& name);

	void addSpell(Spell* spell);
	Spell* getSpell(const std::string& name);

	void removeItem(Item* item);
	void removeSpell(Spell* spell);

	void printInventory();
	void printItemsByCategory(const std::string &category);
	void printSpells();

	void displayStats();

    void equipWeapon(Weapon* weapon);
    void equipArmor(Armor* armor);

    void use(Potion* potion);

    void gainExperience(int experiencePoints);

	void restoreMagicPower(int magicPoints);

	int getMaxMagicPower() const;
	void setMaxMagicPower(int maxMagicPower);

	int getCurrentMagicPower() const;
	void setCurrentMagicPower(int currentMagicPower);

	int getStrength() const;
    void setStrength(int strength);

    int getDexterity() const;
    void setDexterity(int dexterity);

    int getAgility() const;
    void setAgility(int agility);

    int getMagicRegen() const;
    void setMagicRegen(int magicRegen);

    int getMoney() const;
    void setMoney(int money);

    int getExperience() const;

    Weapon* getEquipedWeapon() const;

	Armor* getEquipedArmor() const;
};

#endif //NONO_HERO_H