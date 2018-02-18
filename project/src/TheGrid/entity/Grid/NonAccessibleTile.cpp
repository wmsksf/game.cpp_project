#include "NonAccessibleTile.h"

NonAccessibleTile::NonAccessibleTile()
                    :Tile("NonAccessibleTile") {}

bool NonAccessibleTile::isAccessible()
{
    return false;
}

void NonAccessibleTile::printTile()
{
    std::cout << 'X';
}

void NonAccessibleTile::leave(TheGrid *theGrid) {}

void NonAccessibleTile::enter(TheGrid *theGrid)
{
    std::cout << "The tile you tried to enter into is nonaccessible!";
    std::cout << "Try moving to an other direction..." << std::endl;
}