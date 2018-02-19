
#ifndef NONO_TILEFACTORY_H
#define NONO_TILEFACTORY_H

#include <vector>
#include "../../entity/Grid/Tile.h"
#include "../../entity/Item/Item.h"
#include "../../entity/Grid/Market.h"
#include "ItemFactory.h"

class TileFactory
{
private:
	ItemFactory* itemFactory;

	Market* createMarket();

public:
	TileFactory(ItemFactory* itemFactory);

	Tile* createTile();
};

#endif //NONO_TILEFACTORY_H