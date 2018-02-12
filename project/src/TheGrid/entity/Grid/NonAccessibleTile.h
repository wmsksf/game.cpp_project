//
// Created by admntiasf on 10/2/2018.
//

#ifndef NONO_NONACCESSIBLETILE_H
#define NONO_NONACCESSIBLETILE_H


#include "Tile.h"

class NonAccessibleTile : public Tile
{
public:
    NonAccessibleTile();

    bool isAccessible();
    void printTile();
};

#endif //NONO_NONACCESSIBLETILE_H
