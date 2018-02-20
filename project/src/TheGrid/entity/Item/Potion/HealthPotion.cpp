
#include "HealthPotion.h"
#include "../../../manage/Random/Utils.h"
#include "../../../manage/Random/Random.h"

HealthPotion::HealthPotion(const std::string &name)

                :Potion(name, randomInRange(80, 120)),
                 healthPoints(randomInRange(100, 500)) {}

std::string HealthPotion::getDescription()
{
    return string_format("%s [%d level] [%d coins] : Restores up to %d Health points.",
                         getName().c_str(), getRequiredLevel(), getPrice(), healthPoints);
}

void HealthPotion::boost(Hero* hero)
{
    hero->restoreHealth(healthPoints);
}

Item* HealthPotion::clone()
{
    return new HealthPotion(*this);
}

int HealthPotion::getHealthPoints() const
{
    return healthPoints;
}

void HealthPotion::setHealthPoints(int healthPoints)
{
    HealthPotion::healthPoints = healthPoints;
}