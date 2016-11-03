
#ifndef NONO_CREATEMONSTERS_H
#define NONO_CREATEMONSTERS_H


#include "HeroParty.h"

class createMonsters
{
private:
    std::vector<Monster*> monsters;
    int level;

public:
    createMonsters(HeroParty* heroParty);

    const std::vector<Monster *> &getMonsters() const;

    int getLevel(HeroParty* heroParty) const;
};

#endif //NONO_CREATEMONSTERS_H