//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_WEAPON_H
#define NONO_WEAPON_H

#include "Item.h"
#include "../Living/Monster/Monster.h"
#include "../Living/Hero/Hero.h"

class Weapon : public Item
{
    private:
        int damageAmount;
        bool bothHands;

    public:
        Weapon(std::string,
               int, int,
               int, bool);

    void damageOpponent(Monster*);
    void moreDamage(int);
};

#endif
