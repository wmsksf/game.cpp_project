//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_MONSTER_H
#define NONO_MONSTER_H

#include "../Living.h"

class Monster : public Living
{
    private:
        int damageRange;
        int defenseAmount;
        double oddtoAvoidOpponent;

    public:
        Monster(std::string, int,
                int, int, int, double);

};


#endif //NONO_MONSTER_H
