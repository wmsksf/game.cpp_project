#ifndef NONO_HEALTHPOTION_H
#define NONO_HEALTHPOTION_H

#include "Potion.h"

class HealthPotion : public Potion
{
public:
    HealthPotion(const std::string &name);

    int boost() const;
};

#endif //NONO_HEALTHPOTION_H