
#ifndef NONO_DISPLAYGRIDCOMMAND_H
#define NONO_DISPLAYGRIDCOMMAND_H

#include "Command.h"
#include "../../TheGrid.h"

class DisplayMapCommand : public Command
{
public:
	DisplayMapCommand();

	virtual bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_DISPLAYGRIDCOMMAND_H