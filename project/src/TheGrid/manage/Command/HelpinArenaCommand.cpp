
#include "HelpinArenaCommand.h"

HelpinArenaCommand::HelpinArenaCommand(BattleArena *battleArena)
                    :Command("helpinArena", "[helpinArena] List of commands of the Arena"),
                    battleArena(battleArena){}

bool HelpinArenaCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    std::cout << "All commands of the Arena :" << std::endl;

    std::vector<Command*>* commands = battleArena->getBattleManager()->getCommands();

    for (std::vector<Command*>::iterator it = commands->begin(); it != commands->end(); it++)
    {
        std::cout << (*it)->getUsage() << std::endl;
    }

    delete commands;

    return true;
}