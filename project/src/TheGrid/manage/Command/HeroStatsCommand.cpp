
#include "HeroStatsCommand.h"
#include "../../TheGrid.h"

HeroStatsCommand::HeroStatsCommand()
                :Command("displayStats", "[displayStats (<hero_name>)] Command to display the stats of the heroes'") {}

bool HeroStatsCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() == 1)
    {
        std::string name = args[0];

        Hero* hero = theGrid->getParty()->getHero(name);

        if(hero == nullptr)
        {
            std::cout << "Uknown hero " << args[0] << "!" << std::endl;
            return false;
        }

        std::cout << std::endl;
        hero->displayStats();

        return true;
    }

    std::cout << std::endl;
    theGrid->getParty()->showHeroesStats();

    return true;
}