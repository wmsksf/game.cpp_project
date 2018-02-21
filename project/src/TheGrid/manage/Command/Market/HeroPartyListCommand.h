
#ifndef NONO_HEROPARTYLISTCOMMAND_H
#define NONO_HEROPARTYLISTCOMMAND_H

#include "../Command.h"

class HeroPartyListCommand : public Command
{
public:
    HeroPartyListCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_HEROPARTYLISTCOMMAND_H