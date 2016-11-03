
#ifndef NONO_SELLCOMMAND_H
#define NONO_SELLCOMMAND_H

#include "Command.h"
#include "../../entity/Grid/Tile.h"
#include "../../entity/Living/Hero/Hero.h"

class SellCommand  : public Command
{
private:
    void sellItem(Tile* tile, Hero* hero);
    void sellSpell(Tile* tile, Hero* hero);

public:
    SellCommand(TheGrid *theGrid);

    void execute(std::vector<std::string> &args);
};

#endif //NONO_SELLCOMMAND_H