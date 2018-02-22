
#include "SellCommand.h"
#include "../../../TheGrid.h"
#include "../../Random/Utils.h"

SellCommand::SellCommand(Market *market)
    :Command("sell", "[sell <hero_name> (item | spell) (<item_name> | <spell_name>)]  Command to sell an item or spell"),
     market(market) {}

bool SellCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() < 3)
    {
        return invalidUsage();
    }

    std::vector<std::string> tobeSold(args.begin() + 2, args.end());
    std::string name = join(tobeSold, " ");

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(hero == nullptr)
    {
        std::cout << std::endl << "Unknown hero " << args[0] << "!" << std::endl;
        return false;
    }

    if(args[1].compare("item") == 0)
    {

        Item* item = hero->getItem(name);

        if(item == nullptr)
        {
            std::cout << std::endl << "Unable to find item." << std::endl;
            return false;
        }

        hero->removeItem(item);
        hero->setMoney(hero->getMoney() + item->getPrice());
    }
    else if(args[1].compare("spell") == 0)
    {
        Spell* spell = hero->getSpell(name);

        if(spell == nullptr)
        {
            std::cout << std::endl << "Unable to find spell." << std::endl;
            return false;
        }

        hero->removeSpell(spell);
        hero->setMoney(hero->getMoney() + spell->getPrice());
    }
    else
    {
        return invalidUsage();
    }

    return true;
}