//
// Created by admntiasf on 10/2/2018.
//

#include "HeroParty.h"

int HeroParty::getX() const
{
    return x;
}

void HeroParty::setX(int x)
{
    HeroParty::x = x;
}

int HeroParty::getY() const
{
    return y;
}

void HeroParty::setY(int y)
{
    HeroParty::y = y;
}

const std::vector<Hero *>& HeroParty::getHeroes() const
{
    return heroes;
}
