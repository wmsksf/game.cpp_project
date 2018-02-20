
#include <iostream>
#include "CreateHeroCommand.h"
#include "../../entity/Living/Hero/Paladin.h"
#include "../../entity/Living/Hero/Sorcerer.h"
#include "../../entity/Living/Hero/Warrior.h"

CreateHeroCommand::CreateHeroCommand()
        :Command("create", "[create (Paladin | Sorcerer | Warrior) <hero_name>] Command to create a hero, name CANNOT contain spaces!")
{}

bool CreateHeroCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() != 2)
    {
        std::cout << "Invalid Usage :" << getUsage() << std::endl;
        return false;
    }

    HeroFactory* heroFactory = theGrid->getHeroFactory();

    if(theGrid->getParty()->getPartySize() >= 3)
    {
        std::cout << "Worthy player you can create up to three heroes!" << std::endl;
        return false;
    }

    std::string name = args[1];

    if(args[0].compare("Paladin") == 0)
    {
        theGrid->getParty()->addHero(heroFactory->createPaladin(name));
    }
    else if(args[0].compare("Sorcerer") == 0)
    {
        theGrid->getParty()->addHero(heroFactory->createSorcerer(name));
    }
    else if(args[0].compare("Warrior") == 0)
    {
        theGrid->getParty()->addHero(heroFactory->createWarrior(name));
    }

    return true;
}
