
#ifndef NONO_BATTLEARENA_H
#define NONO_BATTLEARENA_H

#include <vector>
#include "../../entity/Living/Monster/Monster.h"
#include "../../entity/Living/Hero/Hero.h"
#include "../../entity/Spell/Spell.h"
#include "MonsterFactory.h"
#include "CommandManager.h"

class TheGrid;

class BattleArena
{
private:
    CommandManager* commandManager;
    TheGrid* theGrid;

    HeroParty* party;

	std::vector<Monster*>* monsters;

    void heroRound(Hero* hero);
    void monsterRound(Monster* monster);

    bool isFinished();

    void reward();
	void defeat();
	bool victors();

    void displayBattleInfo();

	void spellCast(Hero* hero, Spell* spell, Monster* monster);

	void attack(Hero* hero, Monster* monster);

	void usePotion(Hero* hero, Potion* potion);

public:
    BattleArena(TheGrid *pGrid);

    void start();

private:
	void showMonsters();

	Monster* monsterDialog();

	Spell *spellDialog(Hero *hero);

	Potion *potionDialog(Hero *hero);

    void initCommandManager();

    MonsterStats *calculateStats(Monster *monster);
};

#endif //NONO_BATTLEARENA_H