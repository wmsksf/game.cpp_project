
#ifndef NONO_NONACCESSIBLETILE_H
#define NONO_NONACCESSIBLETILE_H

#include "Tile.h"

class NonAccessibleTile : public Tile
{
public:
    NonAccessibleTile();

    bool isAccessible();
    void printTile();

    void enter(TheGrid* theGrid);
    void leave(TheGrid *theGrid);
};

#endif //NONO_NONACCESSIBLETILE_H