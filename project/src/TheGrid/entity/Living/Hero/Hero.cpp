#include "Hero.h"

Hero::Hero(const std::string& name, int strength,
           int dexterity, int agility)

        :Living(name),level(1),
         magicPower(Random(280, 460)), strength(strength),
         dexterity(dexterity), agility(agility),
         magicRegen(Random(10, 20)), healthRegen(Random(25, 35)),
         money(0), experience(0) {}

void Hero::displayStats()
{
    Living::displayStats();

    std::cout << "magic power: " << magicPower << std::endl;

    std::cout << "strength: " << strength << std::endl;
    std::cout << "dexterity: " << dexterity << std::endl;
    std::cout << "agility: " << agility << std::endl;

    std::cout << "magic regeneration: " << magicRegen << std::endl;
    std::cout << "health regeneration: " << healthRegen << std::endl;

    std::cout << "total money: " << money << std::endl;
    std::cout << "exprerience: " << experience << std::endl;

    std::cout << std::endl << "LEVEL: " << level << std::endl;
}

int Hero::getMagicPower() const
{
    return magicPower;
}

void Hero::setMagicPower(int magicPower)
{
    Hero::magicPower = magicPower;
}

int Hero::getStrength() const
{
    return strength;
}

void Hero::setStrength(int strength)
{
    Hero::strength = strength;
}

int Hero::getDexterity() const
{
    return dexterity;
}

void Hero::setDexterity(int dexterity)
{
    Hero::dexterity = dexterity;
}

int Hero::getAgility() const
{
    return agility;
}

void Hero::setAgility(int agility)
{
    Hero::agility = agility;
}

int Hero::getMagicRegen() const
{
    return magicRegen;
}

void Hero::setMagicRegen(int magicRegen)
{
    Hero::magicRegen = magicRegen;
}

int Hero::getHealthRegen() const
{
    return healthRegen;
}

void Hero::setHealthRegen(int healthRegen)
{
    Hero::healthRegen = healthRegen;
}

int Hero::getMoney() const
{
    return money;
}

void Hero::setMoney(int money)
{
    Hero::money = money;
}

int Hero::getExperience() const
{
    return experience;
}

void Hero::setExperience(int experience)
{
    Hero::experience = experience;
}

Weapon& Hero::getEquipedWeapon() const
{
    return equipedWeapon;
}