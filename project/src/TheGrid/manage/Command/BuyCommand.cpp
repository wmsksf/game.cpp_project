//
// Created by kostas on 2/12/18.
//

#include "BuyCommand.h"
#include "../../entity/Grid/Tile.h"
#include "../../TheGrid.h"

BuyCommand::BuyCommand(TheGrid *theGrid) : Command("buy", theGrid) {}

void BuyCommand::execute(std::vector<std::string> &args)
{
	Tile* tile = theGrid->getCurrentTile();

	if(tile->getName().compare("Market") != 0)
	{
		std::cout << "You should be on Market tile to buy." << std::endl;
		return ;
	}


}
