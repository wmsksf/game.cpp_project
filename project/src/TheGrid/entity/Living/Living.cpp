
#include "Living.h"

Living::Living(const std::string &name, int level)
               :name(name),
                level(level) {}

bool Living::isConscious()
{
    return maxHealthPower != 0;
}

void Living::displayStats()
{
    std::cout << "[" << name << " ]" << std::endl;
    std::cout << "[" << maxHealthPower << " hp points]";
    std::cout << std::endl;
}

int Living::getMaxHealthPower() const
{
    return maxHealthPower;
}

void Living::setMaxHealthPower(int maxHealthPower)
{
    Living::maxHealthPower = maxHealthPower;
}

int Living::getCurrentHealthPower() const
{
    return currentHealthPower;
}

void Living::setCurrentHealthPower(int currentHealthPower)
{
    Living::currentHealthPower = currentHealthPower;
}

void Living::restoreHealth(int healthPoints)
{
    currentHealthPower += healthPoints;

    if(currentHealthPower > maxHealthPower)
    {
        currentHealthPower = maxHealthPower;
    }
}

const std::string &Living::getName() const
{
    return name;
}

int Living::getLevel() const
{
    return level;
}
