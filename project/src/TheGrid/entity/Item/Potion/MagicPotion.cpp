#include "MagicPotion.h"
#include "../../../manage/Random/Utils.h"

MagicPotion::MagicPotion(const std::string &name)

            :Potion(name, randomInRange(70, 150)),
             magicPoints(randomInRange(100, 500)) {}

const std::string &MagicPotion::getDescription()
{
    return string_format("%s [%d level] : Restores up to %d Magic Power",
                         getName(), getRequiredLevel(), magicPoints);
}

void MagicPotion::boost(Hero *hero) const
{
    hero->restoreMagicPower(magicPoints);
}