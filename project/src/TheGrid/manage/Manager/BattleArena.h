#ifndef NONO_BATTLEARENA_H
#define NONO_BATTLEARENA_H

#include <vector>
#include "../../entity/Living/Monster/Monster.h"
#include "../../entity/Living/Hero/Hero.h"

class BattleArena
{
private:
    std::vector<Monster*> monsters;
    std::vector<Hero*> heroes;

    void heroRound();
    void monsterRound();

    bool isFinished();

    void reward();

    void displayBattleInfo();

public:
    void start();
};

#endif //NONO_BATTLEARENA_H