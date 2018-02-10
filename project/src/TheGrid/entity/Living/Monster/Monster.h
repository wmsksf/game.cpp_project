//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_MONSTER_H
#define NONO_MONSTER_H

#include "../Living.h"

class Monster : public Living
{
private:
    int minDamage;
    int maxDamage;
    int defense;

    double dodgeProbability;

public:
    Monster(const std::string &, int, int,
            int, int, int, double);

    int getMinDamage() const;
    int getMaxDamage() const;
    int getDefense() const;

    double getDodgeProbability() const;

};


#endif //NONO_MONSTER_H
