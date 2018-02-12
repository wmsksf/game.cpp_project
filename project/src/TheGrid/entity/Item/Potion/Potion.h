
#ifndef NONO_POTION_H
#define NONO_POTION_H

#include <string>

#include "../Item.h"
#include "../../Living/Hero/Hero.h"

class Potion : public Item
{
public:
    Potion(const std::string &name,
           int price);

    virtual const std::string& getDescription() = 0; //??price
    virtual void boost(Hero* hero) const = 0;
};

#endif //ROLE_PLAY_GAME_POTION_H