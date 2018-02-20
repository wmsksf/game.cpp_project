
#include "Spirit.h"
#include "../../../manage/Random/Random.h"

Spirit::Spirit(const std::string &name, int level)
            :Monster(name, level)
{
    maxHealthPower = 280 * level;
    currentHealthPower = maxHealthPower;
    healthRegen = 10;

    minDamage = 10 * level;
    maxDamage = 15 * level;
    dodgeProbability = 0.3;
    defense = 2 * level;
}

void Spirit::displayStats()
{
    std::cout << "SPIRIT..." << std::endl;

    Monster::displayStats();
}
