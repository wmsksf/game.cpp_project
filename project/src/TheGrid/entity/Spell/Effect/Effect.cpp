#include "Effect.h"

Effect::Effect()

        :duration(3) {}

void Effect::countDown()
{
    duration--;
}

bool Effect::expired() const
{
    return duration > 0;
}

int Effect::getDuration() const
{
    return duration;
}

int Effect::getDamage() const
{
    return damage;
}