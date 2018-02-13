
#include "BattleArena.h"

BattleArena::BattleArena() {}

void BattleArena::displayBattleInfo()
{
	std::cout << "HEROES:" << std::endl;

	for (std::vector<Hero*>::iterator i = heroes.begin(); i != heroes.end(); i++)
	{
		(*i)->displayStats();
	}

	std::cout << "MONSTERS:" << std::endl;

	for (std::vector<Monster*>::iterator i = monsters.begin(); i != monsters.end(); i++)
	{
		(*i)->displayStats();
	}
}

void BattleArena::heroRound(Hero* hero)
{
	//on use potion
    std::vector<Item*> potions = hero->getInventory().getItemsByCategory("Potion");


}

void BattleArena::monsterRound(Monster* monster)
{

}

bool BattleArena::isFinished()
{
	for (std::vector<Hero*>::iterator it = heroes.begin(); it != heroes.end(); it++)
	{
		if(!(*it)->isConscious()) heroCount++;
	}

	for (std::vector<Monster*>::iterator it = monsters.begin(); it != monsters.end(); it++)
	{
		if(!(*it)->isConscious()) monsterCount++;
	}

	if(heroCount == heroes.size() || monsterCount == monsters.size())
		return true;
	else
		return false;
}

void BattleArena::start()
{
	while(!isFinished())
	{
		for (std::vector<Hero*>::iterator it = heroes.begin(); it != heroes.end(); it++)
		{
			heroRound(*it);
		}

		for (std::vector<Monster*>::iterator it = monsters.begin(); it != monsters.end(); it++)
		{
			monsterRound(*it);
		}

		rounds++;
	}

	if (!victors()) defeat();
	else reward();
}

int BattleArena::victors()
{
	if(heroCount == heroes.size()) return 0;
	else return 1;
}

void BattleArena::defeat()
{

}

void BattleArena::reward()
{

}