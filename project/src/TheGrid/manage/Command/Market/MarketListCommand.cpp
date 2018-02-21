
#include "MarketListCommand.h"

MarketListCommand::MarketListCommand(Market *market)
    :Command("marketList", "[marketList] Command to list items and spells of the Market"),
     market(market)
{}

bool MarketListCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    std::cout << std::endl;

    market->printMarket();

    return true;
}