//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_PALADIN_H
#define NONO_PALADIN_H

#include "Hero.h"

class Paladin : public Hero
{
    public:
        Paladin(std::string,
                int, int, int,
                int, int, int,
                int, int);

        void stronGer();
        void moreAgile();
        void levelUp(); //override
};


#endif //NONO_PALADIN_H
