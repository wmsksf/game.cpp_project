
#include "DisplayMapCommand.h"

DisplayMapCommand::DisplayMapCommand()
					:Command("displayMap", "[displayMap] Command to display the map") {}

bool DisplayMapCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
	HeroParty* party = theGrid->getParty();
	theGrid->getGrid()->displayGrid(party->getX(), party->getY());

	return true;
}