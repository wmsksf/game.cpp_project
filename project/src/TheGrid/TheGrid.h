
#ifndef NONO_GAME_H
#define NONO_GAME_H

#include "manage/Manager/HeroParty.h"
#include "entity/Grid/Grid.h"
#include "manage/Manager/CommandManager.h"
#include "entity/Spell/Spell.h"
#include "manage/Manager/HeroFactory.h"
#include "manage/Manager/MonsterFactory.h"

class TheGrid
{
private:
	HeroParty* party;
	Grid* grid;
	CommandManager* commandManager;

	HeroFactory* heroFactory;
	ItemFactory* itemFactory;
	TileFactory* tileFactory;
	NameFactory* nameFactory;

public:
	TheGrid(const std::string& resourceFolder);

	void start();

	void quit();

	Tile* getCurrentTile();
	HeroParty* getParty() const;
	Grid* getGrid() const;
	CommandManager* getCommandManager() const;

    HeroFactory* getHeroFactory();
	NameFactory* getNameFactory();

private:
	void initCommandManager();
};

#endif //NONO_GAME_H