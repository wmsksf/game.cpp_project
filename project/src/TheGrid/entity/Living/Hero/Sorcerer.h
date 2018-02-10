//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_SORCERER_H
#define NONO_SORCERER_H

#include "Hero.h"

class Sorcerer : public Hero
{
    public:
        Sorcerer(std::string,
                 int, int, int,
                 int, int, int,
                 int, int);

        void moreDexterous();
        void moreAgile();
        void levelUp(); //override
};

#endif //NONO_SORCERER_H
