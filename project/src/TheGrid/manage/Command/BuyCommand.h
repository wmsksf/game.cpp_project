
#ifndef NONO_BUYCOMMAND_H
#define NONO_BUYCOMMAND_H

#include "Command.h"
#include "../../entity/Living/Hero/Hero.h"
#include "../../entity/Grid/Tile.h"

class BuyCommand : public Command
{
private:
	void buyItem(Tile* tile, Hero* Hero);
	void buySpell(Tile* tile, Hero* hero);

public:
	BuyCommand(TheGrid *theGrid);

	virtual void execute(std::vector<std::string> &args);
};

#endif //NONO_BUYCOMMAND_H