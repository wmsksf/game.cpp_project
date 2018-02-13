#ifndef NONO_MONSTER_H
#define NONO_MONSTER_H

#include "../Living.h"
#include "../../../manage/Random/Random.h"

class Monster : public Living
{
private:
    int minDamage;
    int maxDamage;
    int defense;

    double dodgeProbability;

public:
    Monster(const std::string &name,
            int minDamage, int maxDamage,
            int defense, double dodgeProbability);

    void displayStats();

    int getMinDamage() const;
    int getMaxDamage() const;
    int getDefense() const;
    double getDodgeProbability() const;
};

#endif //NONO_MONSTER_H