#ifndef NONO_POTION_H
#define NONO_POTION_H

#include <iostream>
#include <string>

#include "../Item.h"
#include "../../Living/Hero/Hero.h"

class Potion : public Item
{
public:
    Potion(const std::string &name,
           int price);

    void printItem() const;

    //boost a stat of the user/hero
    virtual int boost() const = 0;
};

#endif //ROLE_PLAY_GAME_POTION_H