
#ifndef NONO_QUITGAMECOMMAND_H
#define NONO_QUITGAMECOMMAND_H

#include "Command.h"
#include "../../TheGrid.h"

class QuitGameCommand : public Command
{
public:
	QuitGameCommand();

	virtual void execute(TheGrid *theGrid, std::vector<std::string> &args);
};

#endif //NONO_QUITGAMECOMMAND_H