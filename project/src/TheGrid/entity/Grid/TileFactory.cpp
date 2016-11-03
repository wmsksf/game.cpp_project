
#include "TileFactory.h"
#include "../../manage/Random/Random.h"
#include "CommonTile.h"
#include "NonAccessibleTile.h"

/* Implementing Flyweight pattern */
static Tile* blockTile = new NonAccessibleTile();
static Tile* commonTile = new CommonTile();

TileFactory::TileFactory(std::vector<Item *> &allItems, std::vector<Spell*> &spells)
		:allItems(allItems), spells(spells) {}

Tile *TileFactory::createTile()
{
	int rnd = random(1000);

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
	int numberOfItem = 3 + randomInRange(0, 7);

	std::vector<Item*> marketItems;
	std::vector<Spell*> marketSpells;

	while(numberOfItem--)
	{
		Item *item = allItems[random(allItems.size())];
		Spell *spell = spells[random(spells.size())];

		marketItems.push_back(item->clone());
		marketSpells.push_back(spell->clone());
	}

	return new Market(marketItems, marketSpells);
}