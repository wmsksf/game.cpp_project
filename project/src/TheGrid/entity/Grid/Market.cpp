
#include "Market.h"
#include "../../TheGrid.h"
#include "../../manage/Command/BuyCommand.h"
#include "../../manage/Command/SellCommand.h"
#include "../../manage/Command/MarketListCommand.h"

Market::Market(const std::vector<Item*> &marketofItems,
                const std::vector<Spell*> &marketofSpells)

        :Tile("Market"),
         marketofItems(marketofItems),
         marketofSpells(marketofSpells)
{
    initMarketManager();
}

bool Market::isAccessible()
{
    return true;
}

void Market::printTile()
{
    std::cout << 'M';
}

void Market::printMarket()
{
    std::cout << "[Market]" << std::endl;

    printItems();
    printSpells();
}

void Market::printItems()
{
    std::cout << "Items:" << std::endl;

    int i = 0;
    for(std::vector<Item*>::iterator it = marketofItems.begin(); it != marketofItems.end(); it++)
    {
        i++;
        std::cout << "[" << i << "]" << (*it)->getDescription() << std::endl;
    }

    std::cout << std::endl;
}


void Market::printSpells()
{
    std::cout << "Spells.txt:" << std::endl;

    int i = 0;
    for(std::vector<Spell*>::iterator it = marketofSpells.begin(); it != marketofSpells.end(); it++)
    {
        i++;
        std::cout << "[" << i << "]" << (*it)->getDescription() << std::endl;
    }

    std::cout << std::endl;
}

Item* Market::getItem(int number) const
{
    return marketofItems[number - 1];
}

Spell* Market::getSpell(int number) const
{
    return marketofSpells[number - 1];
}

void Market::receiveItem(Item* item)
{
    marketofItems.push_back(item->clone());
}

void Market::receiveSpell(Spell* spell)
{
    marketofSpells.push_back(spell->clone());
}

const std::vector<Item*> &Market::getItems() const
{
    return marketofItems;
}

const std::vector<Spell*> &Market::getSpells() const
{
    return marketofSpells;
}

void Market::enter(TheGrid *theGrid)
{
    std::cout << "Welcome to the Market mighty Hero party !!" << std::endl;

    theGrid->getCommandManager()->registerManager(marketManager);
}

void Market::leave(TheGrid *theGrid)
{
    theGrid->getCommandManager()->unregisterManager(marketManager);
}

void Market::initMarketManager()
{
    std::vector<Command*>* commands = new std::vector<Command*>();

    commands->push_back(new BuyCommand(this));
    commands->push_back(new SellCommand(this));
    commands->push_back(new MarketListCommand(this));

    marketManager = new CommandManager(commands);
}
