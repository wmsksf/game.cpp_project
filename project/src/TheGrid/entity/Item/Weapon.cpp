#include "Weapon.h"
#include "../../manage/Random/Random.h"

Weapon::Weapon(const std::string &name)

        :Item(name, "Weapon",
              randomInRange(150, 350),
              randomInRange(15, 25)),
         damage(randomInRange(40, 50)),
         dualWeild(randomBool()) {}

bool Weapon::isDualWeild() const
{
    return dualWeild;
}

int Weapon::getDamage() const
{
	return damage;
}

Item* Weapon::clone() const
{
    Weapon *weapon = new Weapon(this->getName());

    weapon->setPrice(this->getPrice());
    weapon->setRequiredLevel(this->getRequiredLevel());
    weapon->setCategory(this->getCategory());

    weapon->setDamage(this->getDamage());
    weapon->setDualWeild(this->isDualWeild());

    return (Item*)weapon;
}

void Weapon::setDamage(int damage)
{
    Weapon::damage = damage;
}

void Weapon::setDualWeild(bool dualWeild)
{
    Weapon::dualWeild = dualWeild;
}
