#ifndef NONO_MAGICPOTION_H
#define NONO_MAGICPOTION_H

#include "Potion.h"

class MagicPotion : public Potion
{
public:
    MagicPotion(const std::string &name);

    int boost() const;
};

#endif //NONO_MAGICPOTION_H