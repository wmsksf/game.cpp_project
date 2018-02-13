
#include "BuyCommand.h"
#include "../../entity/Grid/Tile.h"
#include "../../TheGrid.h"

BuyCommand::BuyCommand(TheGrid *theGrid) :Command("buy", "[buy] Command to buy from Market",
												  theGrid) {}

void BuyCommand::execute(std::vector<std::string> &args)
{
	Tile* tile = theGrid->getCurrentTile();

	if(tile->getName().compare("Market") != 0)
	{
		std::cout << "You should be on Market tile to buy." << std::endl;
		return ;
	}
}