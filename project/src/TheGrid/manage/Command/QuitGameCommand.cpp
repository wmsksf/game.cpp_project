
#include "QuitGameCommand.h"

QuitGameCommand::QuitGameCommand(TheGrid* theGrid)
				:Command("quitGame", "[quitGame] Command to quit game", theGrid){}

void QuitGameCommand::execute(std::vector<std::string> &args)
{
	theGrid->quit();
}