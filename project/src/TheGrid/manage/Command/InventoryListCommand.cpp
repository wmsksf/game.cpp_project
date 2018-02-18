//
// Created by admntiasf on 3/11/2016.
//

#include <iostream>
#include "InventoryListCommand.h"
#include "../../TheGrid.h"

InventoryListCommand::InventoryListCommand()
        : Command("showInventory", "showInventory <hero_name> Command to show items and spells in inventory")
{}

void InventoryListCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() != 1)
    {
        std::cout << getUsage() << std::endl;

        return ;
    }

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(hero == nullptr)
    {
        std::cout << "Unknown hero" << std::endl;
    }
    else
    {
        hero->printInventory();
    }
}
