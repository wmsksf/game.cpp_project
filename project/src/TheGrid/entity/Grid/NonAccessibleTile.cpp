#include "NonAccessibleTile.h"

NonAccessibleTile::NonAccessibleTile()
                    :Tile("NonAccessibleTile"){
}

bool NonAccessibleTile::isAccessible()
{
    return false;
}

void NonAccessibleTile::printTile()
{
    std::cout << 'X';
}