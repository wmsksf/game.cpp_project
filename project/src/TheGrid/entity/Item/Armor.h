#ifndef NONO_ARMOR_H
#define NONO_ARMOR_H

#include "Item.h"
#include "../Living/Monster/Monster.h"
#include "../Living/Hero/Hero.h"

class Armor : public Item
{
public:
    Armor(const std::string &name);

    void printItem() const;

    //reduces damage of the wearer
    //caused by the opponent
    int reduceDamage() const;
};

#endif //ROLE_PLAY_GAME_ARMOR_H