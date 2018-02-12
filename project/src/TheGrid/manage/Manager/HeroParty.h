
#ifndef NONO_HEROPARTY_H
#define NONO_HEROPARTY_H

#include "../../entity/Living/Hero/Hero.h"
#include "../../entity/Living/Hero/Inventory.h"
#include "../../TheGrid.h"


class HeroParty
{
private:
    std::vector<Hero*> heroes;
    int x;
    int y;

public:
    enum class direction {up, down, left, right};

    const std::vector<Hero*>& getHeroes() const;

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

    bool move(direction, TheGrid* theGrid);
};

#endif //NONO_HEROPARTY_H