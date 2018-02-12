#ifndef NONO_MONSTER_H
#define NONO_MONSTER_H

#include <vector>
#include "../Living.h"
#include "../../../manage/Random/Random.h"
#include "../../Spell/Effect/Effect.h"

class Monster : public Living
{
private:
    int minDamage;
    int maxDamage;
    int defense;

    double dodgeProbability;

    std::vector<Effect*> effects;

public:
    Monster(const std::string &name,
            int minDamage, int maxDamage,
            int defense, double dodgeProbability);

    int getMinDamage() const;
    int getMaxDamage() const;
    int getDefense() const;
    double getDodgeProbability() const;
};

#endif //NONO_MONSTER_H