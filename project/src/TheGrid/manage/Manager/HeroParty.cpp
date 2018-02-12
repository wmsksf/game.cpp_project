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

void HeroParty::move(HeroParty::MOVE move)
{
    switch(move)
    {
        case MOVE::up:
            break;

        case MOVE::down:
            break;

        case MOVE::left:
            break;

        case MOVE::right:
            break;
    }
}

void HeroParty::move(std::string &move)
{
    this->move(convert(move));
}

const HeroParty::MOVE &HeroParty::convert(std::string &move)
{
   if(move.compare("up") == 0)
   {
       return MOVE::up;
   }
   else if(move.compare("down") == 0)
   {
       return MOVE::down;
   }
   else if(move.compare("left") == 0)
   {
       return MOVE::left;
   }
   else if(move.compare("right") == 0)
   {
       return MOVE::right;
   }
   else return nullptr;
}