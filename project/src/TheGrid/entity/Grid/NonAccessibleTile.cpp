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
    std::cout << std::endl << "The tile you tried to enter into is nonaccessible!"
              << std::endl;

    std::cout << "Try moving to an other direction..." << std::endl;
}