
#ifndef NONO_DRAGON_H
#define NONO_DRAGON_H

#include "Monster.h"

class Dragon : public Monster
{
public:
    Dragon(const std::string &name, int level);

    void displayStats();
};

#endif //NONO_DRAGON_H