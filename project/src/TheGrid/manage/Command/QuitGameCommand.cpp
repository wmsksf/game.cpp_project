
#include "QuitGameCommand.h"

QuitGameCommand::QuitGameCommand()
				:Command("quitGame", "[quitGame] Command to quit game"){}

void QuitGameCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
	theGrid->quit();
}