//
// Created by admntiasf on 16/1/2018.
//

#include <netinet/in.h>
#include "Hero.h"

Hero::Hero(const std::string& name, int hp,
           int magicPower,
           int strength,
           int dexterity,
           int agility,
           int magicRegen,
           int healthRegen
) : Living(name, hp),

    magicPower(magicPower), strength(strength), dexterity(dexterity), agility(agility), magicRegen(magicRegen),
    healthRegen(healthRegen) {}

int Hero::getMagicPower() const {
    return magicPower;
}

void Hero::setMagicPower(int magicPower) {
    Hero::magicPower = magicPower;
}

int Hero::getStrength() const {
    return strength;
}

void Hero::setStrength(int strength) {
    Hero::strength = strength;
}

int Hero::getDexterity() const {
    return dexterity;
}

void Hero::setDexterity(int dexterity) {
    Hero::dexterity = dexterity;
}

int Hero::getAgility() const {
    return agility;
}

void Hero::setAgility(int agility) {
    Hero::agility = agility;
}

int Hero::getMagicRegen() const {
    return magicRegen;
}

void Hero::setMagicRegen(int magicRegen) {
    Hero::magicRegen = magicRegen;
}

int Hero::getHealthRegen() const {
    return healthRegen;
}

void Hero::setHealthRegen(int healthRegen) {
    Hero::healthRegen = healthRegen;
}

int Hero::getMoney() const {
    return money;
}

void Hero::setMoney(int money) {
    Hero::money = money;
}

int Hero::getExperience() const {
    return experience;
}

void Hero::setExperience(int experience) {
    Hero::experience = experience;
}

Weapon &Hero::getEquipedWeapon() const {
    return equipedWeapon;
}
