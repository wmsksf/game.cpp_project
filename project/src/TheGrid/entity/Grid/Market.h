//
// Created by admntiasf on 10/2/2018.
//

#ifndef NONO_MARKET_H
#define NONO_MARKET_H


#include <vector>
#include "Tile.h"
#include "../Item/Item.h"

class Market : public Tile
{
private:
    std::vector<Item> market;

public:
    Market(const std::vector<Item> &);

    bool isAccessible();
    void printTile(Console*);

    void printItems(Console*);
    Item* getItem(int);

};

#endif //NONO_MARKET_H
