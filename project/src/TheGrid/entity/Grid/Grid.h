#ifndef NONO_GRID_H
#define NONO_GRID_H

#include "Tile.h"
#include "CommonTile.h"
#include "NonAccessibleTile.h"
#include "Market.h"

class Grid
{
private:
    Tile*** grid;

    int XHeroParty;
    int YHeroParty;

public:
    Grid();

    Tile* getTile(int x, int y);

    void displayGrid();

    void setXHeroParty(int XHeroParty);
    int getXHeroParty() const;

    void setYHeroParty(int YHeroParty);
    int getYHeroParty() const;
};

#endif //NONO_GRID_H