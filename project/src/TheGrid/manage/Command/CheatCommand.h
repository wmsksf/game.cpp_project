//
// Created by admntiasf on 21/2/2018.
//

#ifndef NONO_CHEATCOMMAND_H
#define NONO_CHEATCOMMAND_H


#include "Command.h"

class CheatCommand : public Command
{

public:
    CheatCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);

};


#endif //NONO_CHEATCOMMAND_H
