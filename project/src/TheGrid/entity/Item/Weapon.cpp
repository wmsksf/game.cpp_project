#include "Weapon.h"

Weapon::Weapon(const std::string &name)

        :Item(name, Random(150, 350),
              Random(15, 25)),
         damage(Random(40,50)),
         dualWeild((bool)Random(0,1)) {}

void Weapon::printItem() const
{
    std::cout << "Name of weapon: ";
    std::cout << this->getName() << std::endl;

    Item::printItem();

    std::cout << "amount of damage: ";
    std::cout << this->getDamage() << std::endl;

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

void Weapon::setDamage(int damage)
{
    Weapon::damage = damage;
}

int Weapon::getDamage() const
{
    return damage;
}

bool Weapon::isDualWeild() const
{
    return dualWeild;
}