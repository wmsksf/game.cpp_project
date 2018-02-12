//
// Created by admntiasf on 10/2/2018.
//

#include "Effect.h"

Effect::Effect(int time, int priority)

                :time(time), priority(priority){}


int Effect::getTime() const
{
    return time;
}

int Effect::getPriority() const
{
    return priority;
}
