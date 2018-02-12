
#ifndef NONO_COMMONTILE_H
#define NONO_COMMONTILE_H

#include "Tile.h"

class CommonTile : public Tile
{
public:
    CommonTile();

    bool isAccessible();
    void printTile();

    void enter();
};

#endif //NONO_COMMONTILE_H