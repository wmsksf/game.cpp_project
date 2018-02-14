
#include "BuyCommand.h"
#include "../../TheGrid.h"

BuyCommand::BuyCommand(TheGrid *theGrid)
		:Command("buy", "[buy] Command to buy from Market",
				 theGrid) {}

void BuyCommand::execute(std::vector<std::string> &args)
{
	Tile* tile = theGrid->getCurrentTile();

	if(tile->getName().compare("Market") != 0)
	{
		std::cout << "You should be on Market tile to buy." << std::endl;
		return ;
	}

	Hero* hero = theGrid->getParty()->chooseHero();

	std::cout << "Do you want to buy an item or a spell? [item/spell]" << std::endl;

	std::string answer;
	std::cin >> answer;

	while(answer.compare("item") != 0 || answer.compare("spell") != 0 )
	{
		std::cout << "Give 'item' to buy an item or 'spell' to buy a spell..." << std::endl;

		std::cin >> answer;
	}

	if(answer.compare("item") == 0)
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