
#include <iostream>
#include "Command.h"

Command::Command(const std::string &name, const std::string &usage)
		:name(name), usage(usage) {}

bool Command::matches(const std::string& name)
{
	return this->name.compare(name) == 0;
}

const std::string &Command::getUsage() const
{
    return usage;
}

bool Command::invalidUsage()
{
	std::cout << "Invalid Usage :" << getUsage() << std::endl;
    return false;
}
