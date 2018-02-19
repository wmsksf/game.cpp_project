
#ifndef NONO_DISPLAYARENACOMMAND_H
#define NONO_DISPLAYARENACOMMAND_H

#include "Command.h"
#include "../Manager/BattleArena.h"

class DisplayArenaCommand : public Command
{
private:
    BattleArena* battleArena;

public:
    DisplayArenaCommand(BattleArena* battleArena);

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_DISPLAYARENACOMMAND_H