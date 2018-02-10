//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_POTION_H
#define NONO_POTION_H

#include <iostream>
#include <string>

#include "Item.h"
#include "../Living/Hero/Hero.h"

class Potion : public Item
{
public:
    Potion(const std::string &,
           int, int);

    void boost(Hero* hero);
};

#endif //ROLE_PLAY_GAME_POTION_H
