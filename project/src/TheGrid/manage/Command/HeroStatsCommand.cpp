
#include "HeroStatsCommand.h"
#include "../../TheGrid.h"

HeroStatsCommand::HeroStatsCommand()
                :Command("heroStats", "[heroStats <hero_name>] Command to display the stats of the heroes'") {}

bool HeroStatsCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() == 1)
    {
        std::string name = args[0];

        Hero* hero = theGrid->getParty()->getHero(name);

        if(hero == nullptr)
        {
            std::cout << "Uknown hero...Try again" << std::endl;
            return false;
        }

        hero->displayStats();

        return true;
    }


    theGrid->getParty()->showHeroesStats();
    return true;
}
