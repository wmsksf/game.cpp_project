
#ifndef NONO_EXITMARKETCOMMAND_H
#define NONO_EXITMARKETCOMMAND_H

#include "Command.h"

class ExitMarketCommand : public Command
{
public:
    ExitMarketCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_EXITMARKETCOMMAND_H