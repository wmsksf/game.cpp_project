#ifndef NONO_DEXTERITYPOTION_H
#define NONO_DEXTERITYPOTION_H

#include "Potion.h"

class DexterityPotion : public Potion
{
public:
    DexterityPotion(const std::string &name);

    int boost() const;
};

#endif //NONO_DEXTERITYPOTION_H