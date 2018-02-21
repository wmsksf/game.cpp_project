
#ifndef NONO_CREATEMONSTERS_H
#define NONO_CREATEMONSTERS_H

#include "HeroParty.h"
#include "../../entity/Living/Monster/Exoskeleton.h"
#include "../../entity/Living/Monster/Spirit.h"
#include "../../entity/Living/Monster/Dragon.h"
#include "NameFactory.h"

class MonsterFactory
{
private:
    NameFactory* nameFactory;

    std::vector<Monster*> monsters;

    Exoskeleton* createExoskeleton(HeroParty *party);
    Spirit* createSpirit(HeroParty* party);
    Dragon* createDragon(HeroParty* party);

public:
    MonsterFactory(NameFactory* nameFactory);

    std::vector<Monster*>* createMonsters(HeroParty* party);
};

#endif //NONO_CREATEMONSTERS_H