
#include "CommandManager.h"
#include "../Command/QuitGameCommand.h"
#include "../Command/MoveCommand.h"
#include "../Command/DisplayMapCommand.h"
#include "../Random/Utils.h"
#include "../Command/CreateHeroCommand.h"
#include "../Command/HelpCommand.h"

CommandManager::CommandManager(std::vector<Command *>* commands)
	:commands(commands), managers() {}

bool CommandManager::execute(TheGrid* theGrid, const std::string &line)
{
	for(int i =0; i < managers.size(); i++)
	{
		bool result = managers[i]->execute(theGrid, line);

		if(result)
            return true;
	}

	std::vector<std::string> args = split(line, " ");

	if(args.size( ) == 0)
		return false;

	std::string name = args[0];
	args.erase(args.begin());

	for(int i = 0; i < commands->size(); i++)
	{
		if((*commands)[i]->matches(name))
		{
			bool result = (*commands)[i]->execute(theGrid, args);

			if(result)
				return true;
		}
	}

    return false;
}

std::vector<Command *>* CommandManager::getCommands()
{
	std::vector<Command*>* allCommands  = new std::vector<Command*>();

	for(int i = 0; i < managers.size(); i++)
	{
		std::vector<Command*>* managerCommands = managers[i]->getCommands();

		for(int j = 0; j < managerCommands->size(); j++)
		{
			allCommands->push_back((*managerCommands)[j]);
		}

		delete managerCommands;
	}

	for(int i = 0; i < commands->size(); i++)
	{
		allCommands->push_back((*commands)[i]);
	}

	return allCommands;
}

void CommandManager::registerManager(CommandManager* manager)
{
	managers.push_back(manager);
}

void CommandManager::unregisterManager(CommandManager* manager)
{
	for(int i =0; i < managers.size(); i++)
	{
		if(managers[i] == manager)
		{
			managers.erase(managers.begin() + i);
			return ;
		}
	}
}