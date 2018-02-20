
#include "StrengthPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

StrengthPotion::StrengthPotion(const std::string &name)

                :Potion(name, randomInRange(80, 160)),
                 strengthPoints(randomInRange(1, 5)) {}

std::string StrengthPotion::getDescription()
{
    return string_format("%s [%d level] [%d coins]: Restores up to %d Magic Power",
                         getName().c_str(), getRequiredLevel(), getPrice(), strengthPoints);
}

void StrengthPotion::boost(Hero* hero)
{
    hero->setStrength(hero->getStrength() + strengthPoints);
}

Item* StrengthPotion::clone()
{
    return new StrengthPotion(*this);
}

int StrengthPotion::getStrengthPoints() const
{
    return strengthPoints;
}

void StrengthPotion::setStrengthPoints(int strengthPoints)
{
    StrengthPotion::strengthPoints = strengthPoints;
}