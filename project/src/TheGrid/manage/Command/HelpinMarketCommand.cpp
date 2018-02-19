
#include "HelpinMarketCommand.h"

HelpinMarketCommand::HelpinMarketCommand(Market *market)
                    :Command("helpinMarket", "[helpinMarket] List of commands of the Market"),
                     market(market) {}

bool HelpinMarketCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    std::cout << "All commands of the Market :" << std::endl;

    std::vector<Command*>* commands = market->getMarketManager()->getCommands();

    for (std::vector<Command*>::iterator it = commands->begin(); it != commands->end(); it++)
    {
        std::cout << (*it)->getUsage() << std::endl;
    }

    delete commands;

    return true;
}