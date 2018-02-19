
#include "UsePotionCommand.h"

UsePotionCommand::UsePotionCommand(BattleArena *battleArena)
                :Command("usePotion", "[usePotion] Command to use potion"),
                battleArena(battleArena) {}

bool UsePotionCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    Hero* hero = battleArena->getParty()->getHero(args[0]);

    Potion* potion = getPotion(hero);

    if(potion == nullptr)
        return false;

    battleArena->usePotion(hero, potion);

    return true;
}

Potion* UsePotionCommand::getPotion(Hero* hero)
{
    if(hero->getInventory().noPotions())
    {
        std::cout << "Your inventory is empty... Cannot use any potion." << std::endl;
        return nullptr;
    }

    std::cout << "Which potion to use <potion_name>?" << std::endl;

    hero->printItemsofInventory("Potion");

    std::string name;
    std::cin >> name;

    Item* item = hero->getItem(name);

    while(item == nullptr)
    {
        std::cout << "Unknown potion..." << std::endl;
        std::cout << "You may have given the name wrong..." << std::endl;
        std::cout << "Please check your inventory once again." << std::endl;

        hero->printItemsofInventory("Potion");

        std::cin >> name;
        item = hero->getItem(name);
    }

    return (Potion*)item;
}