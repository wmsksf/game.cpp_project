
#include "Armor.h"
#include "../../manage/Random/Utils.h"
#include "../../manage/Random/Random.h"

Armor::Armor(const std::string &name)

        :Item(name, "Armor", randomInRange(100, 300),
              randomInRange(2, 15)),
         armorPoints(randomInRange(10, 50))
{}

int Armor::getArmorPoints() const
{
    return armorPoints;
}

void Armor::setArmorPoints(int armorPoints)
{
    Armor::armorPoints = armorPoints;
}

Item* Armor::clone()
{
    return new Armor(*this);
}