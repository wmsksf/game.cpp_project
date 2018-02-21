
#include "BuyCommand.h"
#include "../../../TheGrid.h"
#include "../../Random/Utils.h"

BuyCommand::BuyCommand(Market* market)
    :Command("buy", "[buy <hero_name>] (item | spell) ( <item_name> | <spell_name> )Command to buy an item or spell"),
    market(market) {}

bool BuyCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() < 3)
    {
        return invalidUsage();
    }

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(hero == nullptr)
    {
        std::cout << "Unknown hero!" << args[0] << std::endl;
        return false;
    }

    std::vector<std::string> tobeBought(args.begin() + 2, args.end());

    std::string name = join(tobeBought, " ");

    if(args[1].compare("item") == 0)
    {

        Item* item = market->getItem(name);

        if(item == nullptr)
        {
            std::cout << "Unable to find item." << std::endl;
            return false;
        }

        if(hero->getMoney() > item->getPrice())
        {
            hero->addItem(item);
            hero->setMoney(hero->getMoney() - item->getPrice());
        }
        else
        {
            std::cout << "You don't have enough money to buy the item." << std::endl;
            return false;
        }
    }
    else if(args[1].compare("spell") == 0)
    {
        Spell* spell = market->getSpell(name);

        if(spell == nullptr)
        {
            std::cout << "Unable to find spell." << std::endl;
            return  false;
        }

        if(hero->getMoney() > spell->getPrice())
        {
            hero->addSpell(spell);
            hero->setMoney(hero->getMoney() - spell->getPrice());
        }
        else
        {
            std::cout << "You don't have enough money to buy the spell." << std::endl;
            return false;
        }
    }
    else
    {
        return invalidUsage();
    }

    return true;
}