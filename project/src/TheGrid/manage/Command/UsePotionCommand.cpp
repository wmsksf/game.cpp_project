
#include "UsePotionCommand.h"
#include "../../TheGrid.h"
#include "../Random/Utils.h"

UsePotionCommand::UsePotionCommand()
                :Command("usePotion", "[usePotion <potion_name>] Command to use potion") {}

bool UsePotionCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() < 1)
    {
        return invalidUsage();
    }

    std::string potionName;

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(hero == nullptr)
    {
        std::vector<std::string> ppotion(args.begin(), args.end() - 1);
        hero = theGrid->getParty()->getHero(*(args.end() - 1));

        potionName = join(ppotion, " ");
    }
    else
    {
        std::vector<std::string> potionn(args.begin() + 1, args.end());

        potionName = join(potionn, " ");
    }

    Item* potion = hero->getItem(potionName);

    if(potion == nullptr)
    {
        std::cout << "Could not find potion." << std::endl;
        std::cout << "Check your potions once again..." << std::endl;

        hero->printItemsByCategory("Potion");

        return false;
    }

    hero->use((Potion*)potion);
    hero->removeItem(potion);

    return true;
}