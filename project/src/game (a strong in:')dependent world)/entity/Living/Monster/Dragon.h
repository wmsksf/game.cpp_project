//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_DRAGON_H
#define NONO_DRAGON_H


#include "Monster.h"

class Dragon : public Monster
{
    public:
        Dragon(std::string, int,
               int, int, int, double);

    void destruCtive();

};


#endif //NONO_DRAGON_H
