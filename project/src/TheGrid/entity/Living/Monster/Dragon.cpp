
#include "Dragon.h"
#include "../../../manage/Random/Random.h"

Dragon::Dragon(const std::string &name, int level)

            :Monster(name, level)
{
    maxHealthPower = 500 * level;
    currentHealthPower = maxHealthPower;

    minDamage = 10 * level;
    maxDamage = 100 * level;
    dodgeProbability = 0.1;
    defense = 2 * level;
}

void Dragon::displayStats()
{
    std::cout << "DRAGON..." << std::endl;

    Monster::displayStats();
}
