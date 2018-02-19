
#ifndef NONO_CREATEHEROCOMMAND_H
#define NONO_CREATEHEROCOMMAND_H

#include "Command.h"
#include "../../TheGrid.h"
#include "../Manager/HeroFactory.h"

class CreateHeroCommand : public Command
{
private:
    void HeroName(std::string &hero);

public:
    CreateHeroCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_CREATEHERO_H