#include "HealthPotion.h"

HealthPotion::HealthPotion(const std::string &name)

                :Potion(name, Random(80, 120)){}

int HealthPotion::boost() const
{
    return 10;
}