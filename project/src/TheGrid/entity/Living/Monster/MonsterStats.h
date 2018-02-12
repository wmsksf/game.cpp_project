#ifndef NONO_MONSTERSTATS_H
#define NONO_MONSTERSTATS_H

#include "Monster.h"

class MonsterStats
{
protected:
    int minDamage;
    int maxDamage;
    int defense;

    double dodgeProbability;

public:
    MonsterStats(int, int, int, double);

    MonsterStats(Monster* monster);
};

#endif //NONO_MONSTERSTATS_H