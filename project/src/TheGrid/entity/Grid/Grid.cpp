
#include "Grid.h"
#include "../../manage/Random/Random.h"

static const int height = 25;
static const int width = 45;

Grid::Grid(TileFactory* tileFactory)
{
	grid = new Tile **[height];

	for (int i = 0; i < height; i++)
	{
		grid[i] = new Tile *[width];
	}

	for (int i = 0; i != height; i++)
	{
		for (int j = 0; j != width; j++)
		{
			grid[i][j] = tileFactory->createTile();
		}
	}
}

void Grid::displayGrid(int playerX, int playerY)
{
	for (int i = 0; i != width + 2; i++)
	{
		std::cout << '*';
	}
	std::cout << std::endl;

	for (int i = 0; i != height; i++)
	{
		std::cout << '*';
		for (int j = 0; j != width; j++)
		{
			if (i == playerX && j == playerY)
			{
				std::cout << 'P';
			} else
			{
				grid[i][j]->printTile();
			}
		}
		std::cout << '*' << std::endl;
	}

	for (int i = 0; i != width + 2; i++)
	{
		std::cout << '*';
	}

	std::cout << std::endl;
}

Tile *Grid::getTile(int x, int y)
{
	if(x < 0 || x >= width)
		return nullptr;

	if(y < 0  || y >= height)
		return nullptr;

	return grid[x][y];
}