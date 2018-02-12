#include "Market.h"

Market::Market(const std::vector<Item> &mrkt)

        :Tile(), name("Market"), market(mrkt) {}

bool Market::isAccessible()
{
    return true;
}

void Market::printTile()
{
    std::cout << 'M';
}

Item* Market::getItem(int number)
{
    return &(market[number]);
}