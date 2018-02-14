
#ifndef NONO_HEROPARTY_H
#define NONO_HEROPARTY_H

#include "../../entity/Living/Hero/Hero.h"
#include "../../entity/Living/Hero/Inventory.h"

class TheGrid;

enum direction {up, down, left, right};

class HeroParty
{
private:
    std::vector<Hero*> heroes;
    int x;
    int y;

public:
    HeroParty();

    const std::vector<Hero*>& getHeroes() const;
    void setHeroes(Hero *hero);

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

    bool move(direction, TheGrid* theGrid);

    void displayParty();

    Hero* chooseHero();
};

#endif //NONO_HEROPARTY_H