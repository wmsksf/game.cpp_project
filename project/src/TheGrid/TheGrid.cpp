//
// Created by admntiasf on 18/1/2018.
//

#include "TheGrid.h"


HeroParty *TheGrid::getParty() const
{
	return party;
}

void TheGrid::quit()
{
	std::cout << "Quiting Game" << std::endl;
	exit(0);
}

Grid *TheGrid::getGrid() const
{
	return grid;
}

Tile *TheGrid::getCurrentTile()
{
	return grid->getTile(party->getX(), party->getY());
}

void TheGrid::start()
{
	std::cout << "Starting" << std::endl;
	std::string line;

	while(true)
	{
		/* This loop will only exit when TheGrid.quit() is called. */

		std::cout << "Give your command worthy player : ";

		getline(std::cin, line);

		commandManager->execute(line);
	}
}

TheGrid::TheGrid()
{
	commandManager = new CommandManager(this);

//	grid = new Grid(new TileFactory(allItems));

}
