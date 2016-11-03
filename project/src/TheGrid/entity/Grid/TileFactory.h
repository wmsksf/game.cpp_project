
#ifndef NONO_TILEFACTORY_H
#define NONO_TILEFACTORY_H

#include <vector>
#include "Tile.h"
#include "../Item/Item.h"
#include "Market.h"

class TileFactory
{
private:
	std::vector<Item*>& allItems;
	std::vector<Spell*>& spells;

	Market* createMarket();

public:
	TileFactory(std::vector<Item*> &allItems, std::vector<Spell*> &spells);

	Tile* createTile();
};

#endif //NONO_TILEFACTORY_H