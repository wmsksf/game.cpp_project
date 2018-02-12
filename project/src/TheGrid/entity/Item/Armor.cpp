#include "Armor.h"
#include "../../manage/Random/Utils.h"

Armor::Armor(const std::string &name)

        :Item(name, randomInRange(100, 300), randomInRange(5, 20)),
         armorPoints(randomInRange(10, 50))
{}

int Armor::getArmorPoints() const
{
    return armorPoints;
}
