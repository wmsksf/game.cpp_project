//
// Created by admntiasf on 10/2/2018.
//

#ifndef NONO_MONSTERSTATS_H
#define NONO_MONSTERSTATS_H


#include "Monster.h"

class MonsterStats {
public:
    int minDamage;
    int maxDamage;
    int defenseAmount;

    double dodgeProbability;

public:
    MonsterStats(int minDamage, int maxDamage, int defenseAmount, double dodgeProbability);

    MonsterStats(Monster* monster);


};


#endif //NONO_MONSTERSTATS_H
