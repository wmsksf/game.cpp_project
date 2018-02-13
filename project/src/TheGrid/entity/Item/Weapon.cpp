#include "Weapon.h"
#include "../../manage/Random/Random.h"

Weapon::Weapon(const std::string &name)

        :Item(name,
              randomInRange(150, 350),
              randomInRange(15, 25)),
         damage(randomInRange(40, 50)),
         dualWeild(randomBool())
{}

bool Weapon::isDualWeild() const
{
    return dualWeild;
}

int Weapon::getDamage() const
{
	return damage;
}
