#ifndef NONO_STRENGTHPOTION_H
#define NONO_STRENGTHPOTION_H

#include "Potion.h"

class StrengthPotion : Potion
{
public:
    StrengthPotion(const std::string &name);

    int boost() const;
};

#endif //NONO_STRENGTHPOTION_H