
#ifndef NONO_GAME_H
#define NONO_GAME_H

#include "manage/Manager/HeroParty.h"
#include "entity/Grid/Grid.h"
#include "manage/Manager/CommandManager.h"
#include "entity/Spell/Spell.h"


class TheGrid
{
private:
	HeroParty* party;
	Grid* grid;
	CommandManager* commandManager;

	std::vector<Item*> allItems;
	std::vector<Spell*> allSpells;

public:

	TheGrid();

	void start();

	void quit();

	Tile* getCurrentTile();
	HeroParty *getParty() const;
	Grid *getGrid() const;
	CommandManager *getCommandManager() const;

	void setHeroParty();

	void Items();
	void getWeapons();
	void getArmors();
	void getPotions();

	void Spells();
};

#endif //NONO_GAME_H