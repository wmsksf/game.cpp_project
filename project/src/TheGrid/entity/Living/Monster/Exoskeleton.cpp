
#include "Exoskeleton.h"
#include "../../../manage/Random/Random.h"

Exoskeleton::Exoskeleton(const std::string &name, int level)
            :Monster(name, level)
{
    maxHealthPower = 300 * level;
    currentHealthPower = maxHealthPower;
    healthRegen= 20;

    minDamage = 25 * level;
    maxDamage = 50  * level;
    dodgeProbability = 0.08;
    defense = 5 * level;
}

void Exoskeleton::displayStats()
{
    std::cout << "EXOSKELETON..." << std::endl;

    Monster::displayStats();
}