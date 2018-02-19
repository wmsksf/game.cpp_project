
#ifndef NONO_ATTACKCOMMAND_H
#define NONO_ATTACKCOMMAND_H

#include "Command.h"
#include "../Manager/BattleArena.h"

class AttackCommand : public Command
{
private:
    BattleArena* battleArena;

public:
    AttackCommand(BattleArena* battleArena);

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_ATTACKCOMMAND_H