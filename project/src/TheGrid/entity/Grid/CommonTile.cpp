#include "CommonTile.h"

CommonTile::CommonTile()
            :Tile(), name("CommonTile") {}

bool CommonTile::isAccessible()
{
    return true;
}

void CommonTile::printTile()
{
    std::cout << ' ';
}