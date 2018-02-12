
#include "Spell.h"
#include "../../manage/Random/Random.h"
#include "../../manage/Random/Utils.h"

Spell::Spell(const std::string &name, int price,
             int requiredLvl, int requiredMagicPower,
             int minDamage, int maxDamage)

            :name(name), price(price), requiredLvl(requiredLvl),
            requiredMagicPower(requiredMagicPower), minDamage(minDamage),
            maxDamage(maxDamage) {}

const std::string& Spell::getName() const
{
    return name;
}

int Spell::getPrice() const
{
    return price;
}

int Spell::getRequiredLvl() const
{
    return requiredLvl;
}

int Spell::getRequiredMagicPower() const
{
    return requiredMagicPower;
}

int Spell::getMinDamage() const
{
    return minDamage;
}

int Spell::getMaxDamage() const
{
    return maxDamage;
}

const std::string& Spell::getDescription()
{
    return string_format("%s [%d level] [%d magic power] "
                                 "[[%d, %d] damage range] ",
                         name, requiredLvl,
                         requiredMagicPower,
                        minDamage, maxDamage);
}