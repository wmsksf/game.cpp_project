
#include <iostream>
#include "CreateHeroCommand.h"
#include "../../entity/Living/Hero/Paladin.h"
#include "../../entity/Living/Hero/Sorcerer.h"
#include "../../entity/Living/Hero/Warrior.h"

CreateHeroCommand::CreateHeroCommand(TheGrid *theGrid)
        :Command("create", "[create (Paladin | Sorcerer | Warrior)] Command to create a hero", theGrid) {}

void CreateHeroCommand::execute(std::vector<std::string> &args)
{
    if(theGrid->getParty()->getHeroes().size() == 3)
    {
        std::cout << "You can create up to three heroes per game!" << std::endl;
        return;
    }

    std::string name;

    if(args[0].compare("Paladin") == 0)
    {
        HeroName(name);

        Hero* hero = new Paladin(name);

        theGrid->getParty()->setHeroes(hero);
    }
    else if(args[0].compare("Sorcerer") == 0)
    {
        HeroName(name);

        Hero* hero = new Sorcerer(name);

        theGrid->getParty()->setHeroes(hero);
    }
    else if(args[0].compare("Warrior") == 0)
    {
        HeroName(name);

        Hero *hero = new Warrior(name);

        theGrid->getParty()->setHeroes(hero);
    }
}

void CreateHeroCommand::HeroName(std::string &hero)
{
    std::cout << "Give a name for your hero..." << std::endl;

    std::cin >> hero;

    std::cout<< "You named your hero: " << hero << std::endl;
}