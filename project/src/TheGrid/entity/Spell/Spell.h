
#ifndef NONO_SPELL_H
#define NONO_SPELL_H

#include <iostream>
#include <string>
#include "../Living/Monster/Monster.h"
#include "Effect/Effect.h"
#include "../Living/Hero/Hero.h"

class Spell
{
private:
    std::string name;
    int price;
    int requiredLvl;
    int requiredMagicPower;

    //range of damage
    int minDamage;
    int maxDamage;

public:
    Spell(const std::string &name,
        int price, int requiredLvl,
        int requiredMagicPower, int minDamage,
        int maxDamage);

    const std::string& getDescription();

    const std::string &getName() const;
    int getPrice() const;
    int getRequiredLvl() const;
    int getRequiredMagicPower() const;
    int getMinDamage() const;
    int getMaxDamage() const;
};

#endif //NONO_SPELL_H