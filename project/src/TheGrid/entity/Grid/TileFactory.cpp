
#include "TileFactory.h"
#include "../../manage/Random/Random.h"
#include "CommonTile.h"
#include "NonAccessibleTile.h"

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

	std::vector<Item*> marketItems;
	std::vector<Spell*> marketSpells;

	while(numberOfItems--)
	{
		marketItems.push_back(itemFactory->createItem());
	}

	while(numberOfSpells--)
	{
		marketSpells.push_back(itemFactory->createSpell());
	}

	return new Market(marketItems, marketSpells);
}