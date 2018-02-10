//
// Created by admntiasf on 10/2/2018.
//

#include "SpellEffect.h"

int Effect::getTime() {
    return 0;
}

int Effect::getPriority() {
    return 0;
}

Effect::Effect(int time, int priority) : time(time), priority(priority) {}
