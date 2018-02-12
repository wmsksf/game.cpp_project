#ifndef NONO_EFFECT_H
#define NONO_EFFECT_H

#include "../../Living/Monster/MonsterStats.h"

class Effect
{
private:
    int time;
    int priority;

public:
    Effect(int time, int priority);

    virtual void countDown() = 0 ;
    virtual bool expired() = 0;
    virtual void apply(MonsterStats* monsterStats) = 0;

    //getters
    int getPriority() const;
    int getTime() const;
};

#endif //NONO_EFFECT_H