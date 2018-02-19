//
// Created by admntiasf on 18/2/2018.
//

#ifndef NONO_BUYCOMMAND_H
#define NONO_BUYCOMMAND_H


#include "Command.h"
#include "../../entity/Grid/Market.h"

class BuyCommand : public Command
{
private:
    Market* market;

public:
    BuyCommand(Market* market);

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};


#endif //NONO_BUYCOMMAND_H
