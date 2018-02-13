
#include "BattleArena.h"

BattleArena::BattleArena() {}

void BattleArena::displayBattleInfo()
{
	std::cout << "HEROES:" << std::endl;

	for (std::vector<Hero *>::iterator i = heroes.begin();
	     i != heroes.end(); i++)
	{
		(*i)->displayStats();
	}

	std::cout << "MONSTERS:" << std::endl;

	for (std::vector<Monster *>::iterator i = monsters.begin();
	     i != monsters.end(); i++)
	{
		(*i)->displayStats();
	}
}

void BattleArena::heroRound(Hero *hero)
{
	//on use potion
    std::vector<Item*> potions = hero->getInventory().getItemsByCategory("Potion");

}

void BattleArena::monsterRound(Monster *monster)
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
