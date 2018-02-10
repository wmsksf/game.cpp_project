//
// Created by admntiasf on 10/2/2018.
//

#ifndef NONO_EFFECT_H
#define NONO_EFFECT_H


class Effect
{
private:
    int time;
    int priority;

public:
    Effect(int time, int priority);

    virtual void countDown() = 0 ;
    virtual bool expired() = 0;
    virtual void apply(Statistics*) = 0;

    int getPriority();
    int getTime();
};


#endif //NONO_EFFECT_H
