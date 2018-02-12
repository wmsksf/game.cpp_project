
#include "HealthPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

HealthPotion::HealthPotion(const std::string &name)

                :Potion(name, randomInRange(80, 120)),
                 healthPoints(randomInRange(100, 500)) {}

const std::string& HealthPotion::getDescription()
{
    return string_format("%s [%d level] : Restores up to %d Health points.",
                         getName(), getRequiredLevel(), healthPoints);
}

void HealthPotion::boost(Hero* hero) const
{
    hero->restoreHealth(healthPoints);
}