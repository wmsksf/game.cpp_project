
#include "HeroParty.h"
#include "../../entity/Grid/Tile.h"
#include "../../TheGrid.h"

HeroParty::HeroParty() {}

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

bool HeroParty::move(MovingDirection direction, TheGrid* theGrid)
{
    Tile* currentTile = theGrid->getCurrentTile();
    Tile* tile;

    switch(direction)
    {
	    case up:
            tile  = theGrid->getGrid()->getTile((getX() - 1), getY());

            if(tile == nullptr) return false;

            if(tile->getName().compare("NonAccessibleTile") != 0)
                setX(getX() - 1);

            currentTile->leave(theGrid);
            tile->enter(theGrid);

            break;

        case down:
            tile = theGrid->getGrid()->getTile((getX() + 1), getY());

            if(tile == nullptr) return false;

            if(tile->getName().compare("NonAccessibleTile") != 0)
                setX(getX() + 1);

            currentTile->leave(theGrid);
            tile->enter(theGrid);

            break;

        case left:
            tile = theGrid->getGrid()->getTile(getX(), (getY() - 1));

            if(tile == nullptr) return false;

            if(tile->getName().compare("NonAccessibleTile") != 0)
                setY(getY() - 1);

            currentTile->leave(theGrid);
            tile->enter(theGrid);

            break;

        case right:
            tile = theGrid->getGrid()->getTile(getX(), (getY() + 1));

            if(tile == nullptr) return false;

            if(tile->getName().compare("NonAccessibleTile") != 0)
                setY(getY() + 1);

            currentTile->leave(theGrid);
            tile->enter(theGrid);

            break;
    }

    return true;
}

void HeroParty::displayParty()
{
    for (int i = 0; i < heroes.size(); i++)
    {
        std::cout << "[" << i + 1 << "]" << heroes[i]->getName() << std::endl;
    }
}
double HeroParty::getAverageLevel()
{
    int sum = 0;

    for( int i = 0; i < heroes.size(); i++)
    {
        sum += heroes[i]->getLevel();
    }

    return (double) sum / (double) heroes.size();
}

void HeroParty::addHero(Hero *hero)
{
    heroes.push_back(hero);
}

int HeroParty::getPartySize()
{
    return heroes.size();
}

Hero* HeroParty::getHero(int index)
{
    return heroes[index - 1];
}

Hero* HeroParty::getHero(const std::string &name)
{
    for(int i = 0; i < heroes.size(); i++)
    {
        if(heroes[i]->getName().compare(name) == 0)
            return heroes[i];
    }

    return nullptr;
}