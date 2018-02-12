#ifndef NONO_AGILITYPOTION_H
#define NONO_AGILITYPOTION_H

#include "Potion.h"

class AgilityPotion : Potion
{
public:
    AgilityPotion(const std::string &name);

    int boost() const;
};

#endif //NONO_AGILITYPOTION_H