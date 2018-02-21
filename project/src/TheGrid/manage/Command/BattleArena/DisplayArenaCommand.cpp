
#include "DisplayArenaCommand.h"

DisplayArenaCommand::DisplayArenaCommand(BattleArena *battleArena)
                :Command("displayArena", "[displayArena] Command to display stats of all heroes and monsters in the arena"),
                battleArena(battleArena) {}

bool DisplayArenaCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    std::cout << std::endl;

    battleArena->displayBattleInfo();

    return false;
}