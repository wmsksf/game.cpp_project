#include "Monster.h"

Monster::Monster(const std::string &name,
                 int minDamage, int maxDamage,
                 int defense, double dodgeProbability)

            :Living(name), level(randomInRange(1, 100)),
             minDamage(minDamage), maxDamage(maxDamage),
             defense(defense),
             dodgeProbability(dodgeProbability) {}

int Monster::getMinDamage() const
{
    return minDamage;
}

int Monster::getMaxDamage() const
{
    return maxDamage;
}

int Monster::getDefense() const
{
    return defense;
}

double Monster::getDodgeProbability() const
{
    return dodgeProbability;
}