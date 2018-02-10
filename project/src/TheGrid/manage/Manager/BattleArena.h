//
// Created by admntiasf on 10/2/2018.
//

#ifndef NONO_BATTLEARENA_H
#define NONO_BATTLEARENA_H


#include <vector>
#include "../../Console.h"
#include "../../entity/Living/Monster/Monster.h"
#include "../../entity/Living/Hero/Hero.h"

class BattleArena
{
private:
    Console* console;

    std::vector<Monster*> monsters;
    std::vector<Hero*> heroes;

private:
    void heroRound();
    void monsterRound();

    bool isFinished();

    void reward();

    void displayBattleInfo();

public:
    void start();
};

#endif //NONO_BATTLEARENA_H
