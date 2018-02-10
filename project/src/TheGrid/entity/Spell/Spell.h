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
    int requiredLvl;
    int requiredMana;

    int minDamage;
    int maxDamage;

public:
    Spell(const std::string &,int,
          int, int, int, int);
};

#endif //NONO_SPELL_H
