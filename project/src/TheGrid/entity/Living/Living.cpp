//
// Created by admntiasf on 18/1/2018.
//

#include "Living.h"

Living::Living(const std::string &name, int healthPower)

               :name(name), level(1),
                healthPower(healthPower) {}

//monsters has certain level from the beginning
Living::Living(const std::string &name, int level,
               int healthPower)

                :name(name), level(level),
                 healthPower(healthPower) {}

bool Living::isConscious()
{
    return healthPower != 0;
}
