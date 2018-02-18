
#include <iostream>
#include "CreateHeroCommand.h"
#include "../../entity/Living/Hero/Paladin.h"
#include "../../entity/Living/Hero/Sorcerer.h"
#include "../../entity/Living/Hero/Warrior.h"

CreateHeroCommand::CreateHeroCommand()
        :Command("create", "[create (Paladin | Sorcerer | Warrior)] Command to create a hero")
{}

void CreateHeroCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    HeroFactory* heroFactory = theGrid->getHeroFactory();

    if(theGrid->getParty()->getPartySize() == 3)
    {
        std::cout << "Worthy player you can create up to three heroes!" << std::endl;
        return;
    }

    std::string name;

    HeroName(name);

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
}

void CreateHeroCommand::HeroName(std::string &hero)
{
    std::cout << "Give a name for your hero..." << std::endl;

    std::cin >> hero;

    std::cout<< "You named your hero: " << hero << std::endl;
}