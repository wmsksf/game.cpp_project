//
// Created by admntiasf on 3/11/2016.
//

#ifndef NONO_SELLCOMMAND_H
#define NONO_SELLCOMMAND_H


#include "../../entity/Grid/Market.h"

class SellCommand : public Command{

private:
    Market* market;

public :
    SellCommand(Market* market);

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);

};


#endif //NONO_SELLCOMMAND_H
