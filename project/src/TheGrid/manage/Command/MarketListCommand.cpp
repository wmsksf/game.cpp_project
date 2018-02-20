
#include "MarketListCommand.h"

MarketListCommand::MarketListCommand(Market *market)
    :Command("marketList", "[marketList] Command to list items and spells of the Market"),
     market(market)
{}

bool MarketListCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    market->printMarket();

    return true;
}