
#include "QuitGameCommand.h"

QuitGameCommand::QuitGameCommand()
				:Command("quitGame", "[quitGame] Command to quit game") {}

bool QuitGameCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
	theGrid->quit();

	return true;
}