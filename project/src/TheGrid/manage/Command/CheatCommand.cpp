//
// Created by admntiasf on 21/2/2018.
//

#include "CheatCommand.h"
#include "../../entity/Living/Hero/Hero.h"

#include "../../TheGrid.h"

CheatCommand::CheatCommand() :Command("cheat", "[cheat <hero_name>] Command to cheat, only for debuggers and noobs"){

}

bool CheatCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(theGrid->getParty()->getPartySize() == 0)
    {
        std::cout << "You must create a hero first." << std::endl;
        return false;
    }

    Hero* hero;

    if(args.size() == 0)
    {
        hero = theGrid->getParty()->getHero(0);
    }else
    {
        hero = theGrid->getParty()->getHero(args[0]);
    }

    if(hero == nullptr)
        return false;

    hero->gainExperience(1000000);

    Weapon* weapon = new Weapon("Noob Sword", 1, 0, 100000, false);
    hero->addItem(weapon);
    hero->equipWeapon(weapon);

    return true;
}

