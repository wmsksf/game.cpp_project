//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_GAME_H
#define NONO_GAME_H


#include "manage/Manager/HeroParty.h"
#include "entity/Grid/Grid.h"
#include "manage/Manager/CommandManager.h"
#include "entity/Spell/Spell.h"


class TheGrid {
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
};


#endif //NONO_GAME_H
