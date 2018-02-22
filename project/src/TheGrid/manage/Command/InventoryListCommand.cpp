
#include <iostream>
#include "InventoryListCommand.h"
#include "../../TheGrid.h"

InventoryListCommand::InventoryListCommand()
        : Command("displayInventory", "[displayInventory <hero_name>] Command to display items and spells in inventory")
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
        std::cout << std::endl << "Unknown hero " << args[0] << "!" << std::endl;
        return false;
    }

    hero->printInventory();
}