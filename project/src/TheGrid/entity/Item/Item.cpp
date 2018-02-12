#include "Item.h"
#include "../../manage/Random/Utils.h"

Item::Item(const std::string &name, int price,
           int requiredLevel)

        :name(name), price(price),
         requiredLevel(requiredLevel) {}

void Item::printItem() const
{
    std::cout << "price: " << price << std::endl;
    std::cout << "required minimum level: ";
    std::cout << requiredLevel << std::endl;
}

const std::string& Item::getName() const
{
    return name;
}

int Item::getPrice() const
{
	return price;
}

int Item::getRequiredLevel() const
{
	return requiredLevel;
}

const std::string &Item::getDescription()
{
	return string_format("%s [%d level]", name, requiredLevel);
}