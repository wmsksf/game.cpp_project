
#ifndef NONO_COMMAND_H
#define NONO_COMMAND_H

#include <string>
#include <vector>

class TheGrid;

class Command
{
protected:
	std::string name;
	std::string usage;

	TheGrid* theGrid;

public:
	Command(const std::string& name, const std::string& usage,
			TheGrid* theGrid);

	virtual const std::string &getUsage() const;

	virtual bool matches(const std::string& name);
    virtual void execute(std::vector<std::string>& args) = 0;
};

#endif //NONO_COMMAND_H