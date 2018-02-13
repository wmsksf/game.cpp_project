
#include "HeroParty.h"
#include "../../entity/Grid/Tile.h"
#include "../../TheGrid.h"

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

bool HeroParty::move(direction direction, TheGrid* theGrid)
{
    Tile* tile;

    switch(direction)
    {
	    case up:
            tile  = theGrid->getGrid()->getTile((getX() - 1), getY());

            if(tile == nullptr)
                return false;

            if(tile->getName().compare("NonAccessibleTile") != 0)
                setX(getX() - 1);

            tile->enter();

            break;

        case down:

            tile = theGrid->getGrid()->getTile((getX() + 1), getY());

            if(tile == nullptr) return false;

            if(tile->getName().compare("NonAccessibleTile") != 0)
                setX(getX() + 1);

            tile->enter();

            break;
        case left:
            tile = theGrid->getGrid()->getTile(getX(), (getY() - 1));

            if(tile == nullptr) return false;

            if(tile->getName().compare("NonAccessibleTile") != 0)
                setY(getY() - 1);

            tile->enter();

            break;
        case right:
            tile = theGrid->getGrid()->getTile(getX(), (getY() + 1));

            if(tile == nullptr || tile->getName().compare("NonAccessibleTile") != 0)
                return false;

            if(tile->getName().compare("NonAccessibleTile") != 0)
                setY(getY() + 1);

            tile->enter();

            break;
    }

    return true;
}