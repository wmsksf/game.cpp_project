//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_WARRIOR_H
#define NONO_WARRIOR_H

#include "Hero.h"

class Warrior : public Hero
{
    public:
        Warrior(std::string,
                int, int, int,
                int, int, int,
                int, int);

        void stronGer();
        void moreAgile();
        void levelUp(); //override
};

#endif //NONO_WARRIOR_H
