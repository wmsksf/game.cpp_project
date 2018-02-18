
#ifndef NONO_MOVECOMMAND_H
#define NONO_MOVECOMMAND_H

#include "Command.h"
#include "../Manager/HeroParty.h"
#include "../../TheGrid.h"

class MoveCommand : public Command
{
public:
    MoveCommand();

	virtual void execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_MOVECOMMAND_H