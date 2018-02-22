
#include "Market.h"
#include "../../TheGrid.h"
#include "../../manage/Command/Market/BuyCommand.h"
#include "../../manage/Command/Market/SellCommand.h"
#include "../../manage/Command/Market/MarketListCommand.h"
#include "../../manage/Command/Market/HeroPartyListCommand.h"
#include "../../manage/Command/Market/MoneyofHeroCommand.h"

Market::Market(std::vector<Item*>* marketofItems,
                std::vector<Spell*>* marketofSpells)

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
    std::cout << std::endl << " Items: " << "[" << marketofItems->size() << " items]"
              << std::endl;

    for(int i = 0; i < marketofItems->size(); i++)
    {
        std::cout << "[" << i + 1 << "]" << (*marketofItems)[i]->getDescription()
                  << std::endl;
    }
}


void Market::printSpells()
{
    std::cout << std::endl << " Spells: " << "[" << marketofSpells->size() << " spells]"
              << std::endl;

    for(int i = 0; i < marketofSpells->size(); i++)
    {
        std::cout << "[" << i + 1 << "]" << (*marketofSpells)[i]->getDescription()
                  << std::endl;
    }

    std::cout << std::endl;
}

Item* Market::getItem(const std::string &name)
{

    for (int i = 0; i < marketofItems->size(); i++)
    {
        if((*marketofItems)[i]->getName().compare(name) == 0)
            return (*marketofItems)[i];
    }

    return nullptr;
}

Spell* Market::getSpell(const std::string &name)
{

    for (int i = 0; i < marketofSpells->size(); i++)
    {
        if((*marketofSpells)[i]->getName().compare(name) == 0)
            return (*marketofSpells)[i];
    }

    return nullptr;
}

void Market::receiveItem(Item* item)
{
    marketofItems->push_back(item->clone());
}

void Market::receiveSpell(Spell* spell)
{
    marketofSpells->push_back(spell->clone());
}

void Market::enter(TheGrid* theGrid)
{
    std::cout << std::endl << "Welcome to the Market mighty Hero party!" << std::endl;

    theGrid->getCommandManager()->registerManager(marketManager);
}

void Market::leave(TheGrid* theGrid)
{
    theGrid->getCommandManager()->unregisterManager(marketManager);
}

void Market::initMarketManager()
{
    std::vector<Command*>* commands = new std::vector<Command*>();

    commands->push_back(new BuyCommand(this));
    commands->push_back(new SellCommand(this));
    commands->push_back(new MarketListCommand(this));
    commands->push_back(new HeroPartyListCommand());
    commands->push_back(new MoneyofHeroCommand());

    marketManager = new CommandManager(commands);
}

CommandManager* Market::getMarketManager() const
{
    return marketManager;
}