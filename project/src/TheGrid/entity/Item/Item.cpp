
#include "Item.h"
#include "../../manage/Random/Utils.h"

Item::Item(const std::string &name, const std::string &category,
           int price, int requiredLevel)

        :name(name), category(category), price(price),
         requiredLevel(requiredLevel) {}

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
	return string_format("%s [%d level]",
						 name, requiredLevel);
}

const std::string &Item::getCategory() const
{
    return category;
}
