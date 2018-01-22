//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_SPELL_H
#define NONO_SPELL_H

#include <iostream>
#include <string>
#include "../Living/Hero/Hero.h"

class Spell
{
private:
    std::string name;
    int price;
    int minLvl;
    int damageRange;
    int magicPower;

public:
    Spell(std::string,
          int, int, int, int);

    void removeMagicPower(Hero*);
    void useSpell(Hero*);
};

#endif //NONO_SPELL_H
