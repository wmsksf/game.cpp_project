
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
    CommandManager* BattleManager;

    TheGrid* theGrid;

    HeroParty* party;

	std::vector<Monster*>* monsters;

    void heroRound(Hero* hero);
    void monsterRound(Monster* monster);

    bool isFinished();

    void reward();
	void defeat();
	bool victors();

	int totalContribution;
    int* heroContribution;

    int moneyReward;
    int experienceReward;

public:
    void displayBattleInfo();

	void spellCast(Hero* hero, Spell* spell, Monster* monster);

	void attack(Hero* hero, Monster* monster);

    BattleArena(TheGrid* theGrid);

    void start();

	void showMonsters();

	Monster* monsterDialog();

    HeroParty* getParty() const;

    std::vector<Monster *>* getMonsters() const;

	CommandManager* getBattleManager() const;

    Monster *getMonster(int index);

private:
    void initCommandManager();

    MonsterStats* calculateStats(Monster* monster);

	void killMonster(Monster *monster);

	void countDownMonsterEffects();

	void regenerate();

    void contribute(Hero *hero, int damage);
};

#endif //NONO_BATTLEARENA_H