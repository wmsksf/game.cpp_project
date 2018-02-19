
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "TheGrid.h"
#include "manage/Command/QuitGameCommand.h"
#include "manage/Command/MoveCommand.h"
#include "manage/Command/DisplayMapCommand.h"
#include "manage/Command/CreateHeroCommand.h"
#include "manage/Command/HelpCommand.h"
#include "manage/Command/InventoryListCommand.h"

TheGrid::TheGrid()
{
	initCommandManager();

	party = new HeroParty();

	grid = new Grid(new TileFactory(new ItemFactory));
}

HeroParty* TheGrid::getParty() const
{
	return party;
}

void TheGrid::quit()
{
	std::cout << "Quiting Game" << std::endl;
	exit(0);
}

Grid* TheGrid::getGrid() const
{
	return grid;
}

Tile* TheGrid::getCurrentTile()
{
	return grid->getTile(party->getX(), party->getY());
}

CommandManager *TheGrid::getCommandManager() const
{
	return commandManager;
}

void TheGrid::start()
{
	std::cout << "Starting..." << std::endl;
	std::string line;

	while(true)
	{
		/* This loop will only exit when TheGrid.quit() is called. */

		std::cout << "Give your command worthy player : ";

		getline(std::cin, line);

		commandManager->execute(this, line);
	}
}

void TheGrid::initCommandManager()
{
	std::vector<Command*>* commands = new std::vector<Command*>();

	commands->push_back(new QuitGameCommand());
	commands->push_back(new MoveCommand());
	commands->push_back(new DisplayMapCommand());
	commands->push_back(new CreateHeroCommand());
    commands->push_back(new InventoryListCommand());
	commands->push_back(new HelpCommand());

	commandManager = new CommandManager(commands);
}

HeroFactory* TheGrid::getHeroFactory()
{
	return heroFactory;
}