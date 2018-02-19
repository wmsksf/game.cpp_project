
#include "BuyCommand.h"
#include "../../TheGrid.h"

BuyCommand::BuyCommand(Market* market)
    :Command("buy", "buy <hero_name> (item | spell) ( <item_id> | <spell_id> )Command to buy an item or spell"),
    market(market) {}

bool BuyCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() != 3)
    {
        std::cout << "Invalid Usage : " << getUsage() << std::endl;
        return false;
    }

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(hero == nullptr)
    {
        std::cout << "Unknown hero " << args[0] << std::endl;
    }

    if(args[1].compare("item") == 0)
    {

        Item* item = market->getItem(stoi(args[1]));

        if(item == nullptr)
        {
            std::cout << "Unable to find item." << std::endl;
        }

        if(hero->getMoney() > item->getPrice())
        {
            hero->addItem(item);
            hero->setMoney(hero->getMoney() - item->getPrice());
        }
        else
        {
            std::cout << "You don't have enough money to buy the item" << std::endl;
        }
    }
    else if(args[1].compare("spell") == 0)
    {
        Spell* spell = market->getSpell(stoi(args[2]));

        if(spell == nullptr)
        {
            std::cout << "Unable to find spell." << std::endl;
        }

        if(hero->getMoney() > spell->getPrice())
        {
            hero->addSpell(spell);
            hero->setMoney(hero->getMoney() - spell->getPrice());
        }
        else
        {
            std::cout << "You don't have enough money to buy the spell" << std::endl;
        }
    }
    else
    {
        std::cout << "Invalid Usage : " << getUsage() << std::endl;
    }
}