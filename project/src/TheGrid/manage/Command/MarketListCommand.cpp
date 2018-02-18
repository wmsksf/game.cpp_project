//
// Created by admntiasf on 3/11/2016.
//

#include "MarketListCommand.h"

MarketListCommand::MarketListCommand(Market *market)
    :Command("marketList", "marketList Command to list market items and spells.") {}

void MarketListCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    market->printMarket();
}

