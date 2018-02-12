
#ifndef NONO_SELLCOMMAND_H
#define NONO_SELLCOMMAND_H

#include "Command.h"

class SellCommand  : public Command
{
public:
    SellCommand(TheGrid *theGrid);

    virtual void execute(std::vector<std::string> &args);
};

#endif //NONO_SELLCOMMAND_H