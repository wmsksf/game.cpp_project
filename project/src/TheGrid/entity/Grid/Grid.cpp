//
// Created by admntiasf on 18/1/2018.
//

#include "Grid.h"

Grid::Grid(int width, int height)
{
    grid = new Tile** [width];
    for (int i = 0; i < width ; i++)
    {
        grid[i] = new Tile* [height];
    }
}
