#include "MonsterStats.h"

MonsterStats::MonsterStats(int minDamage, int maxDamage,
                           int defense, double dodgeProbability)

                            :minDamage(minDamage),
                             maxDamage(maxDamage),
                             defense(defense),
                             dodgeProbability(dodgeProbability) {}

MonsterStats::MonsterStats(Monster *monster)
{
    minDamage = monster->getMinDamage();
    maxDamage = monster->getMaxDamage();
    defense = monster->getDefense();

    dodgeProbability = monster->getDodgeProbability();
}