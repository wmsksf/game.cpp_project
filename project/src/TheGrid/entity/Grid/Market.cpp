//
// Created by admntiasf on 10/2/2018.
//

#include <netinet/in.h>
#include "Market.h"

Market::Market(const std::vector<Item> &mrkt)

                :Tile(), name("Market"), market(mrkt) {}

bool Market::isAccessible()
{
    return true;
}

void Market::printTile(Console *)
{

}

Item* Market::getItem(int number)
{
    return &(market[number]);
}