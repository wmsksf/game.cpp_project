
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
        return invalidUsage();
    }

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(hero == nullptr)
    {
        std::cout << "Unknown hero " << args[0] << std::endl;
        return false;
    }

    std::cout << std::endl;
    hero->printInventory();
}