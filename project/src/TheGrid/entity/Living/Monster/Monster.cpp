//
// Created by admntiasf on 16/1/2018.
//

#include "Monster.h"

Monster::Monster(const std::string &name, int level,
                 int hp, int minDamage, int maxDamage,
                 int defense, double dodgeProbability)

                :Living(name, level, hp),
                 minDamage(minDamage),
                 maxDamage(maxDamage),
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