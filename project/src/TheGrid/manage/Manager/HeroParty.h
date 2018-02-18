
#ifndef NONO_HEROPARTY_H
#define NONO_HEROPARTY_H

#include "../../entity/Living/Hero/Hero.h"
#include "../../entity/Living/Hero/Inventory.h"

class TheGrid;

enum MovingDirection {up, down, left, right};

class HeroParty
{
private:
    std::vector<Hero*> heroes;
    int x;
    int y;

public:
    HeroParty();

    int getPartySize();
    Hero* getHero(const std::string& name);
    Hero* getHero(int index);
    void addHero(Hero *hero);

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

    bool move(MovingDirection direction, TheGrid* theGrid);

    void displayParty();

    double getAverageLevel();

};

#endif //NONO_HEROPARTY_H