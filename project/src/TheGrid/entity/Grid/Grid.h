#ifndef NONO_GRID_H
#define NONO_GRID_H

#include "Tile.h"
#include "CommonTile.h"
#include "NonAccessibleTile.h"
#include "Market.h"
#include "../../TheGrid.h"
#include "TileFactory.h"

class Grid
{
private:
    Tile*** grid;

public:
    Grid(TileFactory& tileFactory);

    Tile* getTile(int x, int y);

    void displayGrid(int playerX, int playerY);
};

#endif //NONO_GRID_H