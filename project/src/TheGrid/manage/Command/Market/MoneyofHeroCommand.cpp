
#include "MoneyofHeroCommand.h"
#include "../../../TheGrid.h"

MoneyofHeroCommand::MoneyofHeroCommand()
                    :Command("moneyof", "[moneyof <hero_name>] Command showing the amount of money a hero has") {}

bool MoneyofHeroCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() != 1)
    {
        return invalidUsage();
    }

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(hero == nullptr)
    {
        std::cout << std::endl << "Unknown hero " << args[0]  << "!" << std::endl;
        return false;
    }

    std::cout << std::endl << args[0] << " has : " << hero->getMoney() << " money."
              << std::endl;

    return true;
}