
#include "MagicPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

MagicPotion::MagicPotion(const std::string &name)

            :Potion(name, randomInRange(70, 150)),
             magicPoints(randomInRange(100, 500)) {}

std::string MagicPotion::getDescription()
{
    return string_format("%s [%d level] [%d coins] : Restores up to %d Magic Power",
                         getName().c_str(), getRequiredLevel(), getPrice(), magicPoints);
}

void MagicPotion::boost(Hero* hero)
{
    hero->restoreMagicPower(magicPoints);
}

Item* MagicPotion::clone()
{
    return new MagicPotion(*this);
}

int MagicPotion::getMagicPoints() const
{
    return magicPoints;
}

void MagicPotion::setMagicPoints(int magicPoints)
{
    MagicPotion::magicPoints = magicPoints;
}