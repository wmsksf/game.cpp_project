
#ifndef NONO_COMMANDMANAGER_H
#define NONO_COMMANDMANAGER_H

#include <vector>
#include "../Command/Command.h"

class CommandManager
{
private:
	std::vector<Command*> commands;

public:
	CommandManager(TheGrid* theGrid);

	void execute(const std::string& line);

	const std::vector<Command*> &getCommands() const;
};

#endif //NONO_COMMANDMANAGER_H