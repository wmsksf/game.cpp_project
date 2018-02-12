
#include "Spell.h"
#include "../../manage/Random/Random.h"

Spell::Spell(const std::string &name, int price,
             int requiredLvl, int requiredMagicPower,
             int minDamage, int maxDamage)

            :name(name), price(price), requiredLvl(requiredLvl),
            requiredMagicPower(requiredMagicPower), minDamage(minDamage),
            maxDamage(maxDamage) {}


void Spell::cast(Monster* monster)
{
    int damage = randomInRange(minDamage, maxDamage);
    monster->setCurrentHealthPower(monster->getCurrentHealthPower() - damage);
}

void Spell::casted(Hero* hero)
{
    hero->setCurrentMagicPower(hero->getCurrentMagicPower() - requiredMagicPower);
}

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