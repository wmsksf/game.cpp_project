
#ifndef NONO_EXOSKELETON_H
#define NONO_EXOSKELETON_H

#include "Monster.h"

class Exoskeleton : public Monster
{
public:
    Exoskeleton(const std::string &name, int level);

    void displayStats();
};

#endif //NONO_EXOSKELETON_H