
#ifndef NONO_MARKETLISTCOMMAND_H
#define NONO_MARKETLISTCOMMAND_H

#include "../Command.h"
#include "../../../entity/Grid/Market.h"

class MarketListCommand : public Command
{
private:
    Market* market;

public:
    MarketListCommand(Market* market);

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_MARKETLISTCOMMAND_H