#include "Armor.h"

Armor::Armor(const std::string &name)

        :Item(name, Random(100,300),
              Random(5, 20)) {}

void Armor::printItem() const
{
    std::cout << "Name of armor: " ;
    std::cout << this->getName() << std::endl;

    Item::printItem();
}

int Armor::reduceDamage() const
{
    return 15;
}