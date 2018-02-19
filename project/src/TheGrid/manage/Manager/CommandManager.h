
#ifndef NONO_COMMANDMANAGER_H
#define NONO_COMMANDMANAGER_H

#include <vector>
#include "../Command/Command.h"
#include "../../entity/Living/Hero/Hero.h"

class CommandManager
{
private:
	std::vector<Command*>* commands;
	std::vector<CommandManager*> managers;

public:
	CommandManager(std::vector<Command*>* commands);

	bool execute(TheGrid* theGrid, const std::string& line);

	std::vector<Command*>* getCommands();

	void registerManager(CommandManager* manager);
	void unregisterManager(CommandManager* manager);
};

#endif //NONO_COMMANDMANAGER_H