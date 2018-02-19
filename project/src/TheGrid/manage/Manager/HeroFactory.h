
#ifndef NONO_HEROFACTORY_H
#define NONO_HEROFACTORY_H

#include "../../entity/Living/Hero/Hero.h"
#include "../../entity/Living/Hero/Paladin.h"
#include "../../entity/Living/Hero/Sorcerer.h"
#include "../../entity/Living/Hero/Warrior.h"

class HeroFactory
{
public:
    Paladin* createPaladin(const std::string& name);

    Sorcerer* createSorcerer(const std::string& name);

    Warrior* createWarrior(const std::string& name);
};

#endif //NONO_HEROFACTORY_H