//
// Created by admntiasf on 18/1/2018.
//

#include "Living.h"

Living::Living(std::string nm, int power)

               :name(nm), level(1),
                healthPower(power) {}

bool Living::isConscious() {
    return healthPower == 0;
}
