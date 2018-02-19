
#include "SellCommand.h"
#include "../../TheGrid.h"

SellCommand::SellCommand(Market *market)
    :Command("sell", "[sell <hero_name> (item | spell) (<item_name> | <spell_name>)]  Command to sell an item or spell"),
     market(market) {}

bool SellCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
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
        return false;
    }

    if(args[1].compare("item") == 0)
    {

        Item* item = hero->getItem(args[2]);

        if(item == nullptr)
        {
            std::cout << "Unable to find item." << std::endl;
            return false;
        }

        hero->removeItem(item);
        hero->setMoney(hero->getMoney() + item->getPrice());
    }
    else if(args[1].compare("spell") == 0)
    {
        Spell* spell = hero->getSpell(args[2]);

        if(spell == nullptr)
        {
            std::cout << "Unable to find spell." << std::endl;
            return false;
        }

        hero->removeSpell(spell);
        hero->setMoney(hero->getMoney() + spell->getPrice());
    }
    else
    {
        std::cout << "Invalid Usage : " << getUsage() << std::endl;
        return false;
    }

    return true;
}