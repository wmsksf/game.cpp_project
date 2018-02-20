#ifndef NONO_MONSTER_H
#define NONO_MONSTER_H

#include "../Living.h"
#include "../../../manage/Random/Random.h"
#include "../../Spell/Effect/Effect.h"
#include <vector>

class Monster : public Living
{
protected:
    int minDamage;
    int maxDamage;
    int defense;

    double dodgeProbability;

    std::vector<Effect*> effects;

public:
    Monster(const std::string &name, int level);

    void displayStats();

    int getMinDamage() const;
    int getMaxDamage() const;
    int getDefense() const;
    double getDodgeProbability() const;

    int getExperienceWorth();
    int getMoneyReward();

    const std::vector<Effect *> &getEffects();

    void applyEffect(Effect* effect);

    void countDownEffects();
};

#endif //NONO_MONSTER_H