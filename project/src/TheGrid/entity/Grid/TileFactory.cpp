//
// Created by kostas on 2/12/18.
//

#include "TileFactory.h"
#include "../../manage/Random/Random.h"
#include "CommonTile.h"
#include "NonAccessibleTile.h"

/* Implementing Flyweight pattern */
static Tile* blockTile = new NonAccessibleTile();
static Tile* commonTile = new CommonTile();

TileFactory::TileFactory(std::vector<Item *> &allItems) : allItems(allItems) {}

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

Market *TileFactory::createMarket()
{
	int numberOfItem = 3 + randomInRange(0, 7);

	std::vector<Item> marketItems;

	while(numberOfItem--)
	{
		Item* item = allItems[random(allItems.size())];

		marketItems.push_back(*item->clone());
	}

	return new Market(marketItems);
}
