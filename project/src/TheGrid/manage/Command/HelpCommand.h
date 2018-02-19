
#ifndef NONO_HELPCOMMAND_H
#define NONO_HELPCOMMAND_H

#include "Command.h"
#include "../../TheGrid.h"

class HelpCommand : public Command
{

public:
    HelpCommand();

    virtual bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_HELPCOMMAND_H