
#ifndef NONO_BUYCOMMAND_H
#define NONO_BUYCOMMAND_H

#include "Command.h"

class BuyCommand : public Command
{
public:
	BuyCommand(TheGrid *theGrid);

	virtual void execute(std::vector<std::string> &args);
};

#endif //NONO_BUYCOMMAND_H