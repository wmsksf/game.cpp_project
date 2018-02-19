
#ifndef NONO_HEROSTATSCOMMAND_H
#define NONO_HEROSTATSCOMMAND_H

#include "Command.h"

class HeroStatsCommand : public Command
{
public:
    HeroStatsCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_HEROSTATSCOMMAND_H