//
// Created by admntiasf on 10/2/2018.
//

#ifndef NONO_COMMONTILE_H
#define NONO_COMMONTILE_H


#include "Tile.h"

class CommonTile : public Tile
{
public:
    CommonTile();

    bool isAccessible();
    void printTile(Console*);
};


#endif //NONO_COMMONTILE_H
