
#include "QuitGameCommand.h"

QuitGameCommand::QuitGameCommand(TheGrid* theGrid)
				:Command("quitGame", theGrid){}

void QuitGameCommand::execute(std::vector<std::string> &args)
{
	theGrid->quit();
}