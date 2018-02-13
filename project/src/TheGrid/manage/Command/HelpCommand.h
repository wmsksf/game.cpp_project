//
// Created by admntiasf on 13/2/2018.
//

#ifndef NONO_HELPCOMMAND_H
#define NONO_HELPCOMMAND_H


#include "Command.h"
#include "../../TheGrid.h"

class HelpCommand : public Command
{
private:
    std::vector<Command*> commands;

public:
    HelpCommand(TheGrid* theGrid);

    virtual void execute(std::vector<std::string> &args);
};


#endif //NONO_HELPCOMMAND_H
