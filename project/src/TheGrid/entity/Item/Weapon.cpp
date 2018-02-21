#include "Weapon.h"
#include "../../manage/Random/Random.h"


Weapon::Weapon(const std::string& name)

        :Item(name, "Weapon",
              randomInRange(150, 350),
              randomInRange(2, 15)),
         damage(randomInRange(40, 50)),
         dualWeild(randomBool()) {}


Weapon::Weapon(const std::string &name, int requiredLevel, int price, int damage, bool dualWeild)
    : Item(name, "Weapon", price, requiredLevel), damage(damage), dualWeild(dualWeild)
{

}
bool Weapon::isDualWeild() const
{
    return dualWeild;
}

int Weapon::getDamage() const
{
	return damage;
}

Item* Weapon::clone()
{
    return new Weapon(*this);
}

void Weapon::setDamage(int damage)
{
    Weapon::damage = damage;
}

void Weapon::setDualWeild(bool dualWeild)
{
    Weapon::dualWeild = dualWeild;
}
