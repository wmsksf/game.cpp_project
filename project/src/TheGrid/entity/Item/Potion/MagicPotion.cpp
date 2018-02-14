
#include "MagicPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

MagicPotion::MagicPotion(const std::string &name)

            :Potion(name, randomInRange(70, 150)),
             magicPoints(randomInRange(100, 500)) {}

const std::string& MagicPotion::getDescription()
{
    return string_format("%s [%d level] : Restores up to %d Magic Power",
                         getName(), getRequiredLevel(), magicPoints);
}

void MagicPotion::boost(Hero* hero) const
{
    hero->restoreMagicPower(magicPoints);
}

Item* MagicPotion::clone()
{
    MagicPotion* magicPotion = new MagicPotion(this->getName());

    magicPotion->setPrice(this->getPrice());
    magicPotion->setRequiredLevel(this->getRequiredLevel());
    magicPotion->setCategory(this->getCategory());

    magicPotion->setMagicPoints(this->getMagicPoints());

    return (Item*)magicPotion;
}

int MagicPotion::getMagicPoints() const
{
    return magicPoints;
}

void MagicPotion::setMagicPoints(int magicPoints)
{
    MagicPotion::magicPoints = magicPoints;
}