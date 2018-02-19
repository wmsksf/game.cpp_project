
#ifndef NONO_MONEYOFHEROCOMMAND_H
#define NONO_MONEYOFHEROCOMMAND_H

#include "Command.h"

class MoneyofHeroCommand : public Command
{
public:
    MoneyofHeroCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args) override;
};


#endif //NONO_MONEYOFHEROCOMMAND_H
