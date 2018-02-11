//
// Created by admntiasf on 10/2/2018.
//

#include <netinet/in.h>
#include "NonAccessibleTile.h"

NonAccessibleTile::NonAccessibleTile()
        :Tile(), name("NonAccessibleTile") {}

bool NonAccessibleTile::isAccessible()
{
    return false;
}

void NonAccessibleTile::printTile(Console *)
{

}