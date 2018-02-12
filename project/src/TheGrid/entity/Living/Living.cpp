#include "Living.h"

Living::Living(const std::string &name)

               :name(name), healthPower(1000) {}

bool Living::isConscious()
{
    return healthPower != 0;
}

void Living::displayStats()
{
    std::cout << "named: " << name << std::endl;
    std::cout << "hp points: " << healthPower;
    std::cout << std::endl;
}