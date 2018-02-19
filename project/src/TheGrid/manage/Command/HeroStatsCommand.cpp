
#include "HeroStatsCommand.h"
#include "../../TheGrid.h"

HeroStatsCommand::HeroStatsCommand()
                :Command("heroStats", "[heroStats] Command to display the stats of the heroes'") {}

bool HeroStatsCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    for(std::vector<Hero*>::const_iterator hero = theGrid->getParty()->getHeroes().begin();
    hero != theGrid->getParty()->getHeroes().end(); hero++)
    {
        (*hero)->displayStats();
    }

    return true;
}
