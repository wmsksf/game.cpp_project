//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_GRID_H
#define NONO_GRID_H


#include <vector>
#include "Tile.h"

class Grid
{
private:
    Tile*** grid;

public:
    Grid(int, int);

    Tile* getTile(int x, int y);

    void displayGrid();
};


#endif //NONO_GRID_H
