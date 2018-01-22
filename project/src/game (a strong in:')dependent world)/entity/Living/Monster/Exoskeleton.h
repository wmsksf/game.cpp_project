//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_EXOSKELETON_H
#define NONO_EXOSKELETON_H


#include "Monster.h"

class Exoskeleton : public Monster
{
    public:
        Exoskeleton(std::string, int,
                    int, int, int, double);

        void moreDefensive();
};


#endif //NONO_EXOSKELETON_H
