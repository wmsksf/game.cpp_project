
#include "AgilityPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

AgilityPotion::AgilityPotion(const std::string &name)

                :Potion(name, randomInRange(50, 100)), agilityPoints(randomInRange(1, 5))
{}

std::string AgilityPotion::getDescription()
{
    return string_format("%s [%d level] [%d coins] : Increases Agility by %d.",
                         getName().c_str(), getRequiredLevel(), getPrice(), agilityPoints);
}

void AgilityPotion::boost(Hero* hero)
{
    hero->setAgility(hero->getAgility() + agilityPoints);
}

Item* AgilityPotion::clone()
{
    return new AgilityPotion(*this);
}

int AgilityPotion::getAgilityPoints() const
{
    return agilityPoints;
}

void AgilityPotion::setAgilityPoints(int agilityPoints)
{
    AgilityPotion::agilityPoints = agilityPoints;
}