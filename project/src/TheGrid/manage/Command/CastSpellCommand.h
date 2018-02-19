
#ifndef NONO_CASTSPELLCOMMAND_H
#define NONO_CASTSPELLCOMMAND_H

#include "Command.h"
#include "../Manager/BattleArena.h"

class CastSpellCommand : public Command
{
private:
    BattleArena* battleArena;

    Spell* getSpell(Hero* hero);

public:
    CastSpellCommand(BattleArena* battleArena);

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_CASTSPELLCOMMAND_H