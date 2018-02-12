#include "Weapon.h"

Weapon::Weapon(const std::string &name)

        :Item(name,
              randomInRange(150, 350),
              randomInRange(15, 25)),
         damage(randomInRange(40, 50)),
         dualWeild(randomBool())
{}

void Weapon::printItem() const
{
    std::cout << "Name of weapon: ";
    std::cout << this->getName() << std::endl;

    Item::printItem();

    std::cout << "amount of damage: [" << damage << "]" << std::endl;

    if(isDualWeild())
    {
        std::cout << "requires both hands to be used";
        std::cout << std::endl;
    }
    else
    {
        std::cout << "does not require both hands to be used";
        std::cout << std::endl;
    }
}


bool Weapon::isDualWeild() const
{
    return dualWeild;
}

int Weapon::getDamage() const
{
	return damage;
}
