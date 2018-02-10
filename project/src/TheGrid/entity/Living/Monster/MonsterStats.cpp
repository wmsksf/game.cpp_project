//
// Created by admntiasf on 10/2/2018.
//

#include "MonsterStats.h"

MonsterStats::MonsterStats(int minDamage, int maxDamage, int defenseAmount, double dodgeProbability)
        : minDamage(minDamage),
          maxDamage(maxDamage), defenseAmount(defenseAmount), dodgeProbability(dodgeProbability) {}

MonsterStats::MonsterStats(Monster *monster)
{
    //TODO implement
}
