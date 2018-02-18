
#ifndef NONO_TILEFACTORY_H
#define NONO_TILEFACTORY_H

#include <vector>
#include "Tile.h"
#include "../Item/Item.h"
#include "Market.h"
#include "../../manage/Manager/ItemFactory.h"

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