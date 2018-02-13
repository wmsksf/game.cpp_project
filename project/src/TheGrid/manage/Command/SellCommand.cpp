
#include <iostream>
#include "SellCommand.h"
#include "../../entity/Grid/Tile.h"
#include "../../TheGrid.h"

SellCommand::SellCommand(TheGrid *theGrid) :Command("sell", "[sell] Command to sell to Market",
                                                    theGrid) {}

void SellCommand::execute(std::vector<std::string> &args)
{
    Tile* tile = theGrid->getCurrentTile();

    if(tile->getName().compare("Market") != 0)
    {
        std::cout << "You should be on Market tile to sell." << std::endl;
        return ;
    }
}