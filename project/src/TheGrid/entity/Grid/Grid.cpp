#include "Grid.h"

static const int height = 25;
static const int width = 45;

Grid::Grid()
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
			int rnd = randomInRange(0, 2);

			switch (rnd)
			{
				case 0:
					grid[i][j] = new CommonTile();
					break;

				case 1:
					grid[i][j] = new NonAccessibleTile();
					break;

				case 2:
					grid[i][j] = new Market();
					break;
			}
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
				std::cout << grid[i][j];
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
