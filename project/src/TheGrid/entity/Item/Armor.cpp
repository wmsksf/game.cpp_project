
#include "Armor.h"
#include "../../manage/Random/Utils.h"
#include "../../manage/Random/Random.h"

Armor::Armor(const std::string &name)

        :Item(name, "Armor", randomInRange(100, 300),
              randomInRange(5, 20)),
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
    Armor* armor = new Armor(this->getName());

    armor->setPrice(this->getPrice());
    armor->setRequiredLevel(this->getRequiredLevel());
    armor->setCategory(this->getCategory());

    armor->setArmorPoints(this->getArmorPoints());

    return (Item*)armor;
}