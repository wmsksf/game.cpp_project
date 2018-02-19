
#include "MarketListCommand.h"

MarketListCommand::MarketListCommand(Market *market)
    :Command("marketList", "[marketList] Command to list market items and spells.") {}

bool MarketListCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    market->printMarket();

    return true;
}