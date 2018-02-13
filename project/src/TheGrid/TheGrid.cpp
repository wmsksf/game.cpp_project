
#include "TheGrid.h"

TheGrid::TheGrid()
{
	commandManager = new CommandManager(this);

	party = new HeroParty();

//first set-methods of this class calling fopen-items and spells then create grid
//	grid = new Grid(new TileFactory(allItems));
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

	setHeroParty();

	while(true)
	{
		/* This loop will only exit when TheGrid.quit() is called. */

		std::cout << "Give your command worthy player : ";

		getline(std::cin, line);

		commandManager->execute(line);
	}
}

void TheGrid::setHeroParty()
{
	std::cout << "First create your heroes!" << std::endl;
	std::cout << "You can create up to three ones. Give a number : ";

	int answer;
	std::cin >> answer;

	while(answer > 3)
	{
		std::cout << "You can only create up to three heroes!" << std::endl;
		std::cin >> answer;
	}

	for (int i = 0; i != answer ; i++)
	{
		std::cout << "choose: Paladin | Sorcerer | Warrior : ";
		std::string hero;
		std::cin >> hero;

		while(hero.compare("Paladin") != 0 || hero.compare("Sorcerer") != 0
			  || hero.compare("Warrior") != 0 )
		{
			std::cout << "Give Paladin | Sorcerer | Warrior..." << std::endl;
			std::cin >> hero;
		}

		commandManager->execute("create " + hero);
	}
}