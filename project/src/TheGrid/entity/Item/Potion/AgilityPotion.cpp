#include "AgilityPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

AgilityPotion::AgilityPotion(const std::string &name)

                :Potion(name, randomInRange(50, 100)), agilityPoints(randomInRange(1, 5))
{}

const std::string &AgilityPotion::getDescription()
{
    return string_format("%s [%d level] : Increases Agility by %d.",
                         getName(), getRequiredLevel(), agilityPoints);
}

void AgilityPotion::boost(Hero *hero)
{
    hero->setAgility(hero->getAgility() + agilityPoints);
}