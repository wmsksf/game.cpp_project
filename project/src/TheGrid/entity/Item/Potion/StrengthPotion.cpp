#include "StrengthPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

StrengthPotion::StrengthPotion(const std::string &name)

                :Potion(name, randomInRange(80, 160)),
                 strengthPoints(randomInRange(1, 5)) {}

const std::string &StrengthPotion::getDescription()
{
    return string_format("%s [%d level] : Restores up to %d Magic Power",
                         getName(), getRequiredLevel(), strengthPoints);
}

void StrengthPotion::boost(Hero *hero) const
{
    hero->setStrength(hero->getStrength() + strengthPoints);
}
