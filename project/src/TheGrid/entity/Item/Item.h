#ifndef NONO_ITEM_H
#define NONO_ITEM_H

#include <iostream>
#include <string>
#include "../../manage/Random/Random.h"

class Item
{
private:
    std::string name;
    int price;
    int requiredLvl;

public:
    Item(const std::string &name, int price,
         int requiredLvl);

    const std::string& getName() const;

    virtual void printItem() const;
};

#endif //ROLE_PLAY_GAME_ITEM_H