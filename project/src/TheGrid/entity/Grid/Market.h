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
    void printTile();

    void printItems();
    Item* getItem(int);

};

#endif //NONO_MARKET_H