//
// Created by admntiasf on 16/1/2018.
//

#ifndef NONO_ITEM_H
#define NONO_ITEM_H

#include <iostream>
#include <string>

class Item
{
private:
    std::string name;
    int price;
    int requiredLvl;

public:
    Item(const std::string &,
         int, int);
};

#endif //ROLE_PLAY_GAME_ITEM_H
