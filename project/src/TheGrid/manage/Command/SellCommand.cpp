
#include <iostream>
#include "SellCommand.h"
#include "../../TheGrid.h"

SellCommand::SellCommand(TheGrid *theGrid)
        :Command("sell", "[sell] Command to sell to Market",
                 theGrid) {}

void SellCommand::execute(std::vector<std::string> &args)
{
    Tile* tile = theGrid->getCurrentTile();

    if(tile->getName().compare("Market") != 0)
    {
        std::cout << "You should be on Market tile to sell." << std::endl;
        return ;
    }

    Hero* hero = theGrid->getParty()->chooseHero();

    std::cout << "Do you want to sell an item or a spell? [item/spell]" << std::endl;

    std::string answer;
    std::cin >> answer;

    while(answer.compare("item") != 0 || answer.compare("spell") != 0 )
    {
        std::cout << "Give 'item' to sell an item or 'spell' to sell a spell..." << std::endl;

        std::cin >> answer;
    }

    hero->printInventory();

    if(answer.compare("item") == 0)
        sellItem(tile, hero);
    else
        sellSpell(tile, hero);
}

void SellCommand::sellItem(Tile* tile, Hero* hero)
{
    std::cout << "Choose -by name- an item from inventory that you want to sell...";
    std::cout << std::endl;

    std::string name;
    std::cin >> name;

    Item* item = hero->getItem(name);

    tile->getMarket()->receiveItem(item);

    hero->setMoney(hero->getMoney() + (item->getPrice() / 2));
    hero->removeItem(item);
}

void SellCommand::sellSpell(Tile* tile, Hero* hero)
{
    std::cout << "Choose -by name- a spell from inventory that you want to sell...";
    std::cout << std::endl;

    std::string name;
    std::cin >> name;

    Spell* spell = hero->getSpell(name);

    tile->getMarket()->receiveSpell(spell);

    hero->setMoney(hero->getMoney() + (spell->getPrice() / 2));
    hero->removeSpell(spell);
}