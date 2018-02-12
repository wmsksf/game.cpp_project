#include "NonAccessibleTile.h"

NonAccessibleTile::NonAccessibleTile()
                    :Tile(), name("NonAccessibleTile") {}

bool NonAccessibleTile::isAccessible()
{
    return false;
}

void NonAccessibleTile::printTile()
{
    std::cout << 'X';
}