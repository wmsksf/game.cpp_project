
#include "Market.h"

Market::Market(const std::vector<Item*> &marketofItems,
                const std::vector<Spell*> &marketofSpells)

        :Tile("Market"), marketofItems(marketofItems),
         marketofSpells(marketofSpells) {}

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
    std::cout << "Spells:" << std::endl;

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

void Market::enter()
{
    std::cout << "You entered into a market!" << std::endl;
}

Market* Market::getMarket()
{
    return this;
}

const std::vector<Item*> &Market::getItems() const
{
    return marketofItems;
}

const std::vector<Spell*> &Market::getSpells() const
{
    return marketofSpells;
}