//
// Created by kostas on 2/12/18.
//

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

};


#endif //NONO_COMMANDMANAGER_H
