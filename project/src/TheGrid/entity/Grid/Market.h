
#ifndef NONO_MARKET_H
#define NONO_MARKET_H

#include <vector>
#include "../Item/Item.h"
#include "../Spell/Spell.h"
#include "Tile.h"
#include "../../manage/Manager/CommandManager.h"

class Market : public Tile
{
private:
    std::vector<Item*>* marketofItems;
    std::vector<Spell*>* marketofSpells;

    CommandManager* marketManager;

public:
    Market(std::vector<Item*>* marketofItems,
           std::vector<Spell*>* marketofSpells);

    bool isAccessible();
    void printTile();

    void printMarket();

    Item* getItem(int) const;
    Spell* getSpell(int) const;

    void receiveItem(Item* item);
    void receiveSpell(Spell* spell);

    void enter(TheGrid* theGrid);
    void leave(TheGrid* theGrid);

    CommandManager *getMarketManager() const;

private:
    void initMarketManager();

    void printItems();
    void printSpells();
};

#endif //NONO_MARKET_H