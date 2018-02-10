//
// Created by admntiasf on 10/2/2018.
//

#include "SpellEffect.h"

Effect::Effect(int tm, int prior) : time(tm), priority(prior) {}


int Effect::getTime() const
{
    return time;
}

int Effect::getPriority() const
{
    return priority;
}
