//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_HERO_H
#define NONO_HERO_H


#include "../Living.h"
#include "../../Item/Weapon.h"

class Hero : public Living
{
    private:
        int magicPower;
        int strength;
        int dexterity;
        int agility;

        int money;
        int experience;

    public:
        Hero(std::string,
             int, int, int,
             int, int, int,
             int, int);

        void addedStrengthofHero(Weapon*);
        double avoidDamage();

        void checkLevel();
        void levelUp();
};

#endif //NONO_HERO_H
