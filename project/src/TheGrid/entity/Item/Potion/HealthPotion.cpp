
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

void HealthPotion::boost(Hero* hero)
{
    hero->restoreHealth(healthPoints);
}

Item* HealthPotion::clone()
{
    HealthPotion* healthPotion = new HealthPotion(this->getName());

    healthPotion->setPrice(this->getPrice());
    healthPotion->setRequiredLevel(this->getRequiredLevel());
    healthPotion->setCategory(this->getCategory());

    healthPotion->setHealthPoints(this->getHealthPoints());

    return (Item*)healthPotion;
}

int HealthPotion::getHealthPoints() const
{
    return healthPoints;
}

void HealthPotion::setHealthPoints(int healthPoints)
{
    HealthPotion::healthPoints = healthPoints;
}