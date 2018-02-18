//
// Created by admntiasf on 13/2/2018.
//

#ifndef NONO_HELPCOMMAND_H
#define NONO_HELPCOMMAND_H


#include "Command.h"
#include "../../TheGrid.h"

class HelpCommand : public Command
{

public:
    HelpCommand();

    virtual void execute(TheGrid *theGrid, std::vector<std::string> &args);
};


#endif //NONO_HELPCOMMAND_H
