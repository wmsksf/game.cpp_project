
#include <iostream>
#include "InventoryListCommand.h"
#include "../../TheGrid.h"

InventoryListCommand::InventoryListCommand()
        : Command("showInventory", "[showInventory <hero_name>] Command to show items and spells in inventory")
{}

bool InventoryListCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() != 1)
    {
        std::cout << getUsage() << std::endl;

        return false;
    }

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    do
    {
        if(hero == nullptr)
        {
            std::cout << "Unknown hero" << std::endl;
            std::cout << "You may have given the name wrong..." << std::endl;
            std::cout << "Please choose a name of one of your heroes below." << std::endl;

            theGrid->getParty()->displayParty();
        }

        std::string name;
        std::cin >> name;

        hero = theGrid->getParty()->getHero(name);

    } while(hero != nullptr);

    hero->printInventory();
}