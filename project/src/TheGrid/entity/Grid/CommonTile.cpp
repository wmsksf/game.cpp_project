#include "CommonTile.h"

CommonTile::CommonTile()
            :Tile("CommonTile"){}

bool CommonTile::isAccessible()
{
    return true;
}

void CommonTile::printTile()
{
    std::cout << ' ';
}