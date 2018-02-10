//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_WARRIOR_H
#define NONO_WARRIOR_H

#include "Hero.h"

class Warrior : public Hero
{
public:
    Warrior(const std::string &,
            int, int, int, int,
            int, int, int);
};

#endif //NONO_WARRIOR_H
