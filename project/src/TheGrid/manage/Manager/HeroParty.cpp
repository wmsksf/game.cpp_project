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

void HeroParty::addItem(Item *item)
{
    inventory.addItem(item);
}

Item *HeroParty::getItem(const std::string &name)
{
	return inventory.getItem(name);
}

void HeroParty::removeItem(Item *item)
{
    inventory.remove(item);
}

void HeroParty::printInventory()
{
    inventory.display();
}