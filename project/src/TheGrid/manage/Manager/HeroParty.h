#ifndef NONO_HEROPARTY_H
#define NONO_HEROPARTY_H

#include "../../entity/Living/Hero/Hero.h"

class HeroParty
{
private:
    std::vector<Hero*> heroes;
    int x;
    int y;

public:
    const std::vector<Hero*>& getHeroes() const;

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);
};

#endif //NONO_HEROPARTY_H