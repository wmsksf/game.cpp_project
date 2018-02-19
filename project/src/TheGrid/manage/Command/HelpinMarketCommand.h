
#ifndef NONO_HELPINMARKETCOMMAND_H
#define NONO_HELPINMARKETCOMMAND_H

#include "Command.h"
#include "../../entity/Grid/Market.h"

class HelpinMarketCommand : public Command
{
private:
    Market* market;

public:
    HelpinMarketCommand(Market* market);

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_HELPINMARKETCOMMAND_H