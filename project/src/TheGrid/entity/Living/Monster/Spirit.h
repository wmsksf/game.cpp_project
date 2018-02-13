
#ifndef NONO_SPIRIT_H
#define NONO_SPIRIT_H

#include "Monster.h"

class Spirit : public Monster
{
public:
    Spirit(const std::string &name);

    void displayStats();
};

#endif //NONO_SPIRIT_H