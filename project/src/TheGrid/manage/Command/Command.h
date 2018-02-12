
#ifndef NONO_COMMAND_H
#define NONO_COMMAND_H

#include <string>
#include <vector>

class TheGrid;

class Command
{
protected:
	std::string name;

	TheGrid* theGrid;

public:
	Command(const std::string& name, TheGrid* theGrid);

    virtual bool matches(const std::string& name);
    virtual void execute(std::vector<std::string>& args) = 0;
};

#endif //NONO_COMMAND_H