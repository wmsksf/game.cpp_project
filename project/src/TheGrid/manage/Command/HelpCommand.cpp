
#include "HelpCommand.h"

HelpCommand::HelpCommand(TheGrid *theGrid)
        :Command("help", "[help] List of all commands",
                 theGrid), commands(theGrid->getCommandManager()->getCommands()) {}

void HelpCommand::execute(std::vector<std::string> &args)
{
    std::cout << "All commands :" << std::endl;

    for (std::vector<Command*>::iterator it = commands.begin(); it != commands.end(); it++)
    {
        std::cout << (*it)->getUsage() << std::endl;
    }
}