#include "Item.h"

Item::Item(const std::string &name, int price,
           int requiredLvl)

        :name(name), price(price),
         requiredLvl(requiredLvl) {}

void Item::printItem() const
{
    std::cout << "price: " << price << std::endl;
    std::cout << "required minimum level: ";
    std::cout << requiredLvl << std::endl;
}

const std::string& Item::getName() const
{
    return name;
}