
#include "TileFactory.h"
#include "../Random/Random.h"
#include "../../entity/Grid/CommonTile.h"
#include "../../entity/Grid/NonAccessibleTile.h"

/* Implementing Flyweight pattern */
static Tile* blockTile = new NonAccessibleTile();
static Tile* commonTile = new CommonTile();

TileFactory::TileFactory(ItemFactory* itemFactory)
		:itemFactory(itemFactory) {}

Tile *TileFactory::createTile()
{
	int rnd = randomInt(1000);

	if(rnd < 75)
	{
		return createMarket();
	}

	if(rnd < 200)
	{
		return blockTile;
	}

	return commonTile;
}

Market* TileFactory::createMarket()
{
	int numberOfItems = 3 + randomInRange(0, 7);
	int numberOfSpells = randomInRange(0, 2);

	std::vector<Item*>* marketItems = new std::vector<Item*>();
	std::vector<Spell*>* marketSpells = new std::vector<Spell*>();

	while(numberOfItems--)
	{
		marketItems->push_back(itemFactory->createItem());
	}

	while(numberOfSpells--)
	{
		marketSpells->push_back(itemFactory->createSpell());
	}

	return new Market(marketItems, marketSpells);
}