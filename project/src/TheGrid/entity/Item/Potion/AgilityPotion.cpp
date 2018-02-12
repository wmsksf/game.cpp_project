#include "AgilityPotion.h"

AgilityPotion::AgilityPotion(const std::string &name)

                :Potion(name, Random(50, 100)){}

int AgilityPotion::boost() const
{
    return 5;
}