
#ifndef NONO_DISPLAYGRIDCOMMAND_H
#define NONO_DISPLAYGRIDCOMMAND_H

#include "Command.h"
#include "../../TheGrid.h"

class DisplayMapCommand : public Command
{
public:
	DisplayMapCommand(TheGrid* theGrid);

	virtual void execute(std::vector<std::string> &args);
};

#endif //NONO_DISPLAYGRIDCOMMAND_H