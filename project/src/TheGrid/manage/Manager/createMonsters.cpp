
#include "createMonsters.h"

createMonsters::createMonsters(HeroParty *heroParty)
{
    //calculate level for monsters
    heroParty->getHeroes();

    int monsters = randomInRange(2,5);

    level = this->getLevel(heroParty);

    for (int i = 0; i != monsters ; i++)
    {
        Monster*;
    }
}

const std::vector<Monster *> &createMonsters::getMonsters() const
{
    return monsters;
}

int createMonsters::getLevel(HeroParty *heroParty) const
{
    for(std::vector<Hero*>::iterator it = heroParty->getHeroes();... )
    {
        //get heroes' levels one by one->get min max of those ones ->
        //return randomInrange(min, max)
    }
}
