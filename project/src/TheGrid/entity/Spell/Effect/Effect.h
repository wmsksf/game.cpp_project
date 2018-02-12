
#ifndef NONO_EFFECT_H
#define NONO_EFFECT_H

#include "../../Living/Monster/MonsterStats.h"

class Effect
{
private:
    int duration;

protected:
    int damage;

public:
    Effect();

    void countDown();

    bool expired() const;

    virtual void apply(MonsterStats* monsterStats) = 0;

    int getDuration() const;
    int getDamage() const;
};

#endif //NONO_EFFECT_H