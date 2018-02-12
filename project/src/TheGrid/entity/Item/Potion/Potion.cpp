#include "Potion.h"

Potion::Potion(const std::string &name,
               int price)

        :Item(name, price,
              randomInRange(5, 12)) {}

void Potion::printItem() const
{
    std::cout << "Name of potion: " ;
    std::cout << this->getName() << std::endl;

    Item::printItem();
}