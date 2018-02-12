//
// Created by kostas on 2/12/18.
//

#include "DisplayMapCommand.h"

DisplayMapCommand::DisplayMapCommand(TheGrid* theGrid) : Command("displayMap", theGrid){}

void DisplayMapCommand::execute(std::vector<std::string> &args)
{
	HeroParty* party = theGrid->getParty();
	theGrid->getGrid()->displayGrid(party->getX(), party->getY());
}
