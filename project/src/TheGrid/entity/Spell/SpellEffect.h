//
// Created by admntiasf on 10/2/2018.
//

#ifndef NONO_EFFECT_H
#define NONO_EFFECT_H


#include "../Living/Monster/MonsterStats.h"

class Effect
{
private:
    int time;
    int priority;

public:
    Effect(int, int);

    virtual void countDown() = 0 ;
    virtual bool expired() = 0;
    virtual void apply(MonsterStats*) = 0;

    //getters
    int getPriority() const;
    int getTime() const;
};

#endif //NONO_EFFECT_H
