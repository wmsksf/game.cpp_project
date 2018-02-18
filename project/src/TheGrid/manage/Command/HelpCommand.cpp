
#include "HelpCommand.h"

HelpCommand::HelpCommand()
        :Command("help", "[help] List of all commands")
{

}

void HelpCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    std::cout << "All commands :" << std::endl;

    std::vector<Command*>* commands = theGrid->getCommandManager()->getCommands();

    for (std::vector<Command*>::iterator it = commands->begin(); it != commands->end(); it++)
    {
        std::cout << (*it)->getUsage() << std::endl;
    }

    delete commands ;
}