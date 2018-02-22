
#ifndef NONO_USEPOTIONCOMMAND_H
#define NONO_USEPOTIONCOMMAND_H

#include "Command.h"
#include "../Manager/BattleArena.h"

class UsePotionCommand : public Command
{
public:
    UsePotionCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_USEPOTIONCOMMAND_H