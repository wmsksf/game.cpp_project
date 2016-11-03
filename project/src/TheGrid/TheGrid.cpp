
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "TheGrid.h"
#include "entity/Spell/LightingSpell.h"
#include "entity/Spell/IceSpell.h"
#include "entity/Spell/FireSpell.h"

TheGrid::TheGrid()
{
	commandManager = new CommandManager(this);

	party = new HeroParty();

	Items();
	Spells();

	grid = new Grid(new TileFactory(allItems, allSpells));
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

void TheGrid::Items()
{
	getWeapons();
	getArmors();
    getPotions();
}

void TheGrid::getWeapons()
{
	//open file
	std::ifstream infile("src/TheGrid/Items/Weapons.txt");

	//check for error
	if(!infile.is_open())
	{
		std::cout << "failed to open file" << std::endl;
		exit(1);
	}

	std::string name;
	while(std::getline(infile, name))
	{
		Item* item = new Weapon(name);
		allItems.push_back(item);
	}

	//close file
	infile.close();
}

void TheGrid::getArmors()
{
	//open file
	std::ifstream infile("src/TheGrid/Items/Armors.txt");

	//check for error
	if(!infile.is_open())
	{
		std::cout << "failed to open file" << std::endl;
		exit(1);
	}

	std::string name;
	while(std::getline(infile, name))
	{
		Item* item = new Armor(name);
		allItems.push_back(item);
	}

	//close file
	infile.close();
}

void TheGrid::getPotions()
{
    //open file
    std::ifstream infile("src/TheGrid/Items/Potions.txt");

    //check for error
    if(!infile.is_open())
    {
        std::cout << "failed to open file" << std::endl;
        exit(1);
    }

    std::string name;
    while(std::getline(infile, name))
    {
        Item* item = new Armor(name);
        allItems.push_back(item);
    }

    //close file
    infile.close();
}

void TheGrid::Spells()
{
	//open file
	std::ifstream infile("src/TheGrid/Items/Spells.txt");

	//check for error
	if(!infile.is_open())
	{
		std::cout << "failed to open file" << std::endl;
		exit(1);
	}

	std::string name;
	for (int i = 0; std::getline(infile, name); i++)
	{
		Spell* spell;

		if(i < 10)
			spell = new FireSpell(name);

		else if(i < 20)
			spell = new IceSpell(name);

		else
			spell = new LightingSpell(name);

		allSpells.push_back(spell);
	}

	//close file
	infile.close();
}