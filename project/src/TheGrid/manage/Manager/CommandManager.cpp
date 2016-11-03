
#include "CommandManager.h"
#include "../Command/QuitGameCommand.h"
#include "../Command/MoveCommand.h"
#include "../Command/DisplayMapCommand.h"
#include "../Random/Utils.h"
#include "../Command/CreateHeroCommand.h"
#include "../Command/HelpCommand.h"


CommandManager::CommandManager(TheGrid *theGrid)
{
	commands.push_back(new QuitGameCommand(theGrid));
	commands.push_back(new MoveCommand(theGrid));
	commands.push_back(new DisplayMapCommand(theGrid));
	commands.push_back(new CreateHeroCommand(theGrid));
	commands.push_back(new HelpCommand(theGrid));
}

void CommandManager::execute(const std::string &line)
{
	std::vector<std::string> args = split(line, " ");

	std::string name = args[0];
	args.erase(args.begin());


	for(int i = 0; i < commands.size(); i++)
	{
		if(commands[i]->matches(name))
		{
			commands[i]->execute(args);
			return ;
		}
	}

	std::cout << "Unable to find command with name " << name  << std::endl;
}

const std::vector<Command *> &CommandManager::getCommands() const
{
	return commands;
}