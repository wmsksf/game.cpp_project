
#ifndef NONO_HELPINARENACOMMAND_H
#define NONO_HELPINARENACOMMAND_H

#include "Command.h"
#include "../Manager/BattleArena.h"

class HelpinArenaCommand : public Command
{
private:
    BattleArena* battleArena;

public:
    HelpinArenaCommand(BattleArena* battleArena);

    virtual bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};


#endif //NONO_HELPINARENACOMMAND_H
