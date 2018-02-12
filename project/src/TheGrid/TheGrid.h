//
// Created by admntiasf on 18/1/2018.
//

#ifndef NONO_GAME_H
#define NONO_GAME_H


#include "manage/Manager/HeroParty.h"
#include "entity/Grid/Grid.h"

class TheGrid {
private:
	HeroParty* party;
	Grid* grid;

public:
	HeroParty *getParty() const;

	Grid *getGrid() const;

};


#endif //NONO_GAME_H
