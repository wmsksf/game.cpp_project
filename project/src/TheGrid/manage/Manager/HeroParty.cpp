
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

const std::vector<Hero*>& HeroParty::getHeroes() const
{
    return heroes;
}

void HeroParty::setHeroes(Hero *hero)
{
    heroes.push_back(hero);
}


bool HeroParty::move(direction direction, TheGrid* theGrid)
{
    Tile* tile;

    switch(direction)
    {
	    case up:
            tile  = theGrid->getGrid()->getTile((getX() - 1), getY());

            if(tile == nullptr) return false;

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

            if(tile == nullptr) return false;

            if(tile->getName().compare("NonAccessibleTile") != 0)
                setY(getY() + 1);

            tile->enter();

            break;
    }

    return true;
}

void HeroParty::displayParty()
{
    int i = 0;
    for (std::vector<Hero*>::iterator it = heroes.begin(); it != heroes.end(); it++)
    {
        i++;
        std::cout << "[" << i << "]" << (*it)->getName() << std::endl;
    }
}

Hero* HeroParty::chooseHero()
{
    std::cout << "Choose hero -give a number-..." << std::endl;

    displayParty();

    int hero;
    std::cin >> hero;

    while(hero < 0 || hero > heroes.size())
    {
        std::cout << "Choose one of your heroes..." << std::endl;
        displayParty();

        std::cin >> hero;
    }

    return heroes[hero - 1];
}