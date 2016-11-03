
#include "BuyCommand.h"
#include "../../TheGrid.h"

BuyCommand::BuyCommand(TheGrid *theGrid)
		:Command("buy", "[buy (item | spell)] Command to buy from Market",
				 theGrid) {}

void BuyCommand::execute(std::vector<std::string> &args)
{
	Tile* tile = theGrid->getCurrentTile();

	if(tile->getName().compare("Market") != 0)
	{
		std::cout << "You should be on Market tile to buy." << std::endl;
		return ;
	}

	if(args.size() != 1)
	{
		std::cout << "Invalid usage : buy (item | spell)" << std::endl;
		return ;
	}

	Hero* hero = theGrid->getParty()->chooseHero();

	if(args[0].compare("item") == 0)
		buyItem(tile, hero);
	else
		buySpell(tile, hero);
}

void BuyCommand::buyItem(Tile* tile, Hero* hero)
{
	tile->getMarket()->printItems();

	std::cout << "Give number of item you want to purchase..." << std::endl;

	int number;
	std::cin >> number;

	while(number < 0 || number > tile->getMarket()->getItems().size())
	{
		std::cout << "Choose one of the items below..." << std::endl;
		tile->getMarket()->getItems();

		std::cin >> number;
	}

	Item* item = tile->getMarket()->getItem(number);

	hero->addItem(item);
}

void BuyCommand::buySpell(Tile* tile, Hero* hero)
{
	tile->getMarket()->printSpells();

	std::cout << "Give number of spell you want to purchase..." << std::endl;

	int number;
	std::cin >> number;

	while(number < 0 || number > tile->getMarket()->getSpells().size())
	{
		std::cout << "Choose one of the spells below..." << std::endl;
		tile->getMarket()->getSpells();

		std::cin >> number;
	}

	Spell* spell = tile->getMarket()->getSpell(number);

	hero->addSpell(spell);
}