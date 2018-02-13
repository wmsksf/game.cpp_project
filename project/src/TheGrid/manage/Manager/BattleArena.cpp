
#include "BattleArena.h"

BattleArena::BattleArena()
{}

void BattleArena::displayBattleInfo()
{
    std::cout << "HEROES:" << std::endl;

    for(std::vector<Hero*>::iterator i = heroes.begin();
        i != heroes.end(); i++)
    {
        (*i)->displayStats();
    }

    std::cout << "MONSTERS:" << std::endl;

    for (std::vector<Monster*>::iterator i = monsters.begin();
         i != monsters.end(); i++)
    {
        (*i)->displayStats();
    }
}

void BattleArena::heroRound()
{

}

void BattleArena::monsterRound()
{

}

bool BattleArena::isFinished()
{
	return false;
}

void BattleArena::reward()
{

}

void BattleArena::start()
{

}
