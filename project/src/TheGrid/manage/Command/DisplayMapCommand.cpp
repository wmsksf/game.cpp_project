
#include "DisplayMapCommand.h"

DisplayMapCommand::DisplayMapCommand(TheGrid* theGrid)
					:Command("displayMap", "[displayMap] Command to display the map", theGrid) {}

void DisplayMapCommand::execute(std::vector<std::string> &args)
{
	HeroParty* party = theGrid->getParty();
	theGrid->getGrid()->displayGrid(party->getX(), party->getY());
}