
#include "HeroFactory.h"

Paladin* HeroFactory::createPaladin(const std::string &name)
{
    return new Paladin(name);
}

Sorcerer* HeroFactory::createSorcerer(const std::string &name)
{
    return new Sorcerer(name);
}

Warrior* HeroFactory::createWarrior(const std::string &name)
{
    return new Warrior(name);
}