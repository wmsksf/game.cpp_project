//
// Created by admntiasf on 10/2/2018.
//

#ifndef NONO_MOVECOMMAND_H
#define NONO_MOVECOMMAND_H


#include "Command.h"
#include "../Manager/HeroParty.h"
#include "../../TheGrid.h"

class MoveCommand : public Command
{

public:
    MoveCommand(TheGrid* theGrid);

	virtual void execute(std::vector<std::string> &args);
};


#endif //NONO_MOVECOMMAND_H
