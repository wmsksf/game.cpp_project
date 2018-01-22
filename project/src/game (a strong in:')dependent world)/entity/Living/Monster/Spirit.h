//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_SPIRIT_H
#define NONO_SPIRIT_H

#include "Monster.h"

class Spirit : public Monster
{
    public:
        Spirit(std::string, int,
               int, int, int, double);

        void moreOddstoAvoidOpponent();
};


#endif //NONO_SPIRIT_H
