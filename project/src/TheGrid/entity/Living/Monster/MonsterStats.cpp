#include "MonsterStats.h"

MonsterStats::MonsterStats(Monster *monster)
{
    minDamage = monster->getMinDamage();
    maxDamage = monster->getMaxDamage();
    defense = monster->getDefense();

    dodgeProbability = monster->getDodgeProbability();
}

int MonsterStats::getMinDamage() const
{
    return minDamage;
}

void MonsterStats::setMinDamage(int minDamage)
{
    MonsterStats::minDamage = minDamage;
}

int MonsterStats::getMaxDamage() const
{
    return maxDamage;
}

void MonsterStats::setMaxDamage(int maxDamage)
{
    MonsterStats::maxDamage = maxDamage;
}

int MonsterStats::getDefense() const
{
    return defense;
}

void MonsterStats::setDefense(int defense)
{
    MonsterStats::defense = defense;
}

double MonsterStats::getDodgeProbability() const
{
    return dodgeProbability;
}

void MonsterStats::setDodgeProbability(double dodgeProbability)
{
    MonsterStats::dodgeProbability = dodgeProbability;
}