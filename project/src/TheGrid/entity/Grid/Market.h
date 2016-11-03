
#ifndef NONO_MARKET_H
#define NONO_MARKET_H

#include <vector>
#include "../Item/Item.h"
#include "../Spell/Spell.h"
#include "Tile.h"
#include "../../manage/Manager/CommandManager.h"
#include "../../manage/Manager/MarketManager.h"


class Market : public Tile
{
private:
    std::vector<Item*> marketofItems;
    std::vector<Spell*> marketofSpells;

    MarketManager* marketManager;

public:
    Market(const std::vector<Item*> &marketofItems,
           const std::vector<Spell*> &marketofSpells);

    bool isAccessible();
    void printTile();

    void printMarket();

    void printItems();
    void printSpells();

    Item* getItem(int) const;
    Spell* getSpell(int) const;

    void receiveItem(Item* item);
    void receiveSpell(Spell* spell);

    void enter(HeroParty* heroParty);

    const std::vector<Item*> &getItems() const;
    const std::vector<Spell*> &getSpells() const;
};

#endif //NONO_MARKET_H