#ifndef NONO_WEAPON_H
#define NONO_WEAPON_H

#include "Item.h"
#include "../Living/Monster/Monster.h"
#include "../Living/Hero/Hero.h"

class Weapon : public Item
{
private:
    int damage;
    bool dualWeild;

public:
    Weapon(const std::string &name);

    void printItem() const;

    //since strength of hero
    //is added to its damage
    void setDamage(int damage);

    //getters
    int getDamage() const;

    bool isDualWeild() const;
};

#endif