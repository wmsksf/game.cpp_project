//
// Created by admntiasf on 3/11/2016.
//

#ifndef NONO_MARKETLISTCOMMAND_H
#define NONO_MARKETLISTCOMMAND_H


#include "Command.h"
#include "../../entity/Grid/Market.h"

class MarketListCommand : public Command
{
private:
    Market* market;

public:
    MarketListCommand(Market* market);

    void execute(TheGrid *theGrid, std::vector<std::string> &args);

};


#endif //NONO_MARKETLISTCOMMAND_H
