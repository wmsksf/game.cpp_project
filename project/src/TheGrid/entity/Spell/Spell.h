
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
    std::string category;

    int price;
    int requiredLvl;
    int requiredMagicPower;

    int minDamage;
    int maxDamage;

public:
    Spell(const std::string &name,
        int price, int requiredLvl,
        int requiredMagicPower, int minDamage,
        int maxDamage);

    std::string getDescription();

    virtual Spell* clone() = 0;

    const std::string &getName() const;
    void setName(const std::string &name);

    int getPrice() const;
    void setPrice(int price);

    int getRequiredLvl() const;
    void setRequiredLvl(int requiredLvl);

    int getRequiredMagicPower() const;
    void setRequiredMagicPower(int requiredMagicPower);

    int getMinDamage() const;
    void setMinDamage(int minDamage);

    int getMaxDamage() const;
    void setMaxDamage(int maxDamage);

    virtual Effect *getEffect() = 0;
};

#endif //NONO_SPELL_H