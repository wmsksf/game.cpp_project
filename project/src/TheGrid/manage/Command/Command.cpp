
#include "Command.h"

Command::Command(const std::string &name, TheGrid* theGrid)
	:name(name), theGrid(theGrid)
{ }

bool Command::matches(const std::string& name)
{
	return this->name.compare(name) == 0;
}