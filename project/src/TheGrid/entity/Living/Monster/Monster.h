#ifndef NONO_MONSTER_H
#define NONO_MONSTER_H

#include "../Living.h"
#include "../../../manage/Random/Random.h"

class Monster : public Living
{
protected:
    int minDamage;
    int maxDamage;
    int defense;

    double dodgeProbability;

public:
    Monster(const std::string &name, int level);

    void displayStats();

    int getMinDamage() const;
    int getMaxDamage() const;
    int getDefense() const;
    double getDodgeProbability() const;

    int getExperienceWorth();
    int getMoneyReward();
};

#endif //NONO_MONSTER_H