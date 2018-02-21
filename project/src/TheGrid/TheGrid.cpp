
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
#include "manage/Command/EquipWeaponCommand.h"
#include "manage/Command/EquipArmorCommand.h"
#include "manage/Command/HeroStatsCommand.h"
#include "manage/Command/UsePotionCommand.h"
#include "manage/Command/CheatCommand.h"

//the main class -the game-
//containing the grid, the entities and
//the data from txt files

TheGrid::TheGrid(const std::string& resourceFolder)
{
	std::cout << "Initializing TheGrid ... " << std::endl;

	nameFactory = new NameFactory();

	nameFactory->load(resourceFolder + "Items.txt");
	nameFactory->load(resourceFolder + "Spells.txt");
	nameFactory->load(resourceFolder + "Monsters.txt");

	initCommandManager();

	party = new HeroParty();

	itemFactory = new ItemFactory(nameFactory);
	tileFactory = new TileFactory(itemFactory);

	grid = new Grid(tileFactory);
}

HeroParty* TheGrid::getParty() const
{
	return party;
}

void TheGrid::quit()
{
	std::cout << "Quiting Game..." << std::endl;
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

CommandManager* TheGrid::getCommandManager() const
{
	return commandManager;
}

void TheGrid::start()
{
	getCurrentTile()->enter(this);

	std::cout << "First check your commands..." << std::endl;

	commandManager->execute(this,"help");

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

	commands->push_back(new CreateHeroCommand());
	commands->push_back(new MoveCommand());
	commands->push_back(new DisplayMapCommand());
    commands->push_back(new InventoryListCommand());
	commands->push_back(new HeroStatsCommand());
	commands->push_back(new EquipArmorCommand());
	commands->push_back(new EquipWeaponCommand());
	commands->push_back(new UsePotionCommand());
	commands->push_back(new QuitGameCommand());
	commands->push_back(new HelpCommand());
	commands->push_back(new CheatCommand());

	commandManager = new CommandManager(commands);
}

HeroFactory* TheGrid::getHeroFactory()
{
	return heroFactory;
}

NameFactory *TheGrid::getNameFactory()
{
	return nameFactory;
}
